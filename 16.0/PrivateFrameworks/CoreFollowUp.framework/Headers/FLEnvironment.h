// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLENVIRONMENT_H
#define FLENVIRONMENT_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>


@interface FLEnvironment : NSObject

@property (readonly, nonatomic) BOOL followUpExtensionSupportEnabled;
@property (readonly, nonatomic) BOOL followUpZeroActionsForTheWorld;
@property (retain, nonatomic) NSUserDefaults *followupDefaults; // ivar: _followupDefaults


+(id)currentEnvironment;
-(BOOL)isInternal;
-(BOOL)isUnlocked;
-(BOOL)normalizeExpirationToMidnight;
-(BOOL)shouldHideAllFollowUps;
-(BOOL)shouldShowUnapprovedItems;
-(BOOL)stressMode;
-(CGFloat)oneDayTimeInterval;
-(id)init;
-(id)stressBundleIdentifiers;
-(id)supportedBundleIdentifiers;
-(id)supportedNotifyingAppIds;


@end


#endif