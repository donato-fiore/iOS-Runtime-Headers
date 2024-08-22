// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEXPLORELAYOUTMETRICS_H
#define PXEXPLORELAYOUTMETRICS_H

@class NSString;
@protocol PXGDiagnosticsProvider;


#import "PXLayoutMetrics.h"

@interface PXExploreLayoutMetrics : PXLayoutMetrics <PXGDiagnosticsProvider>



@property (copy, nonatomic) id *acceptableLargeHeroPredicate; // ivar: _acceptableLargeHeroPredicate
@property (nonatomic) BOOL allowHeaders; // ivar: _allowHeaders
@property (nonatomic) BOOL allowSpecialPanoHeaders; // ivar: _allowSpecialPanoHeaders
@property (nonatomic) CGFloat buildingBlockAspectRatio; // ivar: _buildingBlockAspectRatio
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) NSInteger largeHeroDensity; // ivar: _largeHeroDensity
@property (nonatomic) NSInteger layoutSubtype; // ivar: _layoutSubtype
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg0 ;
-(id)initWithSpec:(id)arg0 ;
-(id)initWithUserInterfaceIdiom:(NSInteger)arg0 sizeClass:(NSInteger)arg1 orientation:(NSInteger)arg2 referenceSize:(struct CGSize )arg3 safeAreaInsets:(struct UIEdgeInsets )arg4 ;


@end


#endif