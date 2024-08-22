// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDROPSHADOWSETTINGS_H
#define SBDROPSHADOWSETTINGS_H

@class PTSettings;



@interface SBDropShadowSettings : PTSettings

@property (nonatomic) CGFloat continuousCornerRadius; // ivar: _continuousCornerRadius
@property (nonatomic) CGFloat offsetX; // ivar: _offsetX
@property (nonatomic) CGFloat offsetY; // ivar: _offsetY
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (nonatomic) CGFloat radius; // ivar: _radius


+(id)moduleWithSectionTitle:(id)arg0 ;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif