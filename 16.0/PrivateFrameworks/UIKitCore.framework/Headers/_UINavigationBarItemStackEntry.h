// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARITEMSTACKENTRY_H
#define _UINAVIGATIONBARITEMSTACKENTRY_H


#import <Foundation/Foundation.h>

#import "_UINavigationBarLayout.h"
#import "UINavigationItem.h"

@interface _UINavigationBarItemStackEntry : NSObject

@property (readonly, nonatomic) _UINavigationBarLayout *activeLayout;
@property (readonly, nonatomic) _UINavigationBarLayout *inactiveLayout;
@property (readonly, nonatomic) UINavigationItem *item; // ivar: _item
@property (retain, nonatomic) _UINavigationBarLayout *normalLayout; // ivar: _normalLayout
@property (nonatomic, getter=isSearchActive) BOOL searchActive; // ivar: _searchActive
@property (retain, nonatomic) _UINavigationBarLayout *searchLayout; // ivar: _searchLayout


+(id)entryForItem:(id)arg0 replaceExistingWithNew:(BOOL)arg1 ;
+(id)newEntryForItem:(id)arg0 ;
-(id)description;
-(void)dealloc;
-(void)updateStateFromCounterpart:(id)arg0 ;


@end


#endif