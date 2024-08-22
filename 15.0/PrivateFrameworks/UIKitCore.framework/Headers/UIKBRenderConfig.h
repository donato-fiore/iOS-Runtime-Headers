// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBRENDERCONFIG_H
#define UIKBRENDERCONFIG_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UIButtonBarButtonVisualProvider.h"

@interface UIKBRenderConfig : NSObject <NSCopying>

 {
    BOOL _useEmojiStyles;
}


@property (copy, nonatomic) NSString *activatedKeyplaneSwitchControlKeyBackgroundName; // ivar: _activatedKeyplaneSwitchControlKeyBackgroundName
@property (readonly, nonatomic) NSInteger backdropStyle;
@property (readonly, nonatomic) NSInteger blurEffectStyle;
@property (nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (nonatomic) CGFloat blurSaturation; // ivar: _blurSaturation
@property (readonly, retain, nonatomic) _UIButtonBarButtonVisualProvider *buttonBarVisualProvider; // ivar: _buttonBarVisualProvider
@property (copy, nonatomic) NSString *controlKeyBackgroundName; // ivar: _controlKeyBackgroundName
@property (nonatomic) NSInteger forceQuality; // ivar: _forceQuality
@property (nonatomic) BOOL isFloating; // ivar: _isFloating
@property (nonatomic) CGFloat keycapOpacity; // ivar: _keycapOpacity
@property (nonatomic) BOOL lightKeyboard; // ivar: _lightKeyboard
@property (nonatomic) CGFloat lightKeycapOpacity; // ivar: _lightKeycapOpacity
@property (readonly, nonatomic) BOOL whiteText;


+(NSInteger)backdropStyleForStyle:(NSInteger)arg0 quality:(NSInteger)arg1 ;
+(id)configForAppearance:(NSInteger)arg0 inputMode:(id)arg1 traitEnvironment:(id)arg2 ;
+(id)darkConfig;
+(id)defaultConfig;
+(id)defaultEmojiConfig;
+(id)lowQualityDarkConfig;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif