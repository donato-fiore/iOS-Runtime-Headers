// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REOBSERVERSTORE_H
#define REOBSERVERSTORE_H

@class NSHashTable, NSArray;

#import <Foundation/Foundation.h>


@interface REObserverStore : NSObject {
    os_unfair_lock_s _lock;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) NSArray *allObservers;
@property (readonly, nonatomic) NSUInteger count;


-(id)init;
-(id)initWithFunctionsOptions:(NSUInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)enumerateObserversWithBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif