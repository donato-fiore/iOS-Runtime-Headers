// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDMMANAGEDASSETMANAGER_H
#define MDMMANAGEDASSETMANAGER_H


#import <Foundation/Foundation.h>


@interface MDMManagedAssetManager : NSObject



+(void)_promptUserForiTunesAccount:(id)arg0 accountNameEditable:(BOOL)arg1 canCreateNewAccount:(BOOL)arg2 assertion:(id)arg3 completionBlock:(id)arg4 ;
+(void)promptUserToLoginToiTunesIfNeededTitle:(id)arg0 message:(id)arg1 assertion:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif