// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCAMERACOLLECTIONVIEWCELL_H
#define AVTCAMERACOLLECTIONVIEWCELL_H

@class UIView;


#import "AVTStickerCollectionViewCell.h"

@interface AVTCameraCollectionViewCell : AVTStickerCollectionViewCell

@property (retain, nonatomic) UIView *cameraCellView; // ivar: _cameraCellView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateCameraViewFrame;


@end


#endif