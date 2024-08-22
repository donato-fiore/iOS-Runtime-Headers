// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARREFERENCEIMAGE_H
#define ARREFERENCEIMAGE_H

@class NSUUID, NSString;
@protocol NSSecureCoding, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "ARReferenceImageCachedError.h"

@interface ARReferenceImage : NSObject <NSSecureCoding>

 {
    NSObject<OS_dispatch_queue> *_verificationQueue;
    NSObject<OS_dispatch_semaphore> *_verificationQueueSemaphore;
}


@property (readonly, nonatomic) *__CVBuffer alphaMask; // ivar: _alphaMask
@property (retain) ARReferenceImageCachedError *cachedVerificationError; // ivar: _cachedVerificationError
@property CGFloat estimatedQuality; // ivar: _estimatedQuality
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGSize imageSize;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGSize physicalSize; // ivar: _physicalSize
@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly, nonatomic) NSString *resourceGroupName; // ivar: _resourceGroupName


+(BOOL)supportsSecureCoding;
+(id)referenceImagesInGroupNamed:(id)arg0 bundle:(id)arg1 ;
+(id)referenceImagesInGroupNamed:(id)arg0 catalog:(id)arg1 ;
+(id)referenceImagesInGroupNamed:(id)arg0 catalogName:(id)arg1 bundle:(id)arg2 ;
+(id)referenceImagesInGroupNamed:(id)arg0 catalogURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 physicalWidth:(CGFloat)arg2 ;
-(id)initWithCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 physicalWidth:(CGFloat)arg2 addPadding:(BOOL)arg3 ;
-(id)initWithCIImage:(id)arg0 orientation:(unsigned int)arg1 physicalWidth:(CGFloat)arg2 alphaInfo:(*unsigned int)arg3 addPadding:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 physicalWidth:(CGFloat)arg2 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 orientation:(unsigned int)arg1 physicalWidth:(CGFloat)arg2 addPadding:(BOOL)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)estimateQualityWithCompletionHandler:(id)arg0 ;
-(void)validateWithCompletionHandler:(id)arg0 ;


@end


#endif