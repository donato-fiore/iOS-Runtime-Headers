// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXEXPLOREPARSINGSTATE_H
#define PXEXPLOREPARSINGSTATE_H


#import <Foundation/Foundation.h>


@interface PXExploreParsingState : NSObject

@property (nonatomic) CGFloat buildingBlockAspectRatio; // ivar: _buildingBlockAspectRatio
@property (readonly, nonatomic) BOOL canIgnoreNextHeroSide; // ivar: _canIgnoreNextHeroSide
@property (nonatomic) BOOL didMoveBestItemOutOfNextShortRow; // ivar: _didMoveBestItemOutOfNextShortRow
@property (nonatomic) BOOL didMoveBestItemOutOfPreviousShortRowIntoHeroRow; // ivar: _didMoveBestItemOutOfPreviousShortRowIntoHeroRow
@property (nonatomic) NSInteger effectiveLargeHeroDensity; // ivar: _effectiveLargeHeroDensity
@property (nonatomic) NSInteger lastHeroRowTag; // ivar: _lastHeroRowTag
@property (nonatomic) NSInteger nextHeroSide; // ivar: _nextHeroSide
@property (nonatomic) NSInteger nextRowType; // ivar: _nextRowType
@property (nonatomic) NSInteger numberOfColumnsOverride; // ivar: _numberOfColumnsOverride
@property (nonatomic) NSInteger numberOfConsecutiveMediumHeroRows; // ivar: _numberOfConsecutiveMediumHeroRows
@property (nonatomic) NSInteger parseLocation; // ivar: _parseLocation


-(void)prepareWithMetrics:(id)arg0 ;


@end


#endif