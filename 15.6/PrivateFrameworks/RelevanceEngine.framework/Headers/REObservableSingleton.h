// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REOBSERVABLESINGLETON_H
#define REOBSERVABLESINGLETON_H



#import "RESingleton.h"
#import "REObserverStore.h"

@interface REObservableSingleton : RESingleton {
    REObserverStore *_store;
}


@property (readonly, nonatomic) NSUInteger numberOfObservers;


-(id)_init;
-(void)addObserver:(id)arg0 ;
-(void)enumerateObservers:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif