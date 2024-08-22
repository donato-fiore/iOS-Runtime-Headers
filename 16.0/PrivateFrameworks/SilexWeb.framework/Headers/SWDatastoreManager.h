// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWDATASTOREMANAGER_H
#define SWDATASTOREMANAGER_H

@class NSString, NSHashTable;
@protocol SWDatastoreManager, SWDatastoreSynchronizationManager, SWDocumentStateProviding, SWLogger;

#import <Foundation/Foundation.h>

#import "SWDatastore.h"

@interface SWDatastoreManager : NSObject <SWDatastoreManager>



@property (readonly, nonatomic) SWDatastore *datastore; // ivar: _datastore
@property (readonly, nonatomic) NSObject<SWDatastoreSynchronizationManager> *datastoreSynchronizationManager; // ivar: _datastoreSynchronizationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SWDocumentStateProviding> *documentStateProvider; // ivar: _documentStateProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(id)initWithDatastore:(id)arg0 logger:(id)arg1 documentStateProvider:(id)arg2 datastoreSynchronizationManager:(id)arg3 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)updateDatastore:(id)arg0 originatingSession:(id)arg1 completion:(id)arg2 ;


@end


#endif