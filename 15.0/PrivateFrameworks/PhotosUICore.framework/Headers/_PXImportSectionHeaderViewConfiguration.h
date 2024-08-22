// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXIMPORTSECTIONHEADERVIEWCONFIGURATION_H
#define _PXIMPORTSECTIONHEADERVIEWCONFIGURATION_H

@class NSString, UIImage;
@protocol PXGSingleViewLayoutConfiguration;

#import <Foundation/Foundation.h>

#import "PXCuratedLibrarySectionHeaderLayoutSpec.h"
#import "_PXImportSectionHeaderLayout.h"

@interface _PXImportSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration>



@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (copy, nonatomic) NSString *backdropViewGroupName; // ivar: _backdropViewGroupName
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *buttonSpec; // ivar: _buttonSpec
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) CGFloat gradientAlpha; // ivar: _gradientAlpha
@property (retain, nonatomic) UIImage *gradientImage; // ivar: _gradientImage
@property (nonatomic) CGFloat gradientOverhang; // ivar: _gradientOverhang
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (readonly) Class superclass;
@property (weak, nonatomic) _PXImportSectionHeaderLayout *weakLayout; // ivar: _weakLayout


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif