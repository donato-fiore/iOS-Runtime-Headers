// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRSHAREACCEPTOPERATION_H
#define BRSHAREACCEPTOPERATION_H

@class NSURL;


#import "BROperation.h"

@interface BRShareAcceptOperation : BROperation {
    NSURL *_shareLink;
}


@property (copy) id *shareAcceptCompletionBlock; // ivar: _shareAcceptCompletionBlock


-(id)initWithShareLink:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif