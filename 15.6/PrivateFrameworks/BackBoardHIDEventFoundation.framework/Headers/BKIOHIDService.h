// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKIOHIDSERVICE_H
#define BKIOHIDSERVICE_H

@class NSMutableArray, NSString, BKSHIDEventSenderDescriptor;
@protocol BKHIDEventSenderInfo, BSDescriptionProviding, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BKIOHIDService.h"

@interface BKIOHIDService : NSObject <BKHIDEventSenderInfo, BSDescriptionProviding, NSCopying>

 {
    BKIOHIDService *_strongSelf;
    os_unfair_lock_s _workQueueAccessLock;
    NSObject<OS_dispatch_queue> *_workQueue_do_not_touch_directly;
    *__IOHIDNotification _workQueue_removalNotification;
    NSMutableArray *_workQueue_disappearanceObservers;
}


@property (nonatomic) *__IOHIDService IOHIDService; // ivar: _IOHIDService
@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (nonatomic, getter=isBuiltIn) BOOL builtIn; // ivar: _builtIn
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayUUID; // ivar: _displayUUID
@property (nonatomic) int eventSource; // ivar: _eventSource
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int primaryUsage; // ivar: _primaryUsage
@property (nonatomic) unsigned int primaryUsagePage; // ivar: _primaryUsagePage
@property (copy, nonatomic) BKSHIDEventSenderDescriptor *senderDescriptor; // ivar: _senderDescriptor
@property (nonatomic) NSUInteger senderID; // ivar: _senderID
@property (nonatomic) NSInteger serviceStatus; // ivar: _serviceStatus
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueProductIdentifier;


-(BOOL)claimsToConformToUsagePage:(unsigned short)arg0 usage:(unsigned short)arg1 ;
-(BOOL)setProperties:(id)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)_disappearanceObservers;
-(id)_initForTestingWithSenderID:(NSUInteger)arg0 setUpInitialProperties:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initForSimulatorWithDisplayUUID:(id)arg0 ;
-(id)initWithHIDServiceRef:(struct __IOHIDService *)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(id)propertyOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(int)setElementValue:(unsigned int)arg0 forUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 ;
-(void)_serviceWasRemoved;
-(void)_setUpInitialProperties;
-(void)_workQueue_startIOServiceRemovalNotifications;
-(void)_workQueue_stopIOServiceRemovalNotifications;
-(void)addDisappearanceObserver:(id)arg0 queue:(id)arg1 ;
-(void)asyncSetProperties:(id)arg0 ;
-(void)asyncSetProperty:(id)arg0 forKey:(id)arg1 ;
-(void)asyncSetProperty:(id)arg0 forKey:(id)arg1 andDelayForSeconds:(CGFloat)arg2 ;
-(void)dealloc;
-(void)removeDisappearanceObserver:(id)arg0 ;


@end


#endif