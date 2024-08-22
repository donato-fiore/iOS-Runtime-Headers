// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLVISIT_H
#define CLVISIT_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_CLPlaceInference.h"

@interface CLVisit : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) _CLPlaceInference *_placeInference; // ivar: __placeInference
@property (readonly, copy, nonatomic) NSDate *arrivalDate; // ivar: _arrivalDate
@property (readonly, nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly, copy, nonatomic) NSDate *departureDate; // ivar: _departureDate
@property (readonly, copy, nonatomic) NSDate *detectionDate; // ivar: _detectionDate
@property (readonly, nonatomic) BOOL hasArrivalDate;
@property (readonly, nonatomic) BOOL hasDepartureDate;
@property (readonly, nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 horizontalAccuracy:(CGFloat)arg1 arrivalDate:(id)arg2 departureDate:(id)arg3 detectionDate:(id)arg4 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 horizontalAccuracy:(CGFloat)arg1 arrivalDate:(id)arg2 departureDate:(id)arg3 detectionDate:(id)arg4 placeInference:(id)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif