// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly, nonatomic) NSString *regionCode; // ivar: _regionCode


+(id)sharedBehavior;
-(id)init;
-(void)_handleDeviceFirstUnlock;
-(void)dealloc;


@end


#endif