// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUITOGGLESTATECENTER_H
#define SKUITOGGLESTATECENTER_H

@class NSMutableDictionary, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SKUIToggleStateCenter : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
}




+(id)defaultCenter;
-(BOOL)updateItem:(id)arg0 ;
-(id)init;
-(id)itemForIdentifier:(id)arg0 ;
-(void)_accountStoreChangeNotification:(id)arg0 ;
-(void)_notifyObserversOfStateChanges:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)clearAll;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif