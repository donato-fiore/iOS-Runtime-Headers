// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPERSISTENCEMANAGER_H
#define SAPERSISTENCEMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "SAPersistenceManagerSettings.h"
#import "SAPersistenceStore.h"

@interface SAPersistenceManager : NSObject

@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain) SAPersistenceManagerSettings *settings; // ivar: _settings
@property (readonly, nonatomic) SAPersistenceStore *store; // ivar: _store


-(BOOL)_createDirectoryIfNotPresent;
-(BOOL)load;
-(BOOL)reset;
-(BOOL)save;
-(id)initWithSettings:(id)arg0 ;
-(void)_notifyObserversOnReadFromURL:(id)arg0 bytes:(NSUInteger)arg1 ;
-(void)_notifyObserversOnWriteToURL:(id)arg0 bytes:(NSUInteger)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)onUpdatedMonitoringSessionRecord:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif