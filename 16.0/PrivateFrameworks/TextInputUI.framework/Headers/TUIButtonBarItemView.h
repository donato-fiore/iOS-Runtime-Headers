// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIBUTTONBARITEMVIEW_H
#define TUIBUTTONBARITEMVIEW_H

@class UIView, UIBarButtonItemGroup, UIBarButtonItem, _UIButtonBarButton;



@interface TUIButtonBarItemView : UIView

@property (retain, nonatomic) UIBarButtonItemGroup *associatedGroup; // ivar: _associatedGroup
@property (retain, nonatomic) UIBarButtonItem *associatedItem; // ivar: _associatedItem
@property (retain, nonatomic) _UIButtonBarButton *barButtonView; // ivar: _barButtonView
@property (nonatomic, getter=isCollapsedItem) BOOL collapsedItem; // ivar: _collapsedItem
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *customView; // ivar: _customView


-(BOOL)_isPad;
-(void)layoutSubviews;


@end


#endif