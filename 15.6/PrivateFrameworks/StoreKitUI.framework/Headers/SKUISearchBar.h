// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISEARCHBAR_H
#define SKUISEARCHBAR_H

@class UISearchBar;



@interface SKUISearchBar : UISearchBar

@property (nonatomic) CGFloat intrinsicWidth; // ivar: _intrinsicWidth


-(BOOL)showsCancelButton;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)setShowsCancelButton:(BOOL)arg0 ;
-(void)setShowsCancelButton:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif