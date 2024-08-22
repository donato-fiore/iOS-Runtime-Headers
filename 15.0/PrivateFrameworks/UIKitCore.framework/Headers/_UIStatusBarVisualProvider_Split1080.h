// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARVISUALPROVIDER_SPLIT1080_H
#define _UISTATUSBARVISUALPROVIDER_SPLIT1080_H

@class Split1125;



@interface _UIStatusBarVisualProvider_Split1080 : Split1125



+(CGFloat)height;
+(CGFloat)leadingCenteringOffset;
+(CGFloat)nativeDisplayWidth;
+(CGFloat)pillCenteringOffset;
+(CGFloat)referenceScaleForScreen:(id)arg0 ;
+(struct CGSize )notchSize;
-(CGFloat)baselineBottomInset;
-(CGFloat)itemSpacing;
-(CGFloat)leadingSmallPillSpacing;
-(NSInteger)normalIconSize;
-(id)stringForCellularType:(NSInteger)arg0 condensed:(BOOL)arg1 ;
-(struct CGSize )pillSize;
-(struct CGSize )smallPillSize;


@end


#endif