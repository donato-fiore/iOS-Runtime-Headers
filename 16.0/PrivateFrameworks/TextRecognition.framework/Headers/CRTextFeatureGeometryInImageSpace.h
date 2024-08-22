// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTEXTFEATUREGEOMETRYINIMAGESPACE_H
#define CRTEXTFEATUREGEOMETRYINIMAGESPACE_H


#import <Foundation/Foundation.h>

#import "CRImageSpaceQuad.h"
#import "CRTextFeature.h"

@interface CRTextFeatureGeometryInImageSpace : NSObject

@property CGFloat diagonalDistance; // ivar: _diagonalDistance
@property CGFloat distanceToClosestFeature; // ivar: _distanceToClosestFeature
@property (readonly) BOOL isIsolated;
@property (retain) CRImageSpaceQuad *quad; // ivar: _quad
@property (retain) CRTextFeature *textFeature; // ivar: _textFeature


-(BOOL)shouldBeConsiderForFiltering;
-(BOOL)shouldBeConsideredForNearestDistanceCalculation;
-(CGFloat)_distanceFromQuad1:(id)arg0 toQuad2:(id)arg1 ;
-(void)calculateMinimumDistanceFromOtherFeatureGeometries:(id)arg0 ;


@end


#endif