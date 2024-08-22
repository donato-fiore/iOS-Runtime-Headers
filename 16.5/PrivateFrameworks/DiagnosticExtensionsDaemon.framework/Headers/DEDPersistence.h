// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDPERSISTENCE_H
#define DEDPERSISTENCE_H

@class NSUserDefaults;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface DEDPersistence : NSObject

@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (retain) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)sharedInstance;
-(BOOL)canProceedWithDevice:(id)arg0 ;
-(id)_indexKeyForBugSession:(id)arg0 ;
-(id)_indexKeyForBugSessionIdentifier:(id)arg0 ;
-(id)bugSessionIdentifiers;
-(id)init;
-(id)loadSavedBugSessions;
-(id)loadSavedSessionsFromPlist:(id)arg0 ;
-(void)removeBugSession:(id)arg0 ;
-(void)updateBugSession:(id)arg0 ;
-(void)validateSandboxAccess;


@end


#endif