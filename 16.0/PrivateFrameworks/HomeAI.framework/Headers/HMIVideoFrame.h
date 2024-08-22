// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIVIDEOFRAME_H
#define HMIVIDEOFRAME_H

@class HMFObject, NSData, NSString;
@protocol HMIVideoEvent, HMFLogging, NSSecureCoding;



@interface HMIVideoFrame : HMFObject <HMIVideoEvent, HMFLogging, NSSecureCoding>

 {
    NSInteger _store;
}


@property (readonly) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly) ? presentationTimeStamp; // ivar: _presentationTimeStamp
@property (readonly) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly) ? time;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)attributeDescriptions;
-(id)base64Encoded;
-(id)compressedFrameWithScale:(CGFloat)arg0 quality:(CGFloat)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJPEGData:(id)arg0 size:(struct CGSize )arg1 presentationTimeStamp:(struct ? )arg2 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 presentationTimeStamp:(struct ? )arg1 ;
-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)pixelBufferFrameWithError:(*id)arg0 ;
-(id)redactedCopy;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)printWithHeight:(NSUInteger)arg0 ;
-(void)printWithScale:(CGFloat)arg0 ;


@end


#endif