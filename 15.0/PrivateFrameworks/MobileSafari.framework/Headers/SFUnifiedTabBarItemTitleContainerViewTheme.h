// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUNIFIEDTABBARITEMTITLECONTAINERVIEWTHEME_H
#define SFUNIFIEDTABBARITEMTITLECONTAINERVIEWTHEME_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface SFUnifiedTabBarItemTitleContainerViewTheme : NSObject

@property (readonly, nonatomic) UIColor *overrideTintColor; // ivar: _overrideTintColor
@property (readonly, nonatomic) UIColor *placeholderTextColor; // ivar: _placeholderTextColor
@property (readonly, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (readonly, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor
@property (readonly, nonatomic) UIColor *themeColor; // ivar: _themeColor


-(id)init;
-(id)initWithPrimaryTextColor:(id)arg0 secondaryTextColor:(id)arg1 placeholderTextColor:(id)arg2 ;
-(id)initWithPrimaryTextColor:(id)arg0 secondaryTextColor:(id)arg1 placeholderTextColor:(id)arg2 overrideTintColor:(id)arg3 themeColor:(id)arg4 ;


@end


#endif