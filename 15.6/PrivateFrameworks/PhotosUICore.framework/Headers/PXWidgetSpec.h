// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXWIDGETSPEC_H
#define PXWIDGETSPEC_H



#import "PXFeatureSpec.h"

@interface PXWidgetSpec : PXFeatureSpec

@property (nonatomic) UIEdgeInsets contentGuideInsets; // ivar: _contentGuideInsets
@property (readonly, nonatomic) NSUInteger detailsOptions; // ivar: _detailsOptions
@property (nonatomic) CGFloat distanceBetweenFooterBaselineAndBottom; // ivar: _distanceBetweenFooterBaselineAndBottom
@property (nonatomic) CGFloat distanceBetweenFooterBaselineAndFooterBottom; // ivar: _distanceBetweenFooterBaselineAndFooterBottom
@property (nonatomic) CGFloat distanceBetweenFooterTopAndFooterBaseline; // ivar: _distanceBetweenFooterTopAndFooterBaseline
@property (nonatomic) CGFloat distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline; // ivar: _distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline
@property (nonatomic) CGFloat distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop; // ivar: _distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop
@property (nonatomic) CGFloat distanceBetweenFooterlessWidgetContentBottomAndBottom; // ivar: _distanceBetweenFooterlessWidgetContentBottomAndBottom
@property (nonatomic) CGFloat distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline; // ivar: _distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline
@property (nonatomic) CGFloat distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop; // ivar: _distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop
@property (nonatomic) CGFloat distanceBetweenHeaderBaselineAndHeaderBottom; // ivar: _distanceBetweenHeaderBaselineAndHeaderBottom
@property (nonatomic) CGFloat distanceBetweenHeaderBaselineAndWidgetContentTop; // ivar: _distanceBetweenHeaderBaselineAndWidgetContentTop
@property (nonatomic) CGFloat distanceBetweenHeaderTopAndHeaderBaseline; // ivar: _distanceBetweenHeaderTopAndHeaderBaseline
@property (readonly, nonatomic) CGFloat distanceBetweenMainContentBottomAndCaptionBaseline; // ivar: _distanceBetweenMainContentBottomAndCaptionBaseline
@property (readonly, nonatomic) CGFloat distanceBetweenMapViewAndAddressTop; // ivar: _distanceBetweenMapViewAndAddressTop
@property (nonatomic) CGFloat distanceBetweenTopAndFirstHeaderBaseline; // ivar: _distanceBetweenTopAndFirstHeaderBaseline
@property (nonatomic) CGFloat distanceBetweenTopAndHeaderlessWidgetContentTop; // ivar: _distanceBetweenTopAndHeaderlessWidgetContentTop
@property (nonatomic) CGFloat distanceBetweenWidgetContentBottomAndFooterBaseline; // ivar: _distanceBetweenWidgetContentBottomAndFooterBaseline
@property (readonly, nonatomic) CGSize interWidgetSpacing; // ivar: _interWidgetSpacing


-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg0 detailsOptions:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 detailsOptions:(NSUInteger)arg2 ;


@end


#endif