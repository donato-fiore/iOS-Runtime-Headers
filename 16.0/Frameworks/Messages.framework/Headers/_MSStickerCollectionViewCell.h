// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MSSTICKERCOLLECTIONVIEWCELL_H
#define _MSSTICKERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, CALayer;
@protocol MSStickerPrivate;


#import "MSStickerView.h"

@interface _MSStickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CALayer *borderLayer; // ivar: _borderLayer
@property (retain, nonatomic) NSObject<MSStickerPrivate> *sticker;
@property (readonly, nonatomic) MSStickerView *stickerView; // ivar: _stickerView


-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAnimating:(BOOL)arg0 ;
-(void)showCellBorder:(BOOL)arg0 ;


@end


#endif