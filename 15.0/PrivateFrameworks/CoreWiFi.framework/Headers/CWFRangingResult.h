// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFRANGINGRESULT_H
#define CWFRANGINGRESULT_H

@class NSString, NSData, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFRangingResult : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *MACAddress; // ivar: _MACAddress
@property (nonatomic) CGFloat distance; // ivar: _distance
@property (copy, nonatomic) NSData *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *measurements; // ivar: _measurements
@property (nonatomic) NSUInteger numberOfValidMeasurements; // ivar: _numberOfValidMeasurements
@property (nonatomic) CGFloat standardDeviation; // ivar: _standardDeviation
@property (nonatomic) int status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRangingResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif