// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCURATIONTRAGICFAILUREINHIGHLIGHTSGRIDDEBUGVIEWCELL_H
#define PUCURATIONTRAGICFAILUREINHIGHLIGHTSGRIDDEBUGVIEWCELL_H

@class UILabel;


#import "PUPhotosGridCell.h"

@interface PUCurationTragicFailureInHighlightsGridDebugViewCell : PUPhotosGridCell {
    UILabel *_visibleLabel;
    UILabel *_utilityTypesLabel;
}


@property (nonatomic) NSUInteger utilityTypes; // ivar: _utilityTypes


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif