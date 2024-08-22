// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDVIDEOATTRIBUTES_H
#define HMDVIDEOATTRIBUTES_H

@class HAPTLVBase, NSNumber;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDVideoResolution.h"

@interface HMDVideoAttributes : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *framerate; // ivar: _framerate
@property (readonly, copy, nonatomic) NSNumber *imageHeight; // ivar: _imageHeight
@property (readonly, copy, nonatomic) NSNumber *imageWidth; // ivar: _imageWidth
@property (readonly, copy, nonatomic) HMDVideoResolution *videoResolution; // ivar: _videoResolution


+(BOOL)supportsSecureCoding;
+(BOOL)translateImageResolution:(id)arg0 imageWidth:(*id)arg1 imageHeight:(*id)arg2 ;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResolution:(id)arg0 framerate:(id)arg1 ;
-(id)tlvData;
-(id)translateImageWidth:(id)arg0 imageHeight:(id)arg1 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif