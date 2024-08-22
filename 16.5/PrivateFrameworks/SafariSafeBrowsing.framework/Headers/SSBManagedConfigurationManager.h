// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSBMANAGEDCONFIGURATIONMANAGER_H
#define SSBMANAGEDCONFIGURATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface SSBManagedConfigurationManager : NSObject



+(BOOL)isSafeBrowsingEnabledStateLockedDownByRestrictions;
+(BOOL)restrictedBoolValueForSafeBrowsing;


@end


#endif