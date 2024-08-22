// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUISETTINGSTOUCHACCOMMODATIONSALLOWSWIPEGESTURESCONTROLLER_H
#define AXUISETTINGSTOUCHACCOMMODATIONSALLOWSWIPEGESTURESCONTROLLER_H

@class NSArray;


#import "AXUISettingsBaseListController.h"

@interface AXUISettingsTouchAccommodationsAllowSwipeGesturesController : AXUISettingsBaseListController

@property (retain, nonatomic) NSArray *minimumDistanceSpecifiers; // ivar: _minimumDistanceSpecifiers
@property (nonatomic) BOOL touchAccommodationsAllowsSwipeGesturesToBypass; // ivar: _touchAccommodationsAllowsSwipeGesturesToBypass
@property (nonatomic) CGFloat touchAccommodationsSwipeGestureMinimumDistance; // ivar: _touchAccommodationsSwipeGestureMinimumDistance


-(BOOL)_shouldShowSwipeMinimumDistanceSpecifier;
-(id)_allowsSwipesToBypass:(id)arg0 ;
-(id)_specifierWithName:(id)arg0 minimumDistance:(CGFloat)arg1 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_setAllowsSwipesToBypass:(id)arg0 specifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif