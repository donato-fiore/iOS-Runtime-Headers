// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMOBILEPIPSETTINGS_H
#define PGMOBILEPIPSETTINGS_H

@class PTSettings;



@interface PGMobilePIPSettings : PTSettings

@property (nonatomic) CGFloat shadowContinuousCornerRadius; // ivar: _shadowContinuousCornerRadius
@property (nonatomic) CGFloat shadowOffsetX; // ivar: _shadowOffsetX
@property (nonatomic) CGFloat shadowOffsetY; // ivar: _shadowOffsetY
@property (nonatomic) CGFloat shadowOpacity; // ivar: _shadowOpacity
@property (nonatomic) CGFloat shadowRadius; // ivar: _shadowRadius


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif