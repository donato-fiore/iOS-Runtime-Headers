// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVOBJECTREGISTRY_H
#define AVOBJECTREGISTRY_H

@class NSHashTable, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface AVObjectRegistry : NSObject {
    NSHashTable *_registeredObjects;
    NSRecursiveLock *_lock;
}




+(id)defaultObjectRegistry;
-(BOOL)safeRetainObject:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)registerObject:(id)arg0 ;
-(void)registerObjectForSafeRetain:(id)arg0 ;
-(void)safeInvokeWithDescription:(id)arg0 ;
-(void)safeInvokeWithDescriptionDelayed:(id)arg0 ;
-(void)safePerformOnMainThreadTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
-(void)safePerformOnMainThreadTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 delay:(CGFloat)arg3 ;
-(void)safePerformOnThread:(id)arg0 target:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)safePerformTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 delay:(CGFloat)arg3 ;
-(void)safePostDelayedNotificationFromMainThreadTarget:(id)arg0 name:(id)arg1 userInfo:(id)arg2 ;
-(void)safePostDelayedNotificationFromThread:(id)arg0 target:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)safePostNotificationFromMainThreadTarget:(id)arg0 name:(id)arg1 userInfo:(id)arg2 ;
-(void)safePostNotificationFromThread:(id)arg0 target:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)unregisterObject:(id)arg0 ;


@end


#endif