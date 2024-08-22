// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMOSAICCAMERACELLLAYOUTOPTIONS_H
#define HUMOSAICCAMERACELLLAYOUTOPTIONS_H

@class UIFont;


#import "HUGridCellLayoutOptions.h"

@interface HUMosaicCameraCellLayoutOptions : HUGridCellLayoutOptions

@property (readonly, nonatomic) CGFloat cameraCellHeight;
@property (readonly, nonatomic) CGFloat cameraCellWidth;
@property (nonatomic) CGFloat descriptionInset; // ivar: _descriptionInset
@property (nonatomic) CGFloat expandedFormatAspectRatio; // ivar: _expandedFormatAspectRatio
@property (nonatomic) CGFloat interItemSpacing; // ivar: _interItemSpacing
@property (nonatomic) BOOL isMosaicCell; // ivar: _isMosaicCell
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (readonly, nonatomic) CGFloat minimumCameraCellWidth; // ivar: _minimumCameraCellWidth
@property (nonatomic) CGFloat mosaicInterItemSpacing; // ivar: _mosaicInterItemSpacing
@property (retain, nonatomic) UIFont *secondaryLabelFont; // ivar: _secondaryLabelFont
@property (retain, nonatomic) UIFont *timingLabelFont; // ivar: _timingLabelFont
@property (nonatomic) NSInteger viewSizeSubclass; // ivar: _viewSizeSubclass


+(CGFloat)columnWidthForContainerWidth:(CGFloat)arg0 numberOfColumns:(NSUInteger)arg1 padding:(CGFloat)arg2 ;
+(CGFloat)heightForWidth:(CGFloat)arg0 ;
+(CGFloat)widthForHeight:(CGFloat)arg0 ;
+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 viewSizeSubclass:(NSInteger)arg1 ;
-(BOOL)isSingleCell;
-(CGFloat)cornerRadiusForCellSize:(struct CGSize )arg0 ;
-(NSUInteger)numColumnsForContainerWidth:(CGFloat)arg0 minimumCameraCellWidth:(CGFloat)arg1 padding:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif