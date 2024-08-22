// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTOPPEOPLEWALLPAPERSUGGESTIONSDEBUGPHOTOSGRIDCELL_H
#define PUTOPPEOPLEWALLPAPERSUGGESTIONSDEBUGPHOTOSGRIDCELL_H

@class UILabel, NSString;


#import "PUPhotosGridCell.h"

@interface PUTopPeopleWallpaperSuggestionsDebugPhotosGridCell : PUPhotosGridCell {
    UILabel *_scoreLabel;
}


@property (copy, nonatomic) NSString *score; // ivar: _score


-(void)layoutSubviews;


@end


#endif