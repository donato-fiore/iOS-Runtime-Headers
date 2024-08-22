// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDWARNINGSTORE_H
#define WBSPASSWORDWARNINGSTORE_H

@class NSURL, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSPasswordWarningStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    BOOL _hasPendingChanges;
    NSURL *_backingStoreURL;
    NSMutableDictionary *_lastWarningDatesByPersistentIdentifier;
}




+(id)sharedStore;
-(id)_initWithBackingStoreURL:(id)arg0 ;
-(id)_initWithDefaultBackingStore;
-(void)_addPersistentIdentifier:(id)arg0 withLastWarningDate:(id)arg1 ;
-(void)_loadStoreIfNecessary;
-(void)_saveStoreNow;
-(void)_saveStoreSoon;
-(void)addPersistentIdentifier:(id)arg0 ;
-(void)clearStoreSynchronously;
-(void)getContainsPersistentIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveStoreSynchronously;
-(void)synchronousyClearIdentifiersAddedAfterDate:(id)arg0 ;


@end


#endif