// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRTFSERIALIZABLECAPTUREDATA_H
#define HRTFSERIALIZABLECAPTUREDATA_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_SerializableCVPixelBuffer.h"

@interface HRTFSerializableCaptureData : NSObject <NSSecureCoding>

 {
    _SerializableCVPixelBuffer *_serializableColorPixelBuffer;
    _SerializableCVPixelBuffer *_serializableDepthPixelBuffer;
}


@property (readonly, nonatomic) ? colorIntrinsics; // ivar: _colorIntrinsics
@property (readonly, nonatomic) *__CVBuffer colorPixelBuffer;
@property (readonly, nonatomic) ? depthIntrinsics; // ivar: _depthIntrinsics
@property (readonly, nonatomic) *__CVBuffer depthPixelBuffer;
@property (readonly, nonatomic) CGPoint distortionCenter; // ivar: _distortionCenter
@property (readonly, nonatomic) NSData *distortionLookupTable; // ivar: _distortionLookupTable
@property (readonly, nonatomic) CGSize referenceDimensions; // ivar: _referenceDimensions
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorPixelBuffer:(struct __CVBuffer *)arg0 depthPixelBuffer:(struct __CVBuffer *)arg1 colorIntrinsics:(struct ? )arg2 depthIntrinsics:(struct ? )arg3 distortionLookupTable:(id)arg4 referenceDimensions:(struct CGSize )arg5 distortionCenter:(struct CGPoint )arg6 timestamp:(CGFloat)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif