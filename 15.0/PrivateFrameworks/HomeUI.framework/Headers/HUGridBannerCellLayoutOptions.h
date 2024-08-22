// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDBANNERCELLLAYOUTOPTIONS_H
#define HUGRIDBANNERCELLLAYOUTOPTIONS_H



#import "HUGridCellLayoutOptions.h"

@interface HUGridBannerCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) CGFloat dismissButtonHeightAndWidth; // ivar: _dismissButtonHeightAndWidth
@property (nonatomic) CGFloat dismissButtonTopInset; // ivar: _dismissButtonTopInset
@property (nonatomic) CGFloat dismissButtonTrailingInset; // ivar: _dismissButtonTrailingInset


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif