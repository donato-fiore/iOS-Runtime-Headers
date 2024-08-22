// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKCOUNTEDOBSERVER_H
#define TSKCOUNTEDOBSERVER_H

@class TSUWeakReference;

#import <Foundation/Foundation.h>


@interface TSKCountedObserver : NSObject {
    TSUWeakReference *mWeakObserver;
    NSUInteger mCount;
}




-(NSUInteger)decrementCount;
-(NSUInteger)incrementCount;
-(id)initWithObserver:(id)arg0 ;
-(id)observer;
-(void)dealloc;


@end


#endif