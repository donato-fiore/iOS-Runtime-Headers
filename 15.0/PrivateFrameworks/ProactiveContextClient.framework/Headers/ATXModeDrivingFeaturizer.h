// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODEDRIVINGFEATURIZER_H
#define ATXMODEDRIVINGFEATURIZER_H

@class BPSSink, BMBiomeScheduler, NSString;
@protocol ATXModeFeaturizer, OS_dispatch_queue, ATXModeFeaturizerDelegate;

#import <Foundation/Foundation.h>


@interface ATXModeDrivingFeaturizer : NSObject <ATXModeFeaturizer>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BPSSink *_DNDWDSink;
    BMBiomeScheduler *_DNDWDScheduler;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXModeFeaturizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_fetchMostRecentDNDWDEvent;
-(id)_provideFeaturesWithLastDNDWDEvent:(id)arg0 ;
-(id)provideFeatures;
-(void)_beginListeningForDNDWDEvents;
-(void)_processNewDNDWDEvent:(id)arg0 ;
-(void)beginListening;
-(void)stopListening;


@end


#endif