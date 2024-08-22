// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFOCUSSETTINGS_H
#define PXFOCUSSETTINGS_H



#import "PXSettings.h"

@interface PXFocusSettings : PXSettings

@property (nonatomic) CGFloat focusAnimationPadding; // ivar: _focusAnimationPadding
@property (nonatomic) NSInteger focusAnimationStyle; // ivar: _focusAnimationStyle
@property (nonatomic) CGFloat pressedAnimationPadding; // ivar: _pressedAnimationPadding
@property (nonatomic) NSInteger pressedAnimationStyle; // ivar: _pressedAnimationStyle


+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif