// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXVISUALINTELLIGENCEREQUEST_H
#define _PXVISUALINTELLIGENCEREQUEST_H

@class UIImage, VKImageAnalyzerRequest;
@protocol PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface _PXVisualIntelligenceRequest : NSObject

@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) int requestID; // ivar: _requestID
@property (readonly, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (readonly, nonatomic) VKImageAnalyzerRequest *vkImageRequest;
@property (nonatomic) int vkRequestID; // ivar: _vkRequestID


-(id)initWithAsset:(id)arg0 image:(id)arg1 requestID:(int)arg2 resultHandler:(id)arg3 ;


@end


#endif