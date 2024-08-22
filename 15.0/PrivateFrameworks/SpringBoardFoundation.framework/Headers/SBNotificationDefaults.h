// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBNOTIFICATIONDEFAULTS_H
#define SBNOTIFICATIONDEFAULTS_H

@class NSArray;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBNotificationDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL alwaysAllowDefaultAction;
@property (readonly, nonatomic) BOOL alwaysAllowLongLookGesture;
@property (readonly, nonatomic) BOOL alwaysSpeakNotifications;
@property (retain, nonatomic) NSArray *displayIDsWithBadgingEnabled;
@property (readonly, nonatomic) BOOL dontSuppressForPrivacyWhenUnlocked;
@property (readonly, nonatomic) NSArray *legacyAlarmList;
@property (readonly, nonatomic) BOOL shouldTestBannerPlayTextTone;


+(id)standardDefaults;
-(void)_bindAndRegisterDefaults;


@end


#endif