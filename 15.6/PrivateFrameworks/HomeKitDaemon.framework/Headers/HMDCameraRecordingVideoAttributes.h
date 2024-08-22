// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGVIDEOATTRIBUTES_H
#define HMDCAMERARECORDINGVIDEOATTRIBUTES_H

@class HAPTLVBase, NSNumber;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDCameraRecordingVideoAttributes : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *frameRate; // ivar: _frameRate
@property (readonly, copy, nonatomic) NSNumber *imageHeight; // ivar: _imageHeight
@property (readonly, copy, nonatomic) NSNumber *imageWidth; // ivar: _imageWidth
@property (readonly, nonatomic) NSInteger resolution; // ivar: _resolution


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageWidth:(id)arg0 imageHeight:(id)arg1 frameRate:(id)arg2 ;
-(id)initWithResolution:(NSInteger)arg0 frameRate:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif