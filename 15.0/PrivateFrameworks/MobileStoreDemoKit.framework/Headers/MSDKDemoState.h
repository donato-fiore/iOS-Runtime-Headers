// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSDKDEMOSTATE_H
#define MSDKDEMOSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MSDKDemoState : NSObject

@property (retain) NSMutableDictionary *cache; // ivar: _cache


+(id)sharedInstance;
-(BOOL)isDeviceEnrolledWithDeKOTA;
-(BOOL)isStoreDemoModeEnabled;
-(id)init;
-(int)activationConfigurationFlags;


@end


#endif