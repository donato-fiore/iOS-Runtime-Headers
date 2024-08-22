// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGLYPHPICKERTABBAR_H
#define WFGLYPHPICKERTABBAR_H

@class UIView, NSString, UITabBar;
@protocol UITabBarDelegate, WFGlyphPickerTabBarDelegate;



@interface WFGlyphPickerTabBar : UIView <UITabBarDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFGlyphPickerTabBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger selectedTabIndex; // ivar: _selectedTabIndex
@property (readonly) Class superclass;
@property (weak, nonatomic) UITabBar *tabBar; // ivar: _tabBar


-(id)initWithTabNames:(id)arg0 tabCharacters:(id)arg1 ;
-(void)tabBar:(id)arg0 didSelectItem:(id)arg1 ;


@end


#endif