// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICACCESSMANAGER_H
#define ICACCESSMANAGER_H


#import <Foundation/Foundation.h>


@interface ICAccessManager : NSObject



+(BOOL)validateBundleIdentifierAccessingExternalMediaDevices:(id)arg0 ;
+(id)bundleIdentifiersAccessingExternalMediaDevices;
+(id)bundleIdentifiersAccessingExternalMediaDevicesWithStatus;
+(void)addBundleIdentifierAccessingExternalMediaDevices:(id)arg0 ;
+(void)revokeBundleIdentifierAccessingExternalMediaDevices:(id)arg0 ;
+(void)updateBundleIdentifierAccessingExternalMediaDevices:(id)arg0 withStatus:(BOOL)arg1 ;


@end


#endif