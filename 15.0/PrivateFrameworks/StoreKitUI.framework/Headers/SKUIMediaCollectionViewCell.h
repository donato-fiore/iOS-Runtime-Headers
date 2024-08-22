// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIMEDIACOLLECTIONVIEWCELL_H
#define SKUIMEDIACOLLECTIONVIEWCELL_H



#import "SKUICollectionViewCell.h"
#import "SKUIEmbeddedMediaView.h"

@interface SKUIMediaCollectionViewCell : SKUICollectionViewCell {
    SKUIEmbeddedMediaView *_mediaView;
}


@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, nonatomic) SKUIEmbeddedMediaView *mediaView;


-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif