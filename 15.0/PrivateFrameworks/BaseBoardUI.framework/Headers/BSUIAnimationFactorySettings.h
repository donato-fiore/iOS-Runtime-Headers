// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSUIANIMATIONFACTORYSETTINGS_H
#define BSUIANIMATIONFACTORYSETTINGS_H

@class PTSettings;



@interface BSUIAnimationFactorySettings : PTSettings

@property (nonatomic) BOOL slowAnimations; // ivar: _slowAnimations
@property (nonatomic) CGFloat slowDownFactor; // ivar: _slowDownFactor


+(id)settingsControllerModule;
-(CGFloat)effectiveSlowDownFactor;
-(void)setDefaultValues;


@end


#endif