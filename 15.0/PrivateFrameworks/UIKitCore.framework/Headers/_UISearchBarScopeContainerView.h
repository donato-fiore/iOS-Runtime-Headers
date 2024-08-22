// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEARCHBARSCOPECONTAINERVIEW_H
#define _UISEARCHBARSCOPECONTAINERVIEW_H



#import "UIView.h"
#import "_UISearchBarScopeContainerLayout.h"

@interface _UISearchBarScopeContainerView : UIView

@property (retain, nonatomic) _UISearchBarScopeContainerLayout *layout; // ivar: _layout


-(BOOL)_isKnownUISearchBarComponentContainer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)setNeedsLayout;


@end


#endif