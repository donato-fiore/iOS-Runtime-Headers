// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKOVERLAYSTYLEPROPERTIES_H
#define SBLOCKOVERLAYSTYLEPROPERTIES_H

@class UIColor, _UIBackdropViewSettings;

#import <Foundation/Foundation.h>


@interface SBLockOverlayStyleProperties : NSObject {
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    _UIBackdropViewSettings *_settings;
}


@property (readonly, nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (readonly, nonatomic) NSInteger graphicsQuality; // ivar: _quality
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly, nonatomic) CGFloat tintAlpha; // ivar: _tintAlpha
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)_settingsForStyle;
-(id)_stringForQuality;
-(id)_stringForStyle;
-(id)description;
-(id)initWithStyle:(NSUInteger)arg0 quality:(NSInteger)arg1 ;
-(void)_configure;


@end


#endif