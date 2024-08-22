// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRSHARINGCOPYSHARETOKENOPERATION_H
#define BRSHARINGCOPYSHARETOKENOPERATION_H

@class NSURL;


#import "BRShareOperation.h"

@interface BRSharingCopyShareTokenOperation : BRShareOperation {
    NSURL *_fileURL;
}


@property (copy) id *shareAndBaseTokenCompletionBlock; // ivar: _shareAndBaseTokenCompletionBlock
@property (copy) id *shareTokenCompletionBlock; // ivar: _shareTokenCompletionBlock


-(id)initWithURL:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif