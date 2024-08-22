// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFAKENOTIFICATIONSETTINGSREADER_H
#define ATXFAKENOTIFICATIONSETTINGSREADER_H

@class NSArray, NSMutableDictionary, NSString;
@protocol ATXNotificationSettingsReaderProtocol;

#import <Foundation/Foundation.h>


@interface ATXFakeNotificationSettingsReader : NSObject <ATXNotificationSettingsReaderProtocol>

 {
    BOOL _defaultIsAppAllowed;
    BOOL _defaultIsContactAllowed;
    NSArray *_digestDeliveryTimes;
    NSMutableDictionary *_entityToIsAllowed;
    NSMutableDictionary *_sendToDigest;
    NSMutableDictionary *_messagesBreakthrough;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)appIsOnAllowList:(id)arg0 dndModeUUID:(id)arg1 ;
-(BOOL)appIsOnAllowList:(id)arg0 mode:(NSUInteger)arg1 ;
-(BOOL)appIsOnDenyList:(id)arg0 dndModeUUID:(id)arg1 ;
-(BOOL)contactIsOnAllowList:(id)arg0 dndModeUUID:(id)arg1 ;
-(BOOL)contactIsOnAllowList:(id)arg0 mode:(NSUInteger)arg1 ;
-(BOOL)contactIsOnDenyList:(id)arg0 dndModeUUID:(id)arg1 ;
-(BOOL)digestSetupComplete;
-(BOOL)doesAppAllowMessageBreakthrough:(id)arg0 ;
-(BOOL)doesAppSendNotificationsToDigest:(id)arg0 ;
-(NSUInteger)applicationConfigurationTypeForDNDModeUUID:(id)arg0 success:(*BOOL)arg1 ;
-(NSUInteger)senderConfigurationTypeForDNDModeUUID:(id)arg0 success:(*BOOL)arg1 ;
-(id)allConfiguredDigestApps;
-(id)init;
-(id)modeConfiguration:(id)arg0 ;
-(id)notificationDigestDeliveryTimes;
-(id)numConfiguredModes;
-(void)setDefaultNotificationDigestDeliveryTimes:(id)arg0 ;
-(void)setDefaultReturnValueForAppIsAllowed:(BOOL)arg0 ;
-(void)setDefaultReturnValueForContactIsAllowed:(BOOL)arg0 ;
-(void)setDoMessagesBreakthrough:(id)arg0 doesBreakthrough:(BOOL)arg1 ;
-(void)setDoesSendToDigest:(id)arg0 doesSend:(BOOL)arg1 ;
-(void)setIsAllowedForEntity:(id)arg0 isAllowed:(BOOL)arg1 ;


@end


#endif