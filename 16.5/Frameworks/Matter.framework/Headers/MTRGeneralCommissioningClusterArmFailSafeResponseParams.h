// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRGENERALCOMMISSIONINGCLUSTERARMFAILSAFERESPONSEPARAMS_H
#define MTRGENERALCOMMISSIONINGCLUSTERARMFAILSAFERESPONSEPARAMS_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRGeneralCommissioningClusterArmFailSafeResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSString *debugText; // ivar: _debugText
@property (copy, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif