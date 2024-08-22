// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIOBSERVERSTORE_H
#define ARUIOBSERVERSTORE_H

@class NSPointerArray;

#import <Foundation/Foundation.h>


@interface ARUIObserverStore : NSObject {
    NSPointerArray *_observers;
}


@property (readonly, nonatomic) NSUInteger count;


-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)enumerateObserversWithBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif