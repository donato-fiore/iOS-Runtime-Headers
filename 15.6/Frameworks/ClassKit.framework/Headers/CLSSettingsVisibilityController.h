// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSSETTINGSVISIBILITYCONTROLLER_H
#define CLSSETTINGSVISIBILITYCONTROLLER_H


#import <Foundation/Foundation.h>

#import "CLSCurrentUser.h"

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    os_unfair_lock_s _lock;
}




+(id)shared;
-(BOOL)settingsUIVisible;
-(id)cachedCurrentUserAppleID;
-(id)currentUser;
-(id)init;
-(void)currentUserDidChange:(id)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)unlock;


@end


#endif