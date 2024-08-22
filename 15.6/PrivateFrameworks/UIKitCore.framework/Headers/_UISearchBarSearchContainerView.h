// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEARCHBARSEARCHCONTAINERVIEW_H
#define _UISEARCHBARSEARCHCONTAINERVIEW_H



#import "UIView.h"
#import "_UISearchBarSearchContainerLayout.h"

@interface _UISearchBarSearchContainerView : UIView {
    BOOL _needsLayoutWhenThawed;
}


@property (nonatomic) BOOL frozenLayout; // ivar: _frozenLayout
@property (retain, nonatomic) _UISearchBarSearchContainerLayout *layout; // ivar: _layout


-(BOOL)_isKnownUISearchBarComponentContainer;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)setNeedsLayout;


@end


#endif