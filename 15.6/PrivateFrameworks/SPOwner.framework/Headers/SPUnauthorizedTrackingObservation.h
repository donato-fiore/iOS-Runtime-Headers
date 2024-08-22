// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUNAUTHORIZEDTRACKINGOBSERVATION_H
#define SPUNAUTHORIZEDTRACKINGOBSERVATION_H

@class NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPUnauthorizedTrackingAdvertisement.h"

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDate *observedAt; // ivar: _observedAt
@property (copy, nonatomic) NSArray *observedLocations; // ivar: _observedLocations
@property (retain, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier; // ivar: _trackingIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentAdvertisementAndLocationHistory:(id)arg0 observedLocations:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif