// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIQUICKLINKCOLLECTIONVIEWCELL_H
#define SKUIQUICKLINKCOLLECTIONVIEWCELL_H

@class UIButton;


#import "SKUICollectionViewCell.h"

@interface SKUIQuicklinkCollectionViewCell : SKUICollectionViewCell {
    UIButton *_linkButton;
}




-(id)_linkButton;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)_linkButtonAction:(id)arg0 ;
-(void)configureForLink:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setColoringWithColorScheme:(id)arg0 ;


@end


#endif