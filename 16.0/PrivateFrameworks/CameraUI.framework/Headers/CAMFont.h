// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMFONT_H
#define CAMFONT_H


#import <Foundation/Foundation.h>


@interface CAMFont : NSObject



+(CGFloat)cameraModeDialFontSizeForContentSize:(id)arg0 ;
+(CGFloat)interpolatedAdditionalFontSizeForMainScreen;
+(id)cameraFontForContentSize:(id)arg0 ;
+(id)cameraFontOfSize:(CGFloat)arg0 ;
+(id)cameraFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
+(id)cameraKerningForFont:(id)arg0 ;
+(id)cameraModeDialApproximateFontForContentSize:(id)arg0 ;
+(id)cameraModeDialFontForContentSize:(id)arg0 ;
+(id)cameraModeDialFontForContentSize:(id)arg0 weight:(CGFloat)arg1 ;
+(id)cameraMonospacedFontOfSize:(CGFloat)arg0 ;
+(id)cameraMonospacedFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
+(id)cameraPadModeDialFontForContentSize:(id)arg0 ;
+(id)cameraTimerFontForContentSize:(id)arg0 layoutStyle:(NSInteger)arg1 ;


@end


#endif