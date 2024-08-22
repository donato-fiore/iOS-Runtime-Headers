// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBBUDDYMONITOR_H
#define DBBUDDYMONITOR_H

@class CARObserverHashTable;

#import <Foundation/Foundation.h>


@interface DBBuddyMonitor : NSObject

@property (nonatomic) BOOL buddyFinished; // ivar: _buddyFinished
@property (retain) CARObserverHashTable *observers; // ivar: _observers


-(id)init;
-(void)_updateBuddyFinished;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif