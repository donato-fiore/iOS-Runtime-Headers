// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRSHARECOPYACCESSTOKENOPERATION_H
#define BRSHARECOPYACCESSTOKENOPERATION_H

@class NSURL;


#import "BROperation.h"

@interface BRShareCopyAccessTokenOperation : BROperation

@property (copy) id *shareCopyAccessTokenCompletionBlock; // ivar: _shareCopyAccessTokenCompletionBlock
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif