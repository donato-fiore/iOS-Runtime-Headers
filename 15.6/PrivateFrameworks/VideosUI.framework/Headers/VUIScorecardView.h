// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUISCORECARDVIEW_H
#define VUISCORECARDVIEW_H

@class UIView, NSArray, UIImage;
@protocol VUIScorecardViewDelegate;


#import "VUIScoreboardLayout.h"

@interface VUIScorecardView : UIView

@property (retain, nonatomic) NSArray *columnWidths; // ivar: _columnWidths
@property (retain, nonatomic) UIImage *darkMaterialImage; // ivar: _darkMaterialImage
@property (weak, nonatomic) NSObject<VUIScorecardViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex; // ivar: _delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex
@property (nonatomic) BOOL delegateRespondsToBackgroundImageForScorecardViewMaterial; // ivar: _delegateRespondsToBackgroundImageForScorecardViewMaterial
@property (nonatomic) BOOL didCalculatedSize; // ivar: _didCalculatedSize
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (retain, nonatomic) NSArray *rowHeights; // ivar: _rowHeights
@property (retain, nonatomic) NSArray *rowScoreValueSizes; // ivar: _rowScoreValueSizes
@property (retain, nonatomic) VUIScoreboardLayout *scoreboardLayout; // ivar: _scoreboardLayout
@property (nonatomic) CGSize scorecardSize; // ivar: _scorecardSize


-(struct CGSize )_calculateMetricsOfScorecard;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_calculateColumnSpacing;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)invalidateData;


@end


#endif