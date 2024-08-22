// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRSHARECREATESHAREOPERATION_H
#define BRSHARECREATESHAREOPERATION_H



#import "BRShareOperation.h"

@interface BRShareCreateShareOperation : BRShareOperation

@property (copy) id *shareCreateCompletionBlock; // ivar: _shareCreateCompletionBlock


-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif