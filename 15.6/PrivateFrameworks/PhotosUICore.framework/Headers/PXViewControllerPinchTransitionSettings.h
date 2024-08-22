// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXVIEWCONTROLLERPINCHTRANSITIONSETTINGS_H
#define PXVIEWCONTROLLERPINCHTRANSITIONSETTINGS_H



#import "PXSettings.h"

@interface PXViewControllerPinchTransitionSettings : PXSettings

@property (nonatomic) BOOL allowPinchTransitions; // ivar: _allowPinchTransitions
@property (nonatomic) CGFloat backgroundParallax; // ivar: _backgroundParallax
@property (nonatomic) CGFloat backgroundScale; // ivar: _backgroundScale
@property (nonatomic) CGFloat dimmingOpacity; // ivar: _dimmingOpacity
@property (nonatomic) CGFloat dimmingWhite; // ivar: _dimmingWhite
@property (nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius
@property (nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif