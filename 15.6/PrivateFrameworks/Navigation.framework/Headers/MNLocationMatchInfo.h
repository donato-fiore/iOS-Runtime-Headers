// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNLOCATIONMATCHINFO_H
#define MNLOCATIONMATCHINFO_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MNLocationMatchInfo : NSObject

@property (readonly, nonatomic) CLLocationCoordinate2D matchCoordinate; // ivar: _matchCoordinate
@property (readonly, nonatomic) CGFloat matchCourse; // ivar: _matchCourse
@property (readonly, nonatomic) NSData *matchDataArray; // ivar: _matchDataArray
@property (readonly, nonatomic) int matchFormOfWay; // ivar: _matchFormOfWay
@property (readonly, nonatomic) NSInteger matchQuality; // ivar: _matchQuality
@property (readonly, nonatomic) int matchRoadClass; // ivar: _matchRoadClass
@property (readonly, nonatomic) BOOL matchShifted; // ivar: _matchShifted


-(id)initWithMatchQuality:(NSInteger)arg0 matchCoordinate:(struct CLLocationCoordinate2D )arg1 matchCourse:(CGFloat)arg2 matchFormOfWay:(int)arg3 matchRoadClass:(int)arg4 matchShifted:(BOOL)arg5 matchDataArray:(id)arg6 ;


@end


#endif