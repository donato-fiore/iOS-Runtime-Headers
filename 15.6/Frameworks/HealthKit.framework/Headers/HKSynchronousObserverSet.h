// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSYNCHRONOUSOBSERVERSET_H
#define HKSYNCHRONOUSOBSERVERSET_H

@class NSHashTable, NSString, NSArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface HKSynchronousObserverSet : NSObject {
    NSHashTable *_observerTable;
    NSString *_name;
    NSObject<OS_os_log> *_category;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSArray *allObservers;
@property (readonly) NSUInteger count;


-(id)initWithName:(id)arg0 loggingCategory:(id)arg1 ;
-(void)notifyObservers:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif