// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TACLVISIT_H
#define TACLVISIT_H

@class NSDate, NSDateInterval, NSString;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>


@interface TACLVisit : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, copy, nonatomic) NSDate *arrivalDate; // ivar: _arrivalDate
@property (readonly, nonatomic) NSUInteger confidence; // ivar: _confidence
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDate *departureDate; // ivar: _departureDate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *detectionDate; // ivar: _detectionDate
@property (readonly, nonatomic) BOOL hasArrivalDate;
@property (readonly, nonatomic) BOOL hasDepartureDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (readonly, nonatomic) BOOL isTemporalOrderSensical;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 horizontalAccuracy:(CGFloat)arg1 arrivalDate:(id)arg2 departureDate:(id)arg3 detectionDate:(id)arg4 confidence:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif