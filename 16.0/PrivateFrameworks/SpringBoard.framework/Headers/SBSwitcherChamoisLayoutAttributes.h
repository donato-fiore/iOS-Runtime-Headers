// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERCHAMOISLAYOUTATTRIBUTES_H
#define SBSWITCHERCHAMOISLAYOUTATTRIBUTES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBSwitcherChamoisLayoutAttributes : NSObject <NSCopying>



@property (nonatomic) CGFloat containerPerspective; // ivar: _containerPerspective
@property (nonatomic) CGSize defaultWindowSize; // ivar: _defaultWindowSize
@property (nonatomic) CGFloat maximumWindowHeightWithDock; // ivar: _maximumWindowHeightWithDock
@property (nonatomic) CGFloat maximumWindowWidthForOverlapping; // ivar: _maximumWindowWidthForOverlapping
@property (nonatomic) CGSize minimumDefaultWindowSize; // ivar: _minimumDefaultWindowSize
@property (nonatomic) CGFloat minimumWindowWidth; // ivar: _minimumWindowWidth
@property (nonatomic) NSUInteger numberOfRowsWhileInApp; // ivar: _numberOfRowsWhileInApp
@property (nonatomic) BOOL prefersDockHidden; // ivar: _prefersDockHidden
@property (nonatomic) BOOL prefersStripHidden; // ivar: _prefersStripHidden
@property (nonatomic) BOOL requiresFullScreen; // ivar: _requiresFullScreen
@property (nonatomic) CGFloat screenEdgePadding; // ivar: _screenEdgePadding
@property (nonatomic) CGFloat stageCornerRaddii; // ivar: _stageCornerRaddii
@property (nonatomic) CGFloat stageInterItemSpacing; // ivar: _stageInterItemSpacing
@property (nonatomic) CGFloat stageOccludedAppScale; // ivar: _stageOccludedAppScale
@property (nonatomic) CGFloat stageOcclusionDodgingPeekLength; // ivar: _stageOcclusionDodgingPeekLength
@property (nonatomic) CGFloat stageOcclusionDodgingPeekScale; // ivar: _stageOcclusionDodgingPeekScale
@property (nonatomic) CGFloat stripCardScale; // ivar: _stripCardScale
@property (nonatomic) CGFloat stripCornerRaddii; // ivar: _stripCornerRaddii
@property (nonatomic) CGFloat stripIconLength; // ivar: _stripIconLength
@property (nonatomic) CGFloat stripInterItemSpacing; // ivar: _stripInterItemSpacing
@property (nonatomic) CGFloat stripStackDistance; // ivar: _stripStackDistance
@property (nonatomic) CGFloat stripTiltAngle; // ivar: _stripTiltAngle
@property (nonatomic) CGFloat stripVerticalEdgeSpacing; // ivar: _stripVerticalEdgeSpacing
@property (nonatomic) CGFloat stripWidth; // ivar: _stripWidth


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif