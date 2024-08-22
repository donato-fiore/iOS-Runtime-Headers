// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMENGINEDRIVENLAYOUT_H
#define PXCMMENGINEDRIVENLAYOUT_H

@protocol PXCMMEngineDrivenLayoutDelegate;


#import "PXEngineDrivenAssetsTilingLayout.h"
#import "PXCMMAssetStatusBadgeTileUserData.h"

@interface PXCMMEngineDrivenLayout : PXEngineDrivenAssetsTilingLayout

@property (readonly, nonatomic) PXCMMAssetStatusBadgeTileUserData *_copiedUserData; // ivar: __copiedUserData
@property (readonly, nonatomic) PXCMMAssetStatusBadgeTileUserData *_failedUserData; // ivar: __failedUserData
@property (readonly, nonatomic) CGFloat bannerHeight; // ivar: _bannerHeight
@property (weak, nonatomic) NSObject<PXCMMEngineDrivenLayoutDelegate> *delegate;
@property (nonatomic) CGFloat footerBottomInset; // ivar: _footerBottomInset
@property (nonatomic) BOOL hasFloatingBanner; // ivar: _hasFloatingBanner
@property (nonatomic) BOOL hasFloatingSectionHeaders; // ivar: _hasFloatingSectionHeaders
@property (nonatomic) CGFloat headerFooterSideInset; // ivar: _headerFooterSideInset
@property (readonly, nonatomic) CGFloat headerHeight; // ivar: _headerHeight
@property (nonatomic) CGFloat headerTopInset; // ivar: _headerTopInset
@property (nonatomic) BOOL headerViewIsVisible; // ivar: _headerViewIsVisible
@property (readonly, nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (nonatomic) NSInteger placeholderMode; // ivar: _placeholderMode
@property (nonatomic) UIEdgeInsets reviewSafeAreaInsets; // ivar: _reviewSafeAreaInsets
@property (readonly, nonatomic) CGFloat sendBackFooterHeight; // ivar: _sendBackFooterHeight
@property (readonly, nonatomic) CGFloat statusFooterHeight; // ivar: _statusFooterHeight


+(id)_additionalTileKinds;
-(BOOL)_getAdditionalTileIdentifierForEditorial:(struct PXTileIdentifier *)arg0 group:(*NSUInteger)arg1 layoutGeometryKind:(NSInteger)arg2 indexPath:(struct PXSimpleIndexPath )arg3 ;
-(BOOL)_getAdditionalTileIdentifierForGrid:(struct PXTileIdentifier *)arg0 group:(*NSUInteger)arg1 layoutGeometryKind:(NSInteger)arg2 indexPath:(struct PXSimpleIndexPath )arg3 ;
-(BOOL)_getAssetStatusTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forContentTileGeometry:(struct PXTileGeometry *)arg4 indexPath:(struct PXSimpleIndexPath )arg5 ;
-(BOOL)_getDuplicateTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forContentTileGeometry:(struct PXTileGeometry *)arg4 indexPath:(struct PXSimpleIndexPath )arg5 ;
-(BOOL)getAdditionalAccessoryTileIdentifier:(struct PXTileIdentifier *)arg0 outGeometry:(struct PXTileGeometry *)arg1 group:(*NSUInteger)arg2 userData:(*id)arg3 forTileKind:(NSUInteger)arg4 contentTileGeometry:(struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath )arg6 ;
-(BOOL)getAdditionalTileIdentifier:(struct PXTileIdentifier *)arg0 group:(*NSUInteger)arg1 layoutGeometryKind:(NSUInteger)arg2 indexPath:(struct PXSimpleIndexPath )arg3 ;
-(BOOL)getGeometry:(struct PXTileGeometry *)arg0 group:(*NSUInteger)arg1 userData:(*id)arg2 forTileWithIdentifier:(struct PXTileIdentifier )arg3 ;
-(BOOL)sendBackBannerViewIsVisible:(struct UIEdgeInsets )arg0 ;
-(CGFloat)zPositionOffsetForKind:(NSUInteger)arg0 ;
-(NSUInteger)_editorialGeneratorGeometryKindForTileKind:(NSUInteger)arg0 ;
-(NSUInteger)_generatorGeometryKindForTileKind:(NSUInteger)arg0 ;
-(NSUInteger)_gridGeneratorGeometryKindForTileKind:(NSUInteger)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithLayoutEngineSnapshot:(id)arg0 ;
-(id)initWithLayoutEngineSnapshot:(id)arg0 configuration:(id)arg1 ;
-(struct CGRect )_bannerFrame;
-(struct CGRect )_headerFrame;
-(struct CGRect )_placeholderFrame;
-(struct CGRect )_sectionHeaderTileFrame;
-(struct CGRect )_sendBackFooterFrame;
-(struct CGRect )_statusFooterFrame;
-(struct CGRect )contentBounds;
-(struct CGSize )_preferredSelectionBadgeSize;
-(struct PXTileIdentifier )_bannerTileIdentifier;
-(struct PXTileIdentifier )_headerTileIdentifier;
-(struct PXTileIdentifier )_identifierForUniqueTileWithKind:(NSUInteger)arg0 ;
-(struct PXTileIdentifier )_placeholderTileIdentifier;
-(struct PXTileIdentifier )_sendBackFooterTileIdentifier;
-(struct PXTileIdentifier )_statusFooterTileIdentifier;
-(void)_invalidateAssetStatusBadgeTiles;
-(void)_invalidateBanner;
-(void)_invalidateHeader;
-(void)_invalidateSectionHeaders;
-(void)_invalidateSendBackFooter;
-(void)_invalidateStatusFooter;
-(void)adjustGeometry:(struct PXTileGeometry *)arg0 forAdditionalTileWithKind:(NSUInteger)arg1 indexPath:(struct PXSimpleIndexPath )arg2 ;
-(void)enumerateTilesInRect:(struct CGRect )arg0 withOptions:(id)arg1 usingBlock:(id)arg2 ;
-(void)setVisibleOrigin:(struct CGPoint )arg0 ;
-(void)updateAssetStatusBadgeTiles;


@end


#endif