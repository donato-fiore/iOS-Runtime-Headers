// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFBANNERTHEME_H
#define SFBANNERTHEME_H

@class UIColor;


#import "SFThemeColorBarTheme.h"

@interface SFBannerTheme : SFThemeColorBarTheme

@property (readonly, nonatomic) UIColor *separatorColor; // ivar: _separatorColor


-(id)initWithBarTintStyle:(NSInteger)arg0 preferredBarTintColor:(id)arg1 controlsTintColor:(id)arg2 ;


@end


#endif