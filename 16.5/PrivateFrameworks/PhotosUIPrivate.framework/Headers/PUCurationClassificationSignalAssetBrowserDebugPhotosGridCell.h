// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCURATIONCLASSIFICATIONSIGNALASSETBROWSERDEBUGPHOTOSGRIDCELL_H
#define PUCURATIONCLASSIFICATIONSIGNALASSETBROWSERDEBUGPHOTOSGRIDCELL_H

@class UILabel, UIColor, NSString;


#import "PUPhotosGridCell.h"

@interface PUCurationClassificationSignalAssetBrowserDebugPhotosGridCell : PUPhotosGridCell {
    UILabel *_scoreLabel;
}


@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (copy, nonatomic) NSString *score; // ivar: _score


-(void)layoutSubviews;


@end


#endif