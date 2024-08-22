// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXACTIONABLESECTIONHEADERVIEWCONFIGURATION_H
#define _PXACTIONABLESECTIONHEADERVIEWCONFIGURATION_H

@class NSString, UIImage;
@protocol PXGSingleViewLayoutConfiguration;

#import <Foundation/Foundation.h>

#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"
#import "PXActionableSectionHeaderLayout.h"

@interface _PXActionableSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration>



@property (copy, nonatomic) NSString *actionText; // ivar: _actionText
@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (nonatomic) BOOL avoidsTintedButtonsAtHighSpeeds; // ivar: _avoidsTintedButtonsAtHighSpeeds
@property (copy, nonatomic) NSString *backdropViewGroupName; // ivar: _backdropViewGroupName
@property (nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *buttonSpec; // ivar: _buttonSpec
@property (nonatomic) NSUInteger buttonStyle; // ivar: _buttonStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) CGFloat gradientAlpha; // ivar: _gradientAlpha
@property (retain, nonatomic) UIImage *gradientImage; // ivar: _gradientImage
@property (nonatomic) CGFloat gradientOverhang; // ivar: _gradientOverhang
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (nonatomic) PXSimpleIndexPath sectionIndexPath; // ivar: _sectionIndexPath
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsMultipleLinesInCompactLayout; // ivar: _supportsMultipleLinesInCompactLayout
@property (weak, nonatomic) PXActionableSectionHeaderLayout *weakLayout; // ivar: _weakLayout


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif