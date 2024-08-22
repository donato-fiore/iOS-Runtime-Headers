// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCURATIONSCORECHECKASSETBROWSERDEBUGPHOTOSGRIDCELL_H
#define PUCURATIONSCORECHECKASSETBROWSERDEBUGPHOTOSGRIDCELL_H

@class UILabel, NSString;


#import "PUPhotosGridCell.h"

@interface PUCurationScoreCheckAssetBrowserDebugPhotosGridCell : PUPhotosGridCell {
    UILabel *_scoreLabel;
}


@property (copy, nonatomic) NSString *score; // ivar: _score


-(void)layoutSubviews;


@end


#endif