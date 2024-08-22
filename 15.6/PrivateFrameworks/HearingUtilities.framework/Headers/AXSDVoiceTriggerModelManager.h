// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSDVOICETRIGGERMODELMANAGER_H
#define AXSDVOICETRIGGERMODELMANAGER_H

@class SNAudioStreamAnalyzer, AVAudioFormat, NSURL, NSString;
@protocol SNResultsObserving, AXSDVoiceTriggerAssetManagerDelegate, AXSDVoiceTriggerModelManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXSDVoiceTriggerAssetManager.h"

@interface AXSDVoiceTriggerModelManager : NSObject <SNResultsObserving, AXSDVoiceTriggerAssetManagerDelegate>

 {
    SNAudioStreamAnalyzer *_streamAnalyzer;
    AVAudioFormat *_format;
    AXSDVoiceTriggerAssetManager *_assetManager;
    BOOL _startRequested;
    NSURL *_assetPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSDVoiceTriggerModelManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property (readonly) Class superclass;


-(id)_readConfigFileWithError:(*id)arg0 ;
-(id)initWithError:(*id)arg0 ;
-(void)_startListening;
-(void)_stopListeningWithError:(id)arg0 ;
-(void)modelDidUpdate:(id)arg0 assetVersion:(NSUInteger)arg1 withError:(id)arg2 ;
-(void)processAudioBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)startListeningWithFormat:(id)arg0 ;
-(void)stopListening;


@end


#endif