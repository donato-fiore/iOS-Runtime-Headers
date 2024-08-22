// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOWERLOGGER_H
#define PBFPOWERLOGGER_H


#import <Foundation/Foundation.h>


@interface PBFPowerLogger : NSObject



+(short)powerLogClientIdentifier;
+(void)logUpdate:(NSInteger)arg0 reason:(NSInteger)arg1 ;
+(void)logUpdate:(NSInteger)arg0 reason:(NSInteger)arg1 inServiceOfBundleIdentifier:(id)arg2 ;


@end


#endif