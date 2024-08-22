// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUILEGACYOPERATIONSHANDLER_H
#define BKUILEGACYOPERATIONSHANDLER_H



#import "BKUIFaceIDEnrollOperationsHandler.h"

@interface BKUILegacyOperationsHandler : BKUIFaceIDEnrollOperationsHandler



+(id)handlersForEnrollmentConfiguration:(NSUInteger)arg0 inBuddy:(BOOL)arg1 delegate:(id)arg2 credential:(id)arg3 externalizedAuthContext:(id)arg4 ;
-(void)advanceEnrollmentState;
-(void)enrollOperation:(id)arg0 finishedWithEnrollResult:(id)arg1 ;
-(void)startEnroll;


@end


#endif