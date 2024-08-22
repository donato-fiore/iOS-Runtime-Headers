// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDSERVICECELLLAYOUTOPTIONS_H
#define HUGRIDSERVICECELLLAYOUTOPTIONS_H



#import "HUGridCellLayoutOptions.h"

@interface HUGridServiceCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) CGFloat iconToTitleSpacing; // ivar: _iconToTitleSpacing
@property (nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing
@property (nonatomic, getter=shouldShowAccessoryView) BOOL showAccessoryView; // ivar: _showAccessoryView
@property (nonatomic, getter=shouldShowDescription) BOOL showDescription; // ivar: _showDescription
@property (nonatomic, getter=shouldShowIconOnly) BOOL showIconOnly; // ivar: _showIconOnly


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif