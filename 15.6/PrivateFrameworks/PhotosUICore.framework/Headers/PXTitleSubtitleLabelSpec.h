// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTITLESUBTITLELABELSPEC_H
#define PXTITLESUBTITLELABELSPEC_H



#import "PXViewSpec.h"
#import "PXLabelSpec.h"

@interface PXTitleSubtitleLabelSpec : PXViewSpec

@property (nonatomic) CGFloat distanceBetweenTitleBaselineAndSubtitleBaseline; // ivar: _distanceBetweenTitleBaselineAndSubtitleBaseline
@property (nonatomic) CGFloat interLabelSpacing; // ivar: _interLabelSpacing
@property (readonly, nonatomic) CGFloat maximumTitleSubtitleHeight;
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (retain, nonatomic) PXLabelSpec *subtitleLabelSpec; // ivar: _subtitleLabelSpec
@property (retain, nonatomic) PXLabelSpec *titleLabelSpec; // ivar: _titleLabelSpec


+(id)_memoriesTitleSubtitleSpecForContext:(struct ? )arg0 ;
+(id)memoriesTitleSubtitleSpecForTileKind:(NSInteger)arg0 featureSpec:(id)arg1 boundedByRect:(struct CGRect )arg2 ;
+(id)memoriesTitleSubtitleSpecForTileKind:(NSInteger)arg0 gadgetSpec:(id)arg1 boundedByRect:(struct CGRect )arg2 ;
+(id)memoriesTitleSubtitleSpecForTileKind:(NSInteger)arg0 viewMode:(id)arg1 boundedByRect:(struct CGRect )arg2 ;
+(id)memoriesTitleSubtitleSpecForViewSpecDescriptor:(struct PXViewSpecDescriptor )arg0 featureSpec:(id)arg1 ;
+(id)px_headerTitleSubtitleLabelSpecForZoomLevel:(NSInteger)arg0 featureSpec:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif