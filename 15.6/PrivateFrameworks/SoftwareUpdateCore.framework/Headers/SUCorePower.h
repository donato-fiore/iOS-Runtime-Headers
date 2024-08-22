// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCOREPOWER_H
#define SUCOREPOWER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCorePower : NSObject

@property (retain, nonatomic) NSMutableDictionary *activePowerAssertions; // ivar: _activePowerAssertions
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue; // ivar: _assertionQueue


+(id)sharedPowerManager;
+(int)getPowerAssertionCountForIdentifierDomain:(id)arg0 ;
+(void)_disablePowerAssertion:(id)arg0 forAppendedDomain:(id)arg1 ;
+(void)_enablePowerAssertion:(id)arg0 forAppendedDomain:(id)arg1 ;
+(void)setPowerAssertion:(BOOL)arg0 forIdentifierDomain:(id)arg1 ;
-(id)init;


@end


#endif