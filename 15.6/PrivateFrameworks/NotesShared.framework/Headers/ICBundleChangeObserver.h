// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICBUNDLECHANGEOBSERVER_H
#define ICBUNDLECHANGEOBSERVER_H

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentStoreCoordinator;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICBundleChangeObserver : NSObject

@property (copy, nonatomic) id *attachmentDidChange; // ivar: _attachmentDidChange
@property (nonatomic) BOOL didAddForExistingPaperAttachments; // ivar: _didAddForExistingPaperAttachments
@property (copy, nonatomic) id *didChangeFilePresenters; // ivar: _didChangeFilePresenters
@property (nonatomic) BOOL isObserving; // ivar: _isObserving
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (retain, nonatomic) NSMutableDictionary *mutableFilePresenters; // ivar: _mutableFilePresenters
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // ivar: _persistentStoreCoordinator
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue


-(id)filePresenters;
-(id)init;
-(id)initWithPersistentStoreCoordinator:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)addManagedObjectContextDidSaveObserver;
-(void)addObserverForBundleWithObjectID:(id)arg0 url:(id)arg1 ;
-(void)addObserversForExistingPaperAttachments;
-(void)addObserversForObjects:(id)arg0 ;
-(void)contextDidSave:(id)arg0 ;
-(void)processObjectIDs:(id)arg0 completion:(id)arg1 ;
-(void)removeManagedObjectContextDidSaveObserver;
-(void)removeObserverForBundleWithURL:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)stopAndNotifyObservers:(BOOL)arg0 ;


@end


#endif