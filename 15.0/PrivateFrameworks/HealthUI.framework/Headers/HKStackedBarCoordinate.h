// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSTACKEDBARCOORDINATE_H
#define HKSTACKEDBARCOORDINATE_H

@class NSArray;


#import "HKMinMaxCoordinate.h"

@interface HKStackedBarCoordinate : HKMinMaxCoordinate

@property (copy, nonatomic) NSArray *stackPoints; // ivar: _stackPoints


-(id)copyWithTransform:(struct CGAffineTransform )arg0 roundToViewScale:(BOOL)arg1 ;
-(id)initWithStackPoints:(id)arg0 userInfo:(id)arg1 ;


@end


#endif