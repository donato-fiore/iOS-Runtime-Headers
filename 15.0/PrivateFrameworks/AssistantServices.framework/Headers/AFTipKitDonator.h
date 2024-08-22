// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFTIPKITDONATOR_H
#define AFTIPKITDONATOR_H


#import <Foundation/Foundation.h>


@interface AFTipKitDonator : NSObject



+(void)_donateToTipsWithIdentifier:(id)arg0 bundleID:(id)arg1 context:(id)arg2 userInfo:(id)arg3 ;
+(void)donateAnnounceNotificationsInCarPlaySettingsChange:(NSInteger)arg0 ;
+(void)donateDictationEventStartedForBundleId:(id)arg0 context:(id)arg1 userInfo:(id)arg2 ;
+(void)donateMessageSentForBundleId:(id)arg0 context:(id)arg1 userInfo:(id)arg2 ;
+(void)donateSiriEventStartedForBundleId:(id)arg0 context:(id)arg1 userInfo:(id)arg2 ;


@end


#endif