// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATTRACKINGENFORCEMENTMANAGER_H
#define ATTRACKINGENFORCEMENTMANAGER_H


#import <Foundation/Foundation.h>


@interface ATTrackingEnforcementManager : NSObject



+(BOOL)isDefaultReturned;
+(BOOL)lastEnforcement;
+(BOOL)shouldEnforceTrackingWithReasonCode:(*NSInteger)arg0 ;
+(NSInteger)lastReasonCode;
+(id)lastBagLookup;
+(void)setIsDefaultReturned:(BOOL)arg0 ;
+(void)setLastBagLookup:(id)arg0 ;
+(void)setLastEnforcement:(BOOL)arg0 ;
+(void)setLastReasonCode:(NSInteger)arg0 ;


@end


#endif