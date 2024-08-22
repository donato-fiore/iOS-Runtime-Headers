// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUICONTENTIMAGEFETCHOPERATION_H
#define AMSUICONTENTIMAGEFETCHOPERATION_H

@class NSURL;


#import "AMSUIAssetFetchOperation.h"

@interface AMSUIContentImageFetchOperation : AMSUIAssetFetchOperation

@property (copy, nonatomic) id *fallbackBlock; // ivar: _fallbackBlock
@property (retain, nonatomic) NSURL *imageURL; // ivar: _imageURL


-(id)initWithURL:(id)arg0 ;
-(void)_fallbackWithURL:(id)arg0 ;
-(void)main;


@end


#endif