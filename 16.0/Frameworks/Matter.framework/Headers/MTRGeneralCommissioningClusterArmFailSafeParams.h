// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRGENERALCOMMISSIONINGCLUSTERARMFAILSAFEPARAMS_H
#define MTRGENERALCOMMISSIONINGCLUSTERARMFAILSAFEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRGeneralCommissioningClusterArmFailSafeParams : NSObject

@property (retain, nonatomic) NSNumber *breadcrumb; // ivar: _breadcrumb
@property (retain, nonatomic) NSNumber *expiryLengthSeconds; // ivar: _expiryLengthSeconds
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif