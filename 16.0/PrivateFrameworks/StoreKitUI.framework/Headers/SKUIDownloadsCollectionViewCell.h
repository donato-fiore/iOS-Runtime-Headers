// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIDOWNLOADSCOLLECTIONVIEWCELL_H
#define SKUIDOWNLOADSCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView;


#import "SKUIDownloadsCellView.h"

@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell {
    UIImageView *_editIndicator;
}


@property (nonatomic) NSInteger cellState; // ivar: _cellState
@property (readonly, nonatomic) SKUIDownloadsCellView *cellView; // ivar: _cellView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_reloadEditState;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif