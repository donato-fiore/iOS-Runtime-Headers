// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TASUSPICIOUSDEVICE_H
#define TASUSPICIOUSDEVICE_H

@class NSData, NSDate, NSDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TAMetricsDetection.h"
#import "TASPAdvertisement.h"

@interface TASuspiciousDevice : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *address; // ivar: _address
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) TAMetricsDetection *detectionMetrics; // ivar: _detectionMetrics
@property (readonly, copy, nonatomic) NSDictionary *detectionSummary; // ivar: _detectionSummary
@property (readonly, nonatomic) NSUInteger detectionType; // ivar: _detectionType
@property (readonly, copy, nonatomic) TASPAdvertisement *latestAdvertisement; // ivar: _latestAdvertisement
@property (readonly, copy, nonatomic) NSArray *locationHistory; // ivar: _locationHistory


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLatestAdv:(id)arg0 detectionSummary:(id)arg1 date:(id)arg2 locHistory:(id)arg3 detectionMetrics:(id)arg4 detectionType:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif