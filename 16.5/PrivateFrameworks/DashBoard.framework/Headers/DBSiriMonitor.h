// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSIRIMONITOR_H
#define DBSIRIMONITOR_H

@class CARObserverHashTable;

#import <Foundation/Foundation.h>


@interface DBSiriMonitor : NSObject

@property (retain) CARObserverHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL siriEnabled; // ivar: _siriEnabled


-(id)init;
-(void)_updateSiriEnabled;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)handleAssistantLanguageChanged:(id)arg0 ;
-(void)handleAssistantPreferencesChanged:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif