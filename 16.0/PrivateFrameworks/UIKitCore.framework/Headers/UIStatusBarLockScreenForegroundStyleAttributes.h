// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARLOCKSCREENFOREGROUNDSTYLEATTRIBUTES_H
#define UISTATUSBARLOCKSCREENFOREGROUNDSTYLEATTRIBUTES_H



#import "UIStatusBarForegroundStyleAttributes.h"

@interface UIStatusBarLockScreenForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes



-(BOOL)supportsShowingBuildVersion;
-(CGFloat)sizeForMoonMaskVisible:(BOOL)arg0 ;
-(CGFloat)textOffsetForStyle:(NSInteger)arg0 ;
-(NSInteger)activityIndicatorStyleWithSyncActivity:(BOOL)arg0 ;
-(id)expandedNameForImageName:(id)arg0 ;
-(id)makeTextFontForStyle:(NSInteger)arg0 ;
-(struct CGPoint )positionForMoonMaskInBounds:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )edgeInsetsForBatteryInsides;


@end


#endif