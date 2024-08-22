// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POPREFERENCES_H
#define POPREFERENCES_H


#import <Foundation/Foundation.h>


@interface POPreferences : NSObject



+(BOOL)boolValueForKey:(struct __CFString *)arg0 defaultValue:(BOOL)arg1 ;
+(BOOL)forceKerberosTGTExchange;
+(BOOL)requireRootCAInSystemTrustStore;


@end


#endif