// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMICAMERAVIDEOFRAME_H
#define HMICAMERAVIDEOFRAME_H

@class HMFObject, NSString, NSData, NSArray;
@protocol NSSecureCoding, HMFLogging;



@interface HMICameraVideoFrame : HMFObject <NSSecureCoding, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger fragmentSequenceNumber; // ivar: _fragmentSequenceNumber
@property (readonly) NSUInteger frameId; // ivar: _frameId
@property (readonly) NSUInteger hash;
@property (readonly) NSData *jpegData; // ivar: _jpegData
@property (retain) NSArray *motionDetections; // ivar: _motionDetections
@property (readonly) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly) ? presentationTime; // ivar: _presentationTime
@property (readonly) CGSize size; // ivar: _size
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJPEGData:(id)arg0 presentationTime:(struct ? )arg1 frameId:(NSUInteger)arg2 fragmentSequenceNumber:(NSUInteger)arg3 size:(struct CGSize )arg4 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 presentationTime:(struct ? )arg1 frameId:(NSUInteger)arg2 fragmentSequenceNumber:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif