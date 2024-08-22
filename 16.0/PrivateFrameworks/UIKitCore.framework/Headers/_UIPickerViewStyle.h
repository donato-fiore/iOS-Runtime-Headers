// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPICKERVIEWSTYLE_H
#define _UIPICKERVIEWSTYLE_H


#import <Foundation/Foundation.h>


@interface _UIPickerViewStyle : NSObject



-(BOOL)sizeIsValid:(struct CGSize )arg0 ;
-(CGFloat)defaultRowHeightForSize:(struct CGSize )arg0 ;
-(CGFloat)horizontalPaddingForCenterHighlightView;
-(CGFloat)horizontalPaddingForContents;
-(CGFloat)paddingAroundWheels;
-(CGFloat)paddingBetweenWheels;
-(id)createCenterHighlightView;
-(struct CATransform3D )perspectiveTransform;
-(struct CGSize )defaultSizeForTraitCollection:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forTraitCollection:(id)arg1 ;
-(void)applyCustomizationsToColumn:(id)arg0 ;
-(void)configureMaskGradientLayer:(id)arg0 ;


@end


#endif