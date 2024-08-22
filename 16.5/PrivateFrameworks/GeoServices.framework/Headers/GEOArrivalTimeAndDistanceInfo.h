// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOARRIVALTIMEANDDISTANCEINFO_H
#define GEOARRIVALTIMEANDDISTANCEINFO_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOArrivalTimeAndDistanceInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *arrivalTimeInfo; // ivar: _arrivalTimeInfo
@property (nonatomic) CGFloat distanceRemainingToEndOfLeg; // ivar: _distanceRemainingToEndOfLeg
@property (nonatomic) CGFloat distanceRemainingToEndOfRoute; // ivar: _distanceRemainingToEndOfRoute


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif