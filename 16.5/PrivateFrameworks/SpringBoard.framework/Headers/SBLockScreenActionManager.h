// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENACTIONMANAGER_H
#define SBLOCKSCREENACTIONMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBLockScreenActionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionProviders; // ivar: _actionProviders


-(id)currentLockScreenActionContext;
-(id)currentLockScreenActionContextActionSource:(*NSUInteger)arg0 ;
-(id)init;
-(void)_clearActionOnAllProviders;
-(void)registerLockScreenActionProvider:(id)arg0 forSource:(NSUInteger)arg1 ;
-(void)runUnlockAction;


@end


#endif