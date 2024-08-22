// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCOMPOSITEVIDEOSETTINGS_H
#define PUCOMPOSITEVIDEOSETTINGS_H

@class PXSettings;



@interface PUCompositeVideoSettings : PXSettings

@property (nonatomic) NSInteger cropMode; // ivar: _cropMode
@property (nonatomic) CGFloat nonStitchingFadeDuration; // ivar: _nonStitchingFadeDuration
@property (nonatomic) CGFloat stitchingFadeDuration; // ivar: _stitchingFadeDuration
@property (nonatomic) BOOL useFrameBlending; // ivar: _useFrameBlending


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif