// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCURATIONTRIPKEYASSETBROWSERDEBUGPHOTOSGRIDCELL_H
#define PUCURATIONTRIPKEYASSETBROWSERDEBUGPHOTOSGRIDCELL_H

@class UILabel, UIColor, NSString;


#import "PUPhotosGridCell.h"

@interface PUCurationTripKeyAssetBrowserDebugPhotosGridCell : PUPhotosGridCell {
    UILabel *_curationScoreLabel;
    UILabel *_aestheticScoreLabel;
    UILabel *_promotionScoreLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (nonatomic) CGFloat aestheticScore; // ivar: _aestheticScore
@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGFloat curationScore; // ivar: _curationScore
@property (nonatomic) CGFloat promotionScore; // ivar: _promotionScore
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(void)layoutSubviews;


@end


#endif