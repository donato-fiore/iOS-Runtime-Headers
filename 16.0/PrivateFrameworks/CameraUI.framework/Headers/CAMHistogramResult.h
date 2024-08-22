// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMHISTOGRAMRESULT_H
#define CAMHISTOGRAMRESULT_H

@class AVMetadataVideoPreviewHistogramObject, NSString, AVMetadataObject;
@protocol CAMMetadataObjectResult;

#import <Foundation/Foundation.h>


@interface CAMHistogramResult : NSObject <CAMMetadataObjectResult>



@property (retain, nonatomic) AVMetadataVideoPreviewHistogramObject *_metadataHistogramObject; // ivar: __metadataHistogramObject
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat highlightClipping; // ivar: _highlightClipping
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly, nonatomic) CGFloat shadowClipping; // ivar: _shadowClipping
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger syntheticFocusMode;
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)initWithHistogramObject:(id)arg0 forDeviceFormat:(id)arg1 ;


@end


#endif