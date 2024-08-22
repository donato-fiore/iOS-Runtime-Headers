// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSABSTRACTDEFAULTDOMAIN_H
#define BSABSTRACTDEFAULTDOMAIN_H

@class NSUserDefaults, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BSAbstractDefaultDomain : NSObject {
    NSUserDefaults *_userDefaults;
    BOOL _boundDefaults;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableSet *_observerQueue_observers;
    NSMutableDictionary *_defaultKeyToDefaultValue;
}




+(BOOL)__useDynamicMethodResolution;
+(void)initialize;
-(id)_initWithDefaults:(id)arg0 ;
-(id)_initWithDomain:(id)arg0 ;
-(id)_store;
-(id)description;
-(id)init;
-(id)observeDefault:(id)arg0 onQueue:(id)arg1 withBlock:(id)arg2 ;
-(id)observeDefaults:(id)arg0 onQueue:(id)arg1 withBlock:(id)arg2 ;
-(void)_bindAndRegisterDefaults;
-(void)_bindProperty:(id)arg0 withDefaultKey:(id)arg1 ;
-(void)_bindProperty:(id)arg0 withDefaultKey:(id)arg1 toDefaultValue:(id)arg2 ;
-(void)_bindProperty:(id)arg0 withDefaultKey:(id)arg1 toDefaultValue:(id)arg2 options:(NSUInteger)arg3 ;
-(void)_setUserDefaults:(id)arg0 ;
-(void)dealloc;
-(void)resetAllDefaults;
-(void)synchronizeDefaults;


@end


#endif