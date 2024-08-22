// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDSPLITCONTROLMENU_H
#define UIKEYBOARDSPLITCONTROLMENU_H

@class NSArray;
@protocol _UIInputSwitcherSplitMenu;


#import "UIKeyboardMenuView.h"

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView <_UIInputSwitcherSplitMenu>

 {
    CGSize m_preferredSize;
    NSArray *_items;
}


@property (copy, nonatomic) id *finishSplitTransitionBlock; // ivar: _finishSplitTransitionBlock


+(id)activeInstance;
+(id)sharedInstance;
-(BOOL)usesDeviceLanguageForItemAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)defaultSelectedIndex;
-(NSUInteger)numberOfItems;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)titleForItemAtIndex:(NSUInteger)arg0 ;
-(int)visibleItemForIndex:(NSUInteger)arg0 ;
-(struct CGSize )preferredSize;
-(void)actionForItem:(id)arg0 ;
-(void)didFinishSplitTransition;
-(void)didSelectItemAtIndex:(NSUInteger)arg0 ;
-(void)setSplitAndUndocked:(BOOL)arg0 ;


@end


#endif