// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSNOTIFICATIONCENTER_H
#define NSNOTIFICATIONCENTER_H


#import <Foundation/Foundation.h>


@interface NSNotificationCenter : NSObject {
    *void _impl;
    *void _callback;
    *void _pad;
}




+(id)_defaultCenterWithoutCreating;
+(id)defaultCenter;
+(void)load;
-(BOOL)isEmpty;
-(NSUInteger)_addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 object:(id)arg3 options:(NSUInteger)arg4 ;
-(id)_initWithCFNotificationCenter:(struct __CFNotificationCenter *)arg0 ;
-(id)addObserverForName:(id)arg0 object:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)_removeObserver:(NSUInteger)arg0 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)dealloc;
-(void)postNotification:(id)arg0 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 name:(id)arg1 object:(id)arg2 ;


@end


#endif