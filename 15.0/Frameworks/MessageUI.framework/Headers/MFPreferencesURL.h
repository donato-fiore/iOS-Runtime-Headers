// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPREFERENCESURL_H
#define MFPREFERENCESURL_H


#import <Foundation/Foundation.h>


@interface MFPreferencesURL : NSObject



+(id)_accountInfoSettingsURLForAccount:(id)arg0 preferenceURLType:(NSInteger)arg1 ;
+(id)_pathComponentsForAccount:(id)arg0 preferenceURLType:(NSInteger)arg1 ;
+(id)_urlForRoot:(id)arg0 pathComponents:(id)arg1 ;
+(id)accountInfoURLForAccount:(id)arg0 ;
+(id)accountURLForAccount:(id)arg0 ;
+(id)addAccountURL;
+(id)advancedAccountInfoURLForAccount:(id)arg0 ;
+(id)blockedSenderURL;
+(id)storageManagementURL;
+(id)vipSenderListURL;


@end


#endif