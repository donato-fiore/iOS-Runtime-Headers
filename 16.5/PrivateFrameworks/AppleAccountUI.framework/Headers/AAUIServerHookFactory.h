// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUISERVERHOOKFACTORY_H
#define AAUISERVERHOOKFACTORY_H


#import <Foundation/Foundation.h>


@interface AAUIServerHookFactory : NSObject



-(id)_defaultHooks:(id)arg0 ;
-(id)_iCloudDataRecoveryServiceHooksFor:(id)arg0 accountManager:(id)arg1 ;
-(id)_passwordAndSecurityHooksForAccount:(id)arg0 accountManager:(id)arg1 ;
-(id)hooksFor:(NSUInteger)arg0 accountManager:(id)arg1 ;


@end


#endif