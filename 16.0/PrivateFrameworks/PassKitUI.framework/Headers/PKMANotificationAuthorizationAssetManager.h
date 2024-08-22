// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMANOTIFICATIONAUTHORIZATIONASSETMANAGER_H
#define PKMANOTIFICATIONAUTHORIZATIONASSETMANAGER_H

@class PKMobileAssetManager;

#import <Foundation/Foundation.h>


@interface PKMANotificationAuthorizationAssetManager : NSObject {
    PKMobileAssetManager *_mobileAssetManager;
}




+(id)sharedInstance;
-(id)_notificationAuthorizationImageFilenameForLocale:(id)arg0 ;
-(id)init;
-(id)notificationAuthorizationString:(id)arg0 ;
-(struct CGImage *)notificationAuthorizationImageForLocale:(id)arg0 ;
-(void)downloadNotificationAuthorizationImage:(id)arg0 completion:(id)arg1 ;


@end


#endif