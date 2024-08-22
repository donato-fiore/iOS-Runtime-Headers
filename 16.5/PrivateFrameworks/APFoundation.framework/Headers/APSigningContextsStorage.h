// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSIGNINGCONTEXTSSTORAGE_H
#define APSIGNINGCONTEXTSSTORAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "APSigningKeychainServices.h"
#import "APUnfairLock.h"

@interface APSigningContextsStorage : NSObject

@property (retain, nonatomic) APSigningKeychainServices *keychainServices; // ivar: _keychainServices
@property (retain, nonatomic) NSString *launchID; // ivar: _launchID
@property (retain, nonatomic) APUnfairLock *lock; // ivar: _lock


+(id)sharedInstance;
-(BOOL)_checkDuplicate:(id)arg0 forIdentifier:(NSUInteger)arg1 ;
-(id)init;
-(id)retrieveSuccessfulContexts;
-(void)_destroyAndClearAllPreviousContextsForType:(NSInteger)arg0 ;
-(void)_destroyAndClearAllPreviousLaunchContexts;
-(void)_removeStoredContext:(NSUInteger)arg0 forType:(NSInteger)arg1 ;
-(void)destroyAndClearAllContexts;
-(void)removeStoredContext:(NSUInteger)arg0 ;
-(void)storeInProgressContext:(NSUInteger)arg0 isStashed:(BOOL)arg1 ;
-(void)storeSuccessfulContext:(NSUInteger)arg0 ;
-(void)storeUsedContext:(NSUInteger)arg0 ;


@end


#endif