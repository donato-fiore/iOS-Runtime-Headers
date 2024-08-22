// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASYNCHRONOUSCIIMAGEFILTERINGREQUEST_H
#define AVASYNCHRONOUSCIIMAGEFILTERINGREQUEST_H

@class CIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVAsynchronousCIImageFilteringRequestInternal.h"

@interface AVAsynchronousCIImageFilteringRequest : NSObject <NSCopying>

 {
    AVAsynchronousCIImageFilteringRequestInternal *_internal;
}


@property (readonly, nonatomic) ? compositionTime;
@property (readonly, nonatomic) CGSize renderSize;
@property (readonly, nonatomic) CIImage *sourceImage;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
// -(id)initUsingCompositingRequest:(id)arg0 sourceFrame:(struct __CVBuffer *)arg1 cancellationTest:(id)arg2 defaultCIContextProvider:(unk)arg3 completionHandler:(id)arg4  ;
-(void)_willDeallocOrFinalize;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithImage:(id)arg0 context:(id)arg1 ;


@end


#endif