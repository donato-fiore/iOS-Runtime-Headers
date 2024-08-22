// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUGRIDMEDIAPLATTERCELLLAYOUTOPTIONS_H
#define HUGRIDMEDIAPLATTERCELLLAYOUTOPTIONS_H



#import "HUGridCellLayoutOptions.h"

@interface HUGridMediaPlatterCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) CGFloat cellHeight; // ivar: _cellHeight
@property (nonatomic) CGFloat interPlatterSpacing; // ivar: _interPlatterSpacing


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif