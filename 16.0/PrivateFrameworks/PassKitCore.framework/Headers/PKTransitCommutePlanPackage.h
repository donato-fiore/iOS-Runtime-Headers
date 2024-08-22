// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSITCOMMUTEPLANPACKAGE_H
#define PKTRANSITCOMMUTEPLANPACKAGE_H

@class NSMutableDictionary, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKTransitCommutePlanPackage : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSMutableDictionary *commutePlanLookupDictionary; // ivar: _commutePlanLookupDictionary
@property (nonatomic) NSUInteger transitCommutePlanType; // ivar: _transitCommutePlanType
@property (copy, nonatomic) NSArray *transitCommutePlans; // ivar: _transitCommutePlans


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 backFieldBuckets:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 ;
-(id)planForIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif