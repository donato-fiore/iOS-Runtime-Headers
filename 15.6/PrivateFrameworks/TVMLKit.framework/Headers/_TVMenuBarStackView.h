// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVMENUBARSTACKVIEW_H
#define _TVMENUBARSTACKVIEW_H

@class UIStackView, NSArray;
@protocol _TVMenuBarStackViewDelegate;



@interface _TVMenuBarStackView : UIStackView

@property (weak, nonatomic) NSObject<_TVMenuBarStackViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger selectedIndex; // ivar: _selectedIndex
@property (copy, nonatomic) NSArray *tabBarItems; // ivar: _tabBarItems


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_buttonEventTouchUpInside:(id)arg0 ;
-(void)_configureView;


@end


#endif