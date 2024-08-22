// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKLEGACYDRAWINGREGRESSIONTESTER_H
#define PKLEGACYDRAWINGREGRESSIONTESTER_H


#import <Foundation/Foundation.h>


@interface PKLegacyDrawingRegressionTester : NSObject



+(CGFloat)compareImage:(struct CGImage *)arg0 with:(struct CGImage *)arg1 drawing:(id)arg2 ;
+(CGFloat)compareLegacyDrawingImage:(id)arg0 toConvertedDrawing:(id)arg1 ;
+(CGFloat)compareLegacyDrawingImage:(id)arg0 toConvertedDrawing:(id)arg1 debugImagesDirectory:(id)arg2 ;
+(CGFloat)maxStdDevErrorFromResult:(struct ? )arg0 ;
+(id)regressionTestDrawingPathForFile:(id)arg0 forClass:(Class)arg1 ;
+(id)regressionTestImagePathForFile:(id)arg0 forClass:(Class)arg1 ;
+(struct CGImage *)createFilteredImageFromImage:(id)arg0 context:(id)arg1 filterRadius:(CGFloat)arg2 ;


@end


#endif