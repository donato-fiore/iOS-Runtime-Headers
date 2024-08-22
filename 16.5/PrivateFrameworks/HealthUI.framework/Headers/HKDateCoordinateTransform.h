// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDATECOORDINATETRANSFORM_H
#define HKDATECOORDINATETRANSFORM_H

@class NSCalendar;


#import "HKCoordinateTransform.h"

@interface HKDateCoordinateTransform : HKCoordinateTransform

@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)coordinateForValue:(id)arg0 ;
-(id)initWithCurrentCalendar:(id)arg0 ;
-(id)valueForCoordinate:(CGFloat)arg0 ;


@end


#endif