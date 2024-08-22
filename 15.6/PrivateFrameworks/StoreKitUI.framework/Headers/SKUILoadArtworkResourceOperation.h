// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUILOADARTWORKRESOURCEOPERATION_H
#define SKUILOADARTWORKRESOURCEOPERATION_H

@class SSVLoadURLOperation;


#import "SKUILoadResourceOperation.h"
#import "SKUIArtworkRequest.h"

@interface SKUILoadArtworkResourceOperation : SKUILoadResourceOperation

@property (readonly, copy) SKUIArtworkRequest *resourceRequest;
@property (weak) SSVLoadURLOperation *underlyingOperation; // ivar: _underlyingOperation


-(id)initWithResourceRequest:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif