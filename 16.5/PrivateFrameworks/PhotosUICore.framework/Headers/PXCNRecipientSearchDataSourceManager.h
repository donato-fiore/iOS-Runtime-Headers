// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCNRECIPIENTSEARCHDATASOURCEMANAGER_H
#define PXCNRECIPIENTSEARCHDATASOURCEMANAGER_H

@class CNAutocompleteSearchManager, NSNumber, NSMutableArray, NSDictionary, NSArray, NSString;
@protocol CNAutocompleteSearchConsumer, OS_dispatch_queue;


#import "PXRecipientSearchDataSourceManager.h"
#import "PXIDSAddressQueryController.h"
#import "PXSharedLibraryParticipantValidationManager.h"
#import "PXCNRecipientSearchDataSource.h"

@interface PXCNRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager <CNAutocompleteSearchConsumer>

 {
    NSObject<OS_dispatch_queue> *_creationQueue;
    CNAutocompleteSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    uint8_t _currentAtomicSearchTaskID;
    NSMutableArray *_autocompleteSearchResults;
    PXIDSAddressQueryController *_idsAddressQueryController;
    NSObject<OS_dispatch_queue> *_searchResultsQueue;
    NSDictionary *_searchResultsByDestination;
    PXSharedLibraryParticipantValidationManager *_cloudKitShareQueryController;
}


@property (retain, nonatomic, setter=_setSearchResults:) NSArray *_searchResults; // ivar: __searchResults
@property (readonly, nonatomic) NSInteger _verificationType; // ivar: __verificationType
@property (readonly, nonatomic) PXCNRecipientSearchDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithVerificationType:(NSInteger)arg0 ;
-(void)_createDataSource;
-(void)_creationQueue_creatingRecipientSearchResultsForResults:(id)arg0 forSearchTaskID:(id)arg1 ;
-(void)_finishedCreatingRecipientSearchResults:(id)arg0 forSearchTaskID:(id)arg1 ;
-(void)_handleAddressQueryResults:(id)arg0 error:(id)arg1 ;
-(void)consumeAutocompleteSearchResults:(id)arg0 taskID:(id)arg1 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)queryStringDidChange;
-(void)removeRecipientResult:(id)arg0 ;


@end


#endif