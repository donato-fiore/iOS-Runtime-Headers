// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STOCKSLAYOUT_H
#define STOCKSLAYOUT_H


#import <Foundation/Foundation.h>

#import "StockChartDisplayMode.h"

@interface StocksLayout : NSObject

@property (nonatomic) CGRect blurViewFrame; // ivar: _blurViewFrame
@property (retain, nonatomic) StockChartDisplayMode *chartDisplayMode; // ivar: _chartDisplayMode
@property (nonatomic) CGRect chartViewFrame; // ivar: _chartViewFrame
@property (nonatomic) BOOL chartViewHasBottomLine; // ivar: _chartViewHasBottomLine
@property (nonatomic) BOOL chartViewHasTapGesture; // ivar: _chartViewHasTapGesture
@property (nonatomic) BOOL chartViewInScrollView; // ivar: _chartViewInScrollView
@property (nonatomic) CGRect grayViewFrame; // ivar: _grayViewFrame
@property (nonatomic) BOOL hasBlackView; // ivar: _hasBlackView
@property (nonatomic) BOOL hasBlurView; // ivar: _hasBlurView
@property (nonatomic) BOOL hasGrayView; // ivar: _hasGrayView
@property (nonatomic) BOOL hasPrimaryHorizontalDivider; // ivar: _hasPrimaryHorizontalDivider
@property (nonatomic) BOOL hasPrimaryVerticalDivider; // ivar: _hasPrimaryVerticalDivider
@property (nonatomic) BOOL hasScrollView; // ivar: _hasScrollView
@property (nonatomic) BOOL hasSecondaryGrayView; // ivar: _hasSecondaryGrayView
@property (nonatomic) BOOL hasSecondaryHorizontalDivider; // ivar: _hasSecondaryHorizontalDivider
@property (nonatomic) BOOL hasSecondaryVerticalDivider; // ivar: _hasSecondaryVerticalDivider
@property (nonatomic) BOOL hasStatusView; // ivar: _hasStatusView
@property (nonatomic) BOOL hasStatusViewDivider; // ivar: _hasStatusViewDivider
@property (nonatomic) CGRect infoViewFrame; // ivar: _infoViewFrame
@property (nonatomic) BOOL infoViewHasBottomLine; // ivar: _infoViewHasBottomLine
@property (nonatomic) BOOL infoViewInScrollView; // ivar: _infoViewInScrollView
@property (nonatomic) BOOL isFullScreenChart; // ivar: _isFullScreenChart
@property (nonatomic) UIEdgeInsets listViewContentInsets; // ivar: _listViewContentInsets
@property (nonatomic) CGRect listViewFrame; // ivar: _listViewFrame
@property (nonatomic) NSUInteger listViewRowCount; // ivar: _listViewRowCount
@property (nonatomic) CGRect newsViewFrame; // ivar: _newsViewFrame
@property (nonatomic) BOOL newsViewHasBottomLine; // ivar: _newsViewHasBottomLine
@property (nonatomic) BOOL newsViewInScrollView; // ivar: _newsViewInScrollView
@property (nonatomic) BOOL newsViewShouldUseLargerFonts; // ivar: _newsViewShouldUseLargerFonts
@property (nonatomic) CGRect primaryHorizontalDividerFrame; // ivar: _primaryHorizontalDividerFrame
@property (nonatomic) CGRect primaryVerticalDividerFrame; // ivar: _primaryVerticalDividerFrame
@property (nonatomic) CGSize scrollViewContentSize; // ivar: _scrollViewContentSize
@property (nonatomic) CGRect scrollViewFrame; // ivar: _scrollViewFrame
@property (nonatomic) CGRect secondaryGrayViewFrame; // ivar: _secondaryGrayViewFrame
@property (nonatomic) CGRect secondaryHorizontalDividerFrame; // ivar: _secondaryHorizontalDividerFrame
@property (nonatomic) CGRect secondaryVerticalDividerFrame; // ivar: _secondaryVerticalDividerFrame
@property (nonatomic) CGFloat statusViewCenteringRatio; // ivar: _statusViewCenteringRatio
@property (nonatomic) CGRect statusViewDividerFrame; // ivar: _statusViewDividerFrame
@property (nonatomic) CGRect statusViewFrame; // ivar: _statusViewFrame


+(NSUInteger)numberOfRowsForSize:(struct CGSize )arg0 ;
+(id)fullScreenChartLayoutForSize:(struct CGSize )arg0 ;
+(id)layoutForSize:(struct CGSize )arg0 ;
+(id)singleColumnPortraitLayoutForSize:(struct CGSize )arg0 ;
+(id)threeColumnsLandscapeLayoutForSize:(struct CGSize )arg0 ;
+(id)twoColumnsLandscapeLayoutForSize:(struct CGSize )arg0 ;
+(id)twoColumnsPortraitLayoutForSize:(struct CGSize )arg0 ;
-(id)description;


@end


#endif