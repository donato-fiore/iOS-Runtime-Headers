// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKOBSERVERMANAGER_H
#define NPKOBSERVERMANAGER_H

@class NSMutableIndexSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NPKObserverManager : NSObject {
    NSMutableIndexSet *_priorityIndexSet;
    NSMutableDictionary *_observersTables;
}




-(id)init;
-(void)_enumerateObserversTablesUsingBlock:(id)arg0 ;
-(void)_enumerateObserversUsingBlock:(id)arg0 ;
-(void)_registerObserver:(id)arg0 ;
-(void)_registerObserver:(id)arg0 withRelativePriority:(NSUInteger)arg1 ;
-(void)_unregisterObserver:(id)arg0 ;
-(void)enumerateObserversUsingBlock:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)registerObserver:(id)arg0 withRelativePriority:(NSUInteger)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif