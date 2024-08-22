// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRSHARECOPYCURRENTUSERNAMEANDDISPLAYHANDLEOPERATION_H
#define BRSHARECOPYCURRENTUSERNAMEANDDISPLAYHANDLEOPERATION_H



#import "BRShareOperation.h"

@interface BRShareCopyCurrentUserNameAndDisplayHandleOperation : BRShareOperation

@property (copy) id *shareUserNameCompletionBlock; // ivar: _shareUserNameCompletionBlock


-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif