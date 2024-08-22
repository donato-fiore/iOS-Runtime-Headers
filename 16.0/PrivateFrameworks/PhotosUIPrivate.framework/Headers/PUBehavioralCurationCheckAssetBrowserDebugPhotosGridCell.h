// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUBEHAVIORALCURATIONCHECKASSETBROWSERDEBUGPHOTOSGRIDCELL_H
#define PUBEHAVIORALCURATIONCHECKASSETBROWSERDEBUGPHOTOSGRIDCELL_H

@class UILabel, NSString;


#import "PUPhotosGridCell.h"

@interface PUBehavioralCurationCheckAssetBrowserDebugPhotosGridCell : PUPhotosGridCell {
    UILabel *_scoreLabel;
}


@property (copy, nonatomic) NSString *score; // ivar: _score


-(void)layoutSubviews;


@end


#endif