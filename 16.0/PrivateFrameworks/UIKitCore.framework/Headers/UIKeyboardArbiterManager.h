// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDARBITERMANAGER_H
#define UIKEYBOARDARBITERMANAGER_H


#import <Foundation/Foundation.h>


@interface UIKeyboardArbiterManager : NSObject

@property (readonly) BOOL remoteKeyboardUndocked;


+(id)arbiterClient;
+(id)sharedArbiterManager;
-(void)forceKeyboardAway;
-(void)preserveKeyboardWithId:(id)arg0 ;
-(void)restoreKeyboardWithId:(id)arg0 ;
-(void)userSelectedApp:(id)arg0 onCompletion:(id)arg1 ;
-(void)userSelectedProcessIdentifier:(int)arg0 withSceneIdentity:(id)arg1 onCompletion:(id)arg2 ;


@end


#endif