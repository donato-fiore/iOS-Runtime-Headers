// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRSHARECOPYOPERATION_H
#define BRSHARECOPYOPERATION_H



#import "BRShareOperation.h"

@interface BRShareCopyOperation : BRShareOperation

@property (copy) id *rootShareCopyCompletionBlock; // ivar: _rootShareCopyCompletionBlock
@property (copy) id *shareCopyCompletionBlock; // ivar: _shareCopyCompletionBlock


-(id)initWithURL:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif