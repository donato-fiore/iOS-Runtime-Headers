// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGENERALCOMMISSIONINGCLUSTERBASICCOMMISSIONINGINFO_H
#define MTRGENERALCOMMISSIONINGCLUSTERBASICCOMMISSIONINGINFO_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRGeneralCommissioningClusterBasicCommissioningInfo : NSObject

@property (retain, nonatomic) NSNumber *failSafeExpiryLengthSeconds; // ivar: _failSafeExpiryLengthSeconds
@property (retain, nonatomic) NSNumber *maxCumulativeFailsafeSeconds; // ivar: _maxCumulativeFailsafeSeconds


-(id)description;
-(id)init;


@end


#endif