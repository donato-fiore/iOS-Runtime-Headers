// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTAPTORADARMANAGER_H
#define CKTAPTORADARMANAGER_H

@class NSMutableDictionary, NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKTapToRadarManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *alertQueue; // ivar: _alertQueue
@property (retain, nonatomic) NSMutableDictionary *lastPromptDateByMessageHash; // ivar: _lastPromptDateByMessageHash
@property (retain, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)sharedManager;
-(id)_hashForMessage:(id)arg0 ;
-(id)_init;
-(id)_lastPromptDateForMessage:(id)arg0 ;
-(id)init;
-(void)_launchTTRWithRequest:(id)arg0 ;
-(void)_lockedTriggerTapToRadarWithRequest:(id)arg0 ;
-(void)_notePromptAttemptForMessage:(id)arg0 ;
-(void)triggerTapToRadarWithRequest:(id)arg0 ;


@end


#endif