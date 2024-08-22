// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHTEMPLATESTORE_H
#define ACHTEMPLATESTORE_H

@class NSArray, NSString, NSHashTable, HDProfile, NSMutableSet, NSMutableDictionary, NSDictionary;
@protocol HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHTemplateEntitySyncedTemplatesObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHTemplateEntityWrapper.h"

@interface ACHTemplateStore : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHTemplateEntitySyncedTemplatesObserver>



@property (readonly, nonatomic) NSArray *allTemplates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char device; // ivar: _device
@property (retain, nonatomic) ACHTemplateEntityWrapper *entityWrapper; // ivar: _entityWrapper
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialFetchComplete; // ivar: _initialFetchComplete
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // ivar: _synchronizationQueue
@property (retain, nonatomic) NSMutableSet *templates; // ivar: _templates
@property (retain, nonatomic) NSMutableDictionary *templatesByKey; // ivar: _templatesByKey
@property (retain, nonatomic) NSMutableDictionary *templatesByUniqueName; // ivar: _templatesByUniqueName
@property (retain, nonatomic) NSDictionary *templatesReadyToAdd; // ivar: _templatesReadyToAdd


-(BOOL)_isValidTemplate:(id)arg0 ;
-(BOOL)_queue_addTemplates:(id)arg0 provenance:(NSInteger)arg1 databaseContext:(id)arg2 triggerSync:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)_queue_addTemplatesToDatabase:(id)arg0 provenance:(NSInteger)arg1 databaseContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)_removeTemplatesFromDatabase:(id)arg0 error:(*id)arg1 ;
-(BOOL)addTemplates:(id)arg0 databaseContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)loadAllTemplatesFromDatabaseIfNecessary;
-(BOOL)removeAllTemplates:(*id)arg0 ;
-(BOOL)removeTemplates:(id)arg0 error:(*id)arg1 ;
-(id)_queue_templatesFilteredForDuplicates:(id)arg0 ;
-(id)availableTemplatesForDateComponents:(id)arg0 countryCode:(id)arg1 ;
-(id)initWithProfile:(id)arg0 entityWrapper:(id)arg1 device:(unsigned char)arg2 ;
-(id)templateForTemplateKey:(NSUInteger)arg0 ;
-(id)templateForUniqueName:(id)arg0 ;
-(void)_addTemplatesToLocalCollections:(id)arg0 ;
-(void)_notifyObserversOfInitialFetchCompletion;
-(void)_notifyObserversOfNewTemplates:(id)arg0 ;
-(void)_notifyObserversOfRemovedTemplates:(id)arg0 ;
-(void)_removeTemplatesFromLocalCollections:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addTemplates:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)templateEntityDidReceiveSyncedTemplates:(id)arg0 provenance:(NSInteger)arg1 ;


@end


#endif