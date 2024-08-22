// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONOBSERVER_H
#define CLKCOMPLICATIONOBSERVER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface CLKComplicationObserver : NSObject {
    NSHashTable *_wakeSessionObservers;
    NSHashTable *_observers;
}




+(id)sharedObserver;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)addWakeSessionObserver:(id)arg0 ;
-(void)complicationListDidChange;
-(void)reloadOrExtendForBundleID:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeWakeSessionObserver:(id)arg0 ;
-(void)wakeSessionWillBeginForBundleID:(id)arg0 ;
-(void)wakeSessionWillEndForBundleID:(id)arg0 ;


@end


#endif