// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSDEVICEDETERMINATION_H
#define CSDEVICEDETERMINATION_H


#import <Foundation/Foundation.h>


@interface CSDeviceDetermination : NSObject



+(BOOL)_screenScaleMatchesZoomScale:(CGFloat)arg0 ;
+(BOOL)isCategoryPad:(NSUInteger)arg0 ;
+(BOOL)isCategoryPhone:(NSUInteger)arg0 ;
+(CGFloat)_zoomScaleForBaseDevice:(NSUInteger)arg0 ;
+(NSUInteger)_zoomAwareCategoryForDevice:(NSUInteger)arg0 zoomVariant:(NSUInteger)arg1 ;
+(NSUInteger)baseCategory;
+(NSUInteger)categoryFromScreenSize;
+(NSUInteger)effectiveCategory;


@end


#endif