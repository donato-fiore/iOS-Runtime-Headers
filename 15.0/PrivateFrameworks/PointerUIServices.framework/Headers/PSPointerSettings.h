// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSPOINTERSETTINGS_H
#define PSPOINTERSETTINGS_H

@class PTSettings;



@interface PSPointerSettings : PTSettings

@property (nonatomic) CGFloat materialAlphaDot; // ivar: _materialAlphaDot
@property (nonatomic) CGFloat materialAlphaIBeam; // ivar: _materialAlphaIBeam
@property (nonatomic) CGFloat materialAlphaSmallItemDark; // ivar: _materialAlphaSmallItemDark
@property (nonatomic) CGFloat materialAlphaSmallItemDarkHighContrast; // ivar: _materialAlphaSmallItemDarkHighContrast
@property (nonatomic) CGFloat materialAlphaSmallItemLight; // ivar: _materialAlphaSmallItemLight


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif