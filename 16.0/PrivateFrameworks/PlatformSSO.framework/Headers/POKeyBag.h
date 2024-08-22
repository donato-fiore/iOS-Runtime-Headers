// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POKEYBAG_H
#define POKEYBAG_H


#import <Foundation/Foundation.h>


@interface POKeyBag : NSObject {
    int _notifyToken;
}


@property BOOL firstUnlock; // ivar: _firstUnlock
@property (copy) id *startupCompletion; // ivar: _startupCompletion
@property (copy) id *unlockCompletion; // ivar: _unlockCompletion


-(BOOL)isUserKeybagUnlocked;
-(id)init;
-(void)dealloc;
-(void)startObservingKeyBagLockStatusChanges;
-(void)stopObservingKeyBagLockStatusChanges;
-(void)waitForKeyBagFirstUnlockOnStartupWithCompletion:(id)arg0 ;
-(void)waitForKeyBagFirstUnlockWithCompletion:(id)arg0 ;


@end


#endif