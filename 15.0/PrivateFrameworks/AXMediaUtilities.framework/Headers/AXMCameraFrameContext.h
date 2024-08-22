// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMCAMERAFRAMECONTEXT_H
#define AXMCAMERAFRAMECONTEXT_H

@class CMAttitude;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMCameraFrameContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CMAttitude *deviceAttitude; // ivar: _deviceAttitude
@property (readonly, nonatomic) CGFloat presentationTimestamp; // ivar: _presentationTimestamp
@property (readonly, nonatomic) float videoFieldOfView; // ivar: _videoFieldOfView
@property (readonly, nonatomic) NSInteger videoSourceHeight; // ivar: _videoSourceHeight
@property (readonly, nonatomic) NSInteger videoSourceWidth; // ivar: _videoSourceWidth
@property (readonly, nonatomic) float videoZoomFactor; // ivar: _videoZoomFactor


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideoFieldOfView:(float)arg0 zoomFactor:(float)arg1 sourceWidth:(NSInteger)arg2 sourceHeight:(NSInteger)arg3 presentationTimestamp:(CGFloat)arg4 attitude:(id)arg5 ;
-(struct CGRect )motionCorrectedNormalizedFrame:(struct CGRect )arg0 targetAttitude:(id)arg1 targetZoomFactor:(float)arg2 interfaceOrientation:(NSInteger)arg3 mirrored:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif