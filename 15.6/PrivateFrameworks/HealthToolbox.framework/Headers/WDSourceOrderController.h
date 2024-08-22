// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDSOURCEORDERCONTROLLER_H
#define WDSOURCEORDERCONTROLLER_H

@class HKSourceStore, NSHashTable;

#import <Foundation/Foundation.h>


@interface WDSourceOrderController : NSObject {
    HKSourceStore *_sourceStore;
    NSHashTable *_observers;
}




-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(void)_notifyObserversForDataType:(id)arg0 withProviders:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)getOrderedSourcesForDataType:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)setOrderedSources:(id)arg0 dataType:(id)arg1 ;


@end


#endif