// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUNAVIGATIONITEM_H
#define SUNAVIGATIONITEM_H

@class UINavigationItem, UIBarButtonItem;
@protocol SUNavigationItemDelegate;



@interface SUNavigationItem : UINavigationItem

@property (nonatomic) NSObject<SUNavigationItemDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIBarButtonItem *secondaryLeftBarButtonItem;


-(void)setLeftBarButtonItem:(id)arg0 ;
-(void)setLeftBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)setLeftBarButtonItems:(id)arg0 ;
-(void)setLeftBarButtonItems:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif