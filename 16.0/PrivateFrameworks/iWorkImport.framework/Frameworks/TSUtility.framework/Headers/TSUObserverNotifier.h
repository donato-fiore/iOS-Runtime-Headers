// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUOBSERVERNOTIFIER_H
#define TSUOBSERVERNOTIFIER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface TSUObserverNotifier : NSObject {
    NSHashTable *_observers;
}




-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)notifyObserversUsingBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif