// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRGENERALCOMMISSIONINGCLUSTERBASICCOMMISSIONINGINFO_H
#define MTRGENERALCOMMISSIONINGCLUSTERBASICCOMMISSIONINGINFO_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRGeneralCommissioningClusterBasicCommissioningInfo : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *failSafeExpiryLengthSeconds; // ivar: _failSafeExpiryLengthSeconds
@property (copy, nonatomic) NSNumber *maxCumulativeFailsafeSeconds; // ivar: _maxCumulativeFailsafeSeconds


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif