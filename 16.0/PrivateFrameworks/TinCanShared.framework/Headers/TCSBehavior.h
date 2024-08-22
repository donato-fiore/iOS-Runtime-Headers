// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCSBEHAVIOR_H
#define TCSBEHAVIOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TCSBehavior : NSObject {
    int _firstUnlockToken;
}


@property (readonly, nonatomic) BOOL isAppleInternalInstall; // ivar: _isAppleInternalInstall
@property (readonly, nonatomic) BOOL isM8Device; // ivar: _isM8Device
@property (readonly, nonatomic) BOOL isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot; // ivar: _isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot
@property (readonly, nonatomic) BOOL isRunningInStoreDemoModeOrSimulator; // ivar: _isRunningInStoreDemoModeOrSimulator
@property (readonly, nonatomic) NSString *regionCode; // ivar: _regionCode


+(id)sharedBehavior;
-(id)init;
-(void)_handleDeviceFirstUnlock;
-(void)dealloc;


@end


#endif