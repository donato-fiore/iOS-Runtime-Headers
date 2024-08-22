// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKPRODUCER_H
#define OKPRODUCER_H

@class NSOperationQueue;
@protocol OKProducerDelegate;

#import <Foundation/Foundation.h>

#import "OKProducerPlugin.h"
#import "OKPresentation.h"

@interface OKProducer : NSObject {
    NSOperationQueue *_liveAuthoringOperationQueue;
    BOOL _liveAuthoringInProgress;
    CGFloat _startLiveAuthorTime;
}


@property (nonatomic) NSObject<OKProducerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) OKProducerPlugin *plugin; // ivar: _plugin
@property (retain, nonatomic) OKPresentation *presentation; // ivar: _presentation


+(void)setupJavascriptContext:(id)arg0 ;
// -(BOOL)author:(BOOL)arg0 progressBlock:(id)arg1 requiresProducer:(unk)arg2 error:(*BOOL)arg3  ;
// -(BOOL)liveAuthorInitialBootstrap:(id)arg0 error:(unk)arg1  ;
// -(BOOL)migratePresentation:(id)arg0 error:(unk)arg1  ;
-(BOOL)needsLiveAuthoring;
// -(BOOL)prepareLiveAuthoringIfNeeded:(id)arg0 error:(unk)arg1  ;
-(BOOL)resetLiveAuthoring;
-(BOOL)supportsLiveAuthoring;
-(CGFloat)_continueLiveAuthoringDelay;
-(NSUInteger)totalNumberOfLiveAuthoringItems;
-(float)currentLiveAuthoringProgress;
-(float)liveAuthoringProgressForMediaItem:(id)arg0 ;
-(id)init;
-(id)initWithPresentation:(id)arg0 andPlugin:(id)arg1 ;
// -(id)liveAuthorNextChunk:(id)arg0 error:(unk)arg1  ;
-(id)liveAuthoringOperationQueue;
-(void)_continueLiveAuthoring;
-(void)addSettingsFromDictionary:(id)arg0 onWidget:(id)arg1 ;
-(void)cancelLiveAuthoring:(BOOL)arg0 ;
-(void)cleanupPresentation:(id)arg0 ;
-(void)dealloc;
-(void)didChangeTextForWidget:(id)arg0 toSettings:(id)arg1 ;
-(void)didPanMediaForWidget:(id)arg0 toState:(id)arg1 ;
-(void)setSettingsObject:(id)arg0 forKeyPath:(id)arg1 onWidget:(id)arg2 ;
-(void)startLiveAuthoringIfNeeded;
-(void)updateSynopsisGuideline;


@end


#endif