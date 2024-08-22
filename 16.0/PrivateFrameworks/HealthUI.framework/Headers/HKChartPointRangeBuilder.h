// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCHARTPOINTRANGEBUILDER_H
#define HKCHARTPOINTRANGEBUILDER_H


#import <Foundation/Foundation.h>


@interface HKChartPointRangeBuilder : NSObject

@property (nonatomic) CGFloat maximumMax; // ivar: _maximumMax
@property (nonatomic) CGFloat minimumMin; // ivar: _minimumMin
@property (nonatomic) NSInteger numChartPoints; // ivar: _numChartPoints
@property (nonatomic) CGFloat uMax; // ivar: _uMax
@property (nonatomic) CGFloat uMin; // ivar: _uMin
@property (nonatomic) CGFloat vMax; // ivar: _vMax
@property (nonatomic) CGFloat vMin; // ivar: _vMin


-(id)init;
-(id)suggestedValueRangeWithRounding:(BOOL)arg0 ;
-(void)visitChartPoint:(id)arg0 ;


@end


#endif