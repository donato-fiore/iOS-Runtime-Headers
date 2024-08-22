// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERRECENTSBUTTONCOLLECTIONVIEWCELL_H
#define AVTSTICKERRECENTSBUTTONCOLLECTIONVIEWCELL_H

@class CAShapeLayer;


#import "AVTStickerRecentsStickerCollectionViewCell.h"

@interface AVTStickerRecentsButtonCollectionViewCell : AVTStickerRecentsStickerCollectionViewCell

@property (retain, nonatomic) CAShapeLayer *circularBackgroundLayer; // ivar: _circularBackgroundLayer


+(id)identifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )circleLayerRect;
-(struct CGRect )contentBounds;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithDefaultImage;
-(void)updateWithImage:(id)arg0 ;


@end


#endif