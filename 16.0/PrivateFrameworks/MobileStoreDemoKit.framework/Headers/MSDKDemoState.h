// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDKDEMOSTATE_H
#define MSDKDEMOSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MSDKDemoState : NSObject

@property (retain) NSMutableDictionary *cache; // ivar: _cache


+(id)sharedInstance;
-(BOOL)_isDeviceEnrolledWithDeKOTA:(*id)arg0 ;
-(BOOL)_isStoreDemoModeEnabled:(*id)arg0 ;
-(BOOL)isDeviceEnrolledWithDeKOTA;
-(BOOL)isDeviceEnrolledWithDeKOTA:(*id)arg0 ;
-(BOOL)isStoreDemoModeEnabled;
-(BOOL)isStoreDemoModeEnabled:(*id)arg0 ;
-(id)init;
-(int)_activationConfigurationFlags:(*id)arg0 ;


@end


#endif