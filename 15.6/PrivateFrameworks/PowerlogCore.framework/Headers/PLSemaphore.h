// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSEMAPHORE_H
#define PLSEMAPHORE_H

@class NSMutableSet, NSString, NSCondition;

#import <Foundation/Foundation.h>


@interface PLSemaphore : NSObject

@property (retain) NSMutableSet *interestedObjects; // ivar: _interestedObjects
@property (readonly) BOOL isActive;
@property (retain) NSString *key; // ivar: _key
@property (retain) NSMutableSet *pendingDoneObjects; // ivar: _pendingDoneObjects
@property (retain) NSCondition *pendingObjectsLock; // ivar: _pendingObjectsLock
@property CGFloat timeout; // ivar: _timeout


+(id)sharedSemaphoreForKey:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(void)signalDoneByObject:(id)arg0 ;
-(void)signalInterestByObject:(id)arg0 ;
-(void)signalNonInterestByObject:(id)arg0 ;
-(void)signalStartListening;
-(void)waitWithBlock:(id)arg0 ;
-(void)waitWithBlockSync:(id)arg0 ;


@end


#endif