// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRSHARINGCOPYSHORTTOKENOPERATION_H
#define BRSHARINGCOPYSHORTTOKENOPERATION_H



#import "BRShareOperation.h"

@interface BRSharingCopyShortTokenOperation : BRShareOperation

@property (copy) id *shortTokenCompletionBlock; // ivar: _shortTokenCompletionBlock


-(id)initWithURL:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif