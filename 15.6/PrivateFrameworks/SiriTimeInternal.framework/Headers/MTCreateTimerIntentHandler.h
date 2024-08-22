// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTCREATETIMERINTENTHANDLER_H
#define MTCREATETIMERINTENTHANDLER_H

@class NSString;
@protocol INCreateTimerIntentHandling;


#import "MTTimerIntentHandler.h"

@interface MTCreateTimerIntentHandler : MTTimerIntentHandler <INCreateTimerIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isPlayingMediaFromMRPlaybackState:(unsigned int)arg0 ;
-(BOOL)_timer:(id)arg0 conflictsWithRunningTimersInTimers:(id)arg1 ;
-(id)_responseToCreateTimerIntent:(id)arg0 withCreatedTimer:(id)arg1 error:(id)arg2 ;
-(void)_checkNowPlayingMediaState:(id)arg0 ;
-(void)_createTimerWithIntent:(id)arg0 completion:(id)arg1 ;
-(void)handleCreateTimer:(id)arg0 completion:(id)arg1 ;
-(void)resolveDurationForCreateTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveLabelForCreateTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTypeForCreateTimer:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif