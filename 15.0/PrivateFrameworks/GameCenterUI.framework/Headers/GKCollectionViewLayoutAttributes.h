// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCOLLECTIONVIEWLAYOUTATTRIBUTES_H
#define GKCOLLECTIONVIEWLAYOUTATTRIBUTES_H

@class UICollectionViewLayoutAttributes;
@protocol UICollectionViewDataSource;


#import "GKSectionMetrics.h"
#import "GKSupplementaryViewMetrics.h"

@interface GKCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) BOOL allSectionItemsVisible; // ivar: _allSectionItemsVisible
@property (nonatomic) NSUInteger currentTotalItemCount; // ivar: _currentTotalItemCount
@property (nonatomic) NSUInteger currentVisibleItemCount; // ivar: _currentVisibleItemCount
@property (retain, nonatomic) NSObject<UICollectionViewDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) BOOL doesAbutLeftOfCollectionView; // ivar: _doesAbutLeftOfCollectionView
@property (nonatomic) NSUInteger gridLayoutLocation; // ivar: _gridLayoutLocation
@property (nonatomic) BOOL isPartOfGlobalPinningGroup; // ivar: _isPartOfGlobalPinningGroup
@property (nonatomic) BOOL isPinned; // ivar: _isPinned
@property (nonatomic) CGFloat leadingMargin; // ivar: _leadingMargin
@property (nonatomic) NSUInteger maxTotalItemCount; // ivar: _maxTotalItemCount
@property (retain, nonatomic) GKSectionMetrics *sectionMetrics; // ivar: _sectionMetrics
@property (retain, nonatomic) GKSupplementaryViewMetrics *supplementaryMetrics; // ivar: _supplementaryMetrics
@property (nonatomic) CGFloat trailingMargin; // ivar: _trailingMargin
@property (nonatomic) CGFloat unpinnedY; // ivar: _unpinnedY


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif