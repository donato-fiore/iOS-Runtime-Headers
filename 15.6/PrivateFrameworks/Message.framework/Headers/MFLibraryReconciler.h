// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFLIBRARYRECONCILER_H
#define MFLIBRARYRECONCILER_H

@class EDPersistenceHookRegistry, NSString;
@protocol EDProtectedDataReconciliationHookResponder, EDDatabaseChangeHookResponder, EFScheduler, EDReconciliationQueryProvider, MFAccountsProvider;

#import <Foundation/Foundation.h>

#import "MFLibraryMessageReconciler.h"
#import "MFLibraryThreadReconciler.h"

@interface MFLibraryReconciler : NSObject <EDProtectedDataReconciliationHookResponder, EDDatabaseChangeHookResponder>

 {
    EDPersistenceHookRegistry *_hookRegistry;
    id<EFScheduler> *_reconciliationCleanupScheduler;
    id<EDReconciliationQueryProvider> *_queryProvider;
    id<MFAccountsProvider> *_accountsProvider;
    MFLibraryMessageReconciler *_messageReconciler;
    MFLibraryThreadReconciler *_threadReconciler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithLibrary:(id)arg0 queryProvider:(id)arg1 accountsProvider:(id)arg2 ;
-(void)persistenceDidReconcileProtectedData;


@end


#endif