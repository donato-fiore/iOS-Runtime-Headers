// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTHREADCOMMISSIONER_H
#define HFTHREADCOMMISSIONER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HFThreadCommissioner : NSObject

@property (readonly, nonatomic) NSMutableDictionary *activeCommissioningForSetupCode; // ivar: _activeCommissioningForSetupCode


+(id)sharedCommissioner;
-(id)commissionAccessoryWithSetupCode:(id)arg0 threadIdentifier:(id)arg1 home:(id)arg2 ;
-(id)init;
-(void)cancelAllCommissioning;
-(void)cancelCommissioningForSetupCode:(id)arg0 ;


@end


#endif