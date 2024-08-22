// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCURATIONTRIPKEYASSETDEBUGPHOTOSGRIDCELL_H
#define PUCURATIONTRIPKEYASSETDEBUGPHOTOSGRIDCELL_H

@class UILabel, NSString;


#import "PUPhotosGridCell.h"

@interface PUCurationTripKeyAssetDebugPhotosGridCell : PUPhotosGridCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(void)layoutSubviews;


@end


#endif