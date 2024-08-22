// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKWEAKOBSERVERSMAP_H
#define _HKWEAKOBSERVERSMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _HKWeakObserversMap : NSObject {
    NSMutableDictionary *_observers;
}




-(NSUInteger)observerCountForKey:(id)arg0 ;
-(id)observersForKey:(id)arg0 ;
-(void)addObserver:(id)arg0 forKey:(id)arg1 ;
-(void)removeObserver:(id)arg0 forKey:(id)arg1 ;


@end


#endif