// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUILOADITEMRESOURCEOPERATION_H
#define SKUILOADITEMRESOURCEOPERATION_H

@class SSVPlatformRequestOperation;


#import "SKUILoadResourceOperation.h"
#import "SKUIItemResourceRequest.h"

@interface SKUILoadItemResourceOperation : SKUILoadResourceOperation

@property (readonly, copy) SKUIItemResourceRequest *resourceRequest;
@property (weak) SSVPlatformRequestOperation *underlyingOperation; // ivar: _underlyingOperation


-(id)initWithResourceRequest:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif