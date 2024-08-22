// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKLOCATIONREADINGS_H
#define HKLOCATIONREADINGS_H

@class NSArray, HKWorkout;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKLocationReadings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *allValidLocations; // ivar: _allValidLocations
@property (readonly, nonatomic) CGFloat averageSpeed; // ivar: _averageSpeed
@property (readonly, nonatomic) CGFloat bottomSpeed; // ivar: _bottomSpeed
@property (readonly, nonatomic) NSArray *inOrderLocationArrays; // ivar: _inOrderLocationArrays
@property (readonly, nonatomic) BOOL isSmoothed; // ivar: _isSmoothed
@property (readonly, nonatomic) CGFloat topSpeed; // ivar: _topSpeed
@property (readonly, nonatomic) HKWorkout *workout; // ivar: _workout


+(BOOL)supportsSecureCoding;
-(NSInteger)count;
-(id)debugDescription;
-(id)description;
-(id)firstObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 workout:(id)arg1 ;
-(id)initWithLocations:(id)arg0 workout:(id)arg1 isSmoothed:(BOOL)arg2 ;
-(id)lastObject;
-(void)_calculateSpeeds;
-(void)_filterLocationsByActiveTimePeriod:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif