// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCREATESINGLETIMERINTENTHANDLER_H
#define MTCREATESINGLETIMERINTENTHANDLER_H

@class NSString;
@protocol INCreateTimerIntentHandling;


#import "MTTimerIntentHandler.h"

@interface MTCreateSingleTimerIntentHandler : MTTimerIntentHandler <INCreateTimerIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_responseToCreateTimerIntent:(id)arg0 withCreatedTimer:(id)arg1 error:(id)arg2 dryRun:(BOOL)arg3 ;
-(void)_createTimerWithIntent:(id)arg0 dryRun:(BOOL)arg1 completion:(id)arg2 ;
-(void)confirmCreateTimer:(id)arg0 completion:(id)arg1 ;
-(void)handleCreateTimer:(id)arg0 completion:(id)arg1 ;
-(void)resolveDurationForCreateTimer:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveLabelForCreateTimer:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif