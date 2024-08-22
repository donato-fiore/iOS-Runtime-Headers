// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDRAWERITEM_H
#define WFDRAWERITEM_H

@class UIViewController<WFDrawerPane>, UISearchBar, NSString, UIView;

#import <Foundation/Foundation.h>


@interface WFDrawerItem : NSObject

@property (weak, nonatomic) UIViewController<WFDrawerPane> *drawerPane; // ivar: _drawerPane
@property (nonatomic) CGFloat fauxHeaderHeight;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *titleView;


-(id)initWithDrawerPane:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;


@end


#endif