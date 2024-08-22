// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITABBARITEMAPPEARANCESTORAGE_H
#define _UITABBARITEMAPPEARANCESTORAGE_H

@class UIBarItemAppearanceStorage, NSMutableDictionary;


#import "UIColor.h"

@interface _UITabBarItemAppearanceStorage : UIBarItemAppearanceStorage {
    NSMutableDictionary *_badgeTextAttributesForState;
}


@property (copy, nonatomic) UIColor *badgeColor; // ivar: _badgeColor
@property (nonatomic) UIOffset titleOffset; // ivar: _titleOffset


-(id)badgeTextAttributesForState:(NSUInteger)arg0 ;
-(void)enumerateBadgeTextAttributesWithBlock:(id)arg0 ;
-(void)setBadgeTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif