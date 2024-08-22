// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRSHARINGCOPYSHORTTOKENOPERATION_H
#define BRSHARINGCOPYSHORTTOKENOPERATION_H

@class NSURL;


#import "BROperation.h"

@interface BRSharingCopyShortTokenOperation : BROperation {
    NSURL *_fileURL;
}


@property (copy) id *shortTokenCompletionBlock; // ivar: _shortTokenCompletionBlock


-(id)initWithURL:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif