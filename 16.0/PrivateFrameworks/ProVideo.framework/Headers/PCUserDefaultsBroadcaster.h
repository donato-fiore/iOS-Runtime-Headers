// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCUSERDEFAULTSBROADCASTER_H
#define PCUSERDEFAULTSBROADCASTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PCUserDefaultsBroadcaster : NSObject {
    NSMutableDictionary *_userDefaultsBroadcasted;
}




+(id)sharedInstance;
-(BOOL)hasObserversOfUserDefault:(id)arg0 ;
-(BOOL)isWeakReferenceHashTableEmpty:(id)arg0 ;
-(id)init;
-(id)observersForUserDefault:(id)arg0 ;
-(void)addObserver:(id)arg0 ofUserDefaults:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 forUserDefault:(id)arg1 fromObservers:(id)arg2 ;
-(void)removeObserver:(id)arg0 ofUserDefaults:(id)arg1 ;
-(void)removeObserversForUserDefault:(id)arg0 ;


@end


#endif