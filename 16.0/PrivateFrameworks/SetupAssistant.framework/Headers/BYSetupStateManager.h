// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BYSETUPSTATEMANAGER_H
#define BYSETUPSTATEMANAGER_H


#import <Foundation/Foundation.h>


@interface BYSetupStateManager : NSObject



+(id)sharedManager;
-(BOOL)didRestoreFromBackup;
-(BOOL)didSetupUsingiTunes;
-(NSInteger)restoreType;
-(id)buddyPrefsValueForKey:(id)arg0 ;
-(void)clearRestoreType;
-(void)recordSetupUsingBuddy;


@end


#endif