// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOPREFERENCES_H
#define SOPREFERENCES_H


#import <Foundation/Foundation.h>


@interface SOPreferences : NSObject



+(BOOL)boolValueForKey:(struct __CFString *)arg0 defaultValue:(BOOL)arg1 ;
+(BOOL)isAssociatedDomainValidated;
+(BOOL)isExtensionSignatureValidated;


@end


#endif