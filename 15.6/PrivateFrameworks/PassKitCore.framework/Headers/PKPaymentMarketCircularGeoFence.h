// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTMARKETCIRCULARGEOFENCE_H
#define PKPAYMENTMARKETCIRCULARGEOFENCE_H

@class CLCircularRegion, NSUUID, NSString;
@protocol PKPaymentMarketGeoFence, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentMarketCircularGeoFence : NSObject <PKPaymentMarketGeoFence, NSSecureCoding>

 {
    CLCircularRegion *_circle;
    NSUUID *_identifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)containsLocation:(id)arg0 ;
-(CGFloat)distanceFromLocation:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif