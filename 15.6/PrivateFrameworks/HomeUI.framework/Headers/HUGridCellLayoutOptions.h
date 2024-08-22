// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUGRIDCELLLAYOUTOPTIONS_H
#define HUGRIDCELLLAYOUTOPTIONS_H

@class NSString, UIFont, UIVisualEffect;
@protocol HUGridDisplayOptions, NSCopying;

#import <Foundation/Foundation.h>

#import "HUGridCellBackgroundDisplayOptions.h"

@interface HUGridCellLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying>



@property (copy, nonatomic) HUGridCellBackgroundDisplayOptions *backgroundDisplayOptions; // ivar: _backgroundDisplayOptions
@property (nonatomic) CGFloat cellCornerRadius; // ivar: _cellCornerRadius
@property (nonatomic) CGFloat cellInnerMargin; // ivar: _cellInnerMargin
@property (nonatomic) CGFloat cellScaleFactor; // ivar: _cellScaleFactor
@property (readonly, nonatomic) NSInteger cellSizeSubclass; // ivar: _cellSizeSubclass
@property (nonatomic) NSUInteger contentColorStyle; // ivar: _contentColorStyle
@property (nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) CGFloat gutter;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger iconContentMode; // ivar: _iconContentMode
@property (nonatomic) CGFloat iconSize; // ivar: _iconSize
@property (retain, nonatomic) UIVisualEffect *iconVibrancyEffect; // ivar: _iconVibrancyEffect
@property (nonatomic) NSUInteger onStateBorderStyle; // ivar: _onStateBorderStyle
@property (nonatomic) CGFloat secondaryContentDimmingFactor; // ivar: _secondaryContentDimmingFactor
@property (retain, nonatomic) UIVisualEffect *secondaryVibrancyEffect; // ivar: _secondaryVibrancyEffect
@property (readonly) Class superclass;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect; // ivar: _vibrancyEffect


+(id)defaultOptionsForCellSizeSubclass:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCellSizeSubclass:(NSInteger)arg0 ;


@end


#endif