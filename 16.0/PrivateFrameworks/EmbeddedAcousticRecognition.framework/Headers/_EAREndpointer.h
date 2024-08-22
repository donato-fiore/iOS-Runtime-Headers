// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARENDPOINTER_H
#define _EARENDPOINTER_H


#import <Foundation/Foundation.h>


@interface _EAREndpointer : NSObject {
    unique_ptr<quasar::HybridEndpointer, std::default_delete<quasar::HybridEndpointer>> _endpointer;
}




+(void)initialize;
-(BOOL)acceptEagerResultWithFeatures:(id)arg0 featuresToLog:(*id)arg1 ;
-(BOOL)didEndpointWithFeatures:(id)arg0 audioTimestamp:(CGFloat)arg1 featuresToLog:(*id)arg2 endpointPosterior:(*float)arg3 extraDelayMs:(*int)arg4 ;
-(BOOL)requestSupportedWithSamplingRate:(NSUInteger)arg0 ;
-(id)defaultServerEndpointFeatures;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 delaysTrigger:(BOOL)arg1 modelVersion:(*id)arg2 ;
-(id)initWithConfiguration:(id)arg0 modelVersion:(*id)arg1 ;
-(void)updateEndpointerDelayedTriggerSwitch:(BOOL)arg0 ;
-(void)updateEndpointerThresholdWithValue:(float)arg0 ;


@end


#endif