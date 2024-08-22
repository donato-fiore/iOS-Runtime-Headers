// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDWARNINGTOPFRAUDTARGETS_H
#define WBSPASSWORDWARNINGTOPFRAUDTARGETS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WBSPasswordWarningTopFraudTargets : NSObject

@property (readonly, nonatomic) NSArray *financialFraudTargets; // ivar: _financialFraudTargets
@property (readonly, nonatomic) NSArray *fraudTargets; // ivar: _fraudTargets
@property (readonly, nonatomic) NSArray *highPriorityFraudTargets; // ivar: _highPriorityFraudTargets


-(id)initWithHighPriorityTargets:(id)arg0 targets:(id)arg1 financialTargets:(id)arg2 ;
-(id)initWithPlistData:(id)arg0 error:(*id)arg1 ;


@end


#endif