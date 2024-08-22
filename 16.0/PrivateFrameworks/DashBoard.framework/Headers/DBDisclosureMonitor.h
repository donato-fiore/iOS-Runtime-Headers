// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBDISCLOSUREMONITOR_H
#define DBDISCLOSUREMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DBDisclosureMonitor : NSObject

@property (readonly, nonatomic) BOOL active;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (nonatomic) BOOL markedSafe; // ivar: _markedSafe
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers


-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)markSafe;
-(void)removeObserver:(id)arg0 ;
-(void)turnFeaturesOff;


@end


#endif