// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTSETTIMERATTRIBUTEINTENTHANDLER_H
#define MTSETTIMERATTRIBUTEINTENTHANDLER_H

@class NSString;
@protocol INSetTimerAttributeIntentHandling;


#import "MTUpdateTimerIntentHandler.h"

@interface MTSetTimerAttributeIntentHandler : MTUpdateTimerIntentHandler <INSetTimerAttributeIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_responseToSetTimerAttributeIntent:(id)arg0 withUpdatedTimer:(id)arg1 error:(id)arg2 dryRun:(BOOL)arg3 ;
-(void)_updateTimer:(id)arg0 toDuration:(CGFloat)arg1 toLabel:(id)arg2 dryRun:(BOOL)arg3 completion:(id)arg4 ;
-(void)confirmSetTimerAttribute:(id)arg0 completion:(id)arg1 ;
-(void)handleSetTimerAttribute:(id)arg0 completion:(id)arg1 ;
-(void)resolveTargetTimerForSetTimerAttribute:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveToDurationForSetTimerAttribute:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif