// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMZOOMPOINT_H
#define CAMZOOMPOINT_H


#import <Foundation/Foundation.h>

#import "CAMZoomPoint.h"

@interface CAMZoomPoint : NSObject

@property (readonly, nonatomic) CAMZoomPoint *baseZoomPoint; // ivar: _baseZoomPoint
@property (readonly, nonatomic) CGFloat displayZoomFactor; // ivar: _displayZoomFactor
@property (readonly, nonatomic) CGFloat zoomFactor; // ivar: _zoomFactor


+(id)displayZoomFactorsFromZoomPoints:(id)arg0 ;
+(id)significantIndexesInZoomPoints:(id)arg0 ;
+(id)zoomFactorsFromZoomPoints:(id)arg0 ;
+(id)zoomPointWithFactor:(CGFloat)arg0 displayed:(CGFloat)arg1 ;
+(id)zoomPointsWithFactors:(id)arg0 displayZoomFactors:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToZoomPoint:(id)arg0 ;
-(id)description;


@end


#endif