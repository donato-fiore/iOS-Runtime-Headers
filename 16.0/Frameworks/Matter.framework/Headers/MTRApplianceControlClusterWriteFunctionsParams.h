// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAPPLIANCECONTROLCLUSTERWRITEFUNCTIONSPARAMS_H
#define MTRAPPLIANCECONTROLCLUSTERWRITEFUNCTIONSPARAMS_H

@class NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRApplianceControlClusterWriteFunctionsParams : NSObject

@property (retain, nonatomic) NSArray *functionData; // ivar: _functionData
@property (retain, nonatomic) NSNumber *functionDataType; // ivar: _functionDataType
@property (retain, nonatomic) NSNumber *functionId; // ivar: _functionId
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif