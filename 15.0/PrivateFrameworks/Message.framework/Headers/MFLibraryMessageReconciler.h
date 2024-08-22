// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFLIBRARYMESSAGERECONCILER_H
#define MFLIBRARYMESSAGERECONCILER_H

@class EDPersistenceHookRegistry, EDPersistenceDatabase;
@protocol MFAccountsProvider;

#import <Foundation/Foundation.h>

#import "MFMailMessageLibrary.h"
#import "MFMailMessageLibraryQueryTransformer.h"

@interface MFLibraryMessageReconciler : NSObject {
    EDPersistenceHookRegistry *_hookRegistry;
    EDPersistenceDatabase *_database;
    MFMailMessageLibrary *_library;
    id<MFAccountsProvider> *_accountsProvider;
    MFMailMessageLibraryQueryTransformer *_transformer;
}


@property (readonly, nonatomic) NSUInteger numberOfUnreconciledMessages;


-(id)initWithLibrary:(id)arg0 accountsProvider:(id)arg1 ;
-(id)reconcileInboxMessagesWithWindow:(id)arg0 ;
-(id)reconcileWithMessageReconciliationQueries:(id)arg0 window:(id)arg1 ;
-(id)reconcileWithThreadReconciliationQueries:(id)arg0 window:(id)arg1 ;
-(void)reconcileAllObjectsWithWindow:(id)arg0 ;


@end


#endif