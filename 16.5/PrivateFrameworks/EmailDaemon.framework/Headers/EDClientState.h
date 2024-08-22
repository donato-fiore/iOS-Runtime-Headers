// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDCLIENTSTATE_H
#define EDCLIENTSTATE_H

@class EFLocked, NSString, NSArray;
@protocol EDClientStateReporting, EFLoggable;

#import <Foundation/Foundation.h>


@interface EDClientState : NSObject <EDClientStateReporting, EFLoggable>

 {
    EFLocked *_visibleMailboxObjectIDs;
    os_unfair_lock_s _visibleMailboxesLock;
    uint8_t _isForeground;
    uint8_t _isRunningTests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isForeground;
@property (readonly) BOOL isRunningTests;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *visibleMailboxObjectIDs;


+(id)log;
+(id)sharedInstance;
-(id)giveBoostWithCompletionBlock:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)exitDaemon;
-(void)setStateForDemoMode:(id)arg0 ;


@end


#endif