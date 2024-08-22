// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDETAILSASSETSSPEC_H
#define PXPHOTOSDETAILSASSETSSPEC_H



#import "PXFeatureSpec.h"
#import "PXWidgetSpec.h"

@interface PXPhotosDetailsAssetsSpec : PXFeatureSpec

@property (readonly, nonatomic) PXWidgetSpec *_widgetSpec; // ivar: __widgetSpec
@property (readonly, nonatomic) UIEdgeInsets contentGuideInsets; // ivar: _contentGuideInsets
@property (readonly, nonatomic) NSUInteger detailsOptions; // ivar: _detailsOptions
@property (readonly, nonatomic) CGFloat editorialInterTileSpacing; // ivar: _editorialInterTileSpacing
@property (readonly, nonatomic) NSInteger editorialNumberOfColumns; // ivar: _editorialNumberOfColumns
@property (readonly, nonatomic) BOOL enableBadges; // ivar: _enableBadges
@property (readonly, nonatomic) UIEdgeInsets gridContentInsets; // ivar: _gridContentInsets
@property (readonly, nonatomic) NSInteger gridContentMode; // ivar: _gridContentMode
@property (readonly, nonatomic) CGSize gridInterItemSpacing; // ivar: _gridInterItemSpacing
@property (readonly, nonatomic) CGSize gridItemSize; // ivar: _gridItemSize
@property (readonly, nonatomic) BOOL shouldShowTitle; // ivar: _shouldShowTitle


+(BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)arg0 ;
-(CGFloat)defaultCornerRadius;
-(id)initWithExtendedTraitCollection:(id)arg0 detailsOptions:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 detailsOptions:(NSUInteger)arg2 ;
-(void)_computeEditorialWithExtendedTraitCollection:(id)arg0 ;
-(void)_computeGridWithExtendedTraitCollection:(id)arg0 ;
-(void)_computeSpecWithExtendedTraitCollection:(id)arg0 ;


@end


#endif