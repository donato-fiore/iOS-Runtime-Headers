// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWDATASTOREMANAGER_H
#define SWDATASTOREMANAGER_H

@class NSString, NSHashTable;
@protocol SWDatastoreManager, SWDatastoreSynchronizationManager, SWDocumentStateProviding, SWLogger;

#import <Foundation/Foundation.h>

#import "SWDatastore.h"

@interface SWDatastoreManager : NSObject <SWDatastoreManager>



@property (readonly, nonatomic) SWDatastore *datastore;
@property (readonly, nonatomic) NSObject<SWDatastoreSynchronizationManager> *datastoreSynchronizationManager; // ivar: _datastoreSynchronizationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SWDocumentStateProviding> *documentStateProvider; // ivar: _documentStateProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) SWDatastore *privateDatastore; // ivar: _privateDatastore
@property (readonly) Class superclass;


-(id)initWithLogger:(id)arg0 documentStateProvider:(id)arg1 datastoreSynchronizationManager:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)reset;
-(void)updateDatastore:(id)arg0 originatingSession:(id)arg1 completion:(id)arg2 ;
-(void)updateDatastore:(id)arg0 originatingSession:(id)arg1 forceUpdate:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif