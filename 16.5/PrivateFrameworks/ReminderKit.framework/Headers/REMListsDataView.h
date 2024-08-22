// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLISTSDATAVIEW_H
#define REMLISTSDATAVIEW_H


#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMListsDataView : NSObject

@property (readonly, nonatomic) REMStore *store; // ivar: _store


+(id)listsFromAccountStorages:(id)arg0 listStorages:(id)arg1 store:(id)arg2 ;
+(id)listsFromAccountStorages:(id)arg0 listStorages:(id)arg1 store:(id)arg2 requestedExternalIdentifiers:(id)arg3 ;
+(id)listsFromAccountStorages:(id)arg0 listStorages:(id)arg1 store:(id)arg2 requestedListIDs:(id)arg3 ;
-(id)debugFetchPhantomListsWithError:(*id)arg0 ;
-(id)fetchAllListsWithExternalIdentifier:(id)arg0 inAccount:(id)arg1 error:(*id)arg2 ;
-(id)fetchDefaultListRequiringCloudKitWithAccountID:(id)arg0 error:(*id)arg1 ;
-(id)fetchDefaultListWithError:(*id)arg0 ;
-(id)fetchEligibleDefaultListsWithError:(*id)arg0 ;
-(id)fetchListIncludingConcealedWithObjectID:(id)arg0 includeMarkedForDeletionOnly:(BOOL)arg1 error:(*id)arg2 ;
-(id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg0 inAccount:(id)arg1 error:(*id)arg2 ;
-(id)fetchListIncludingSpecialContainerWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchListRepresentationOfTemplateWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchListWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchListsInAccount:(id)arg0 error:(*id)arg1 ;
-(id)fetchListsInGroup:(id)arg0 error:(*id)arg1 ;
-(id)fetchListsIncludingSpecialContainersInAccount:(id)arg0 error:(*id)arg1 ;
-(id)fetchListsIncludingSpecialContainersWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchListsWithExternalIdentifiers:(id)arg0 inAccount:(id)arg1 error:(*id)arg2 ;
-(id)fetchListsWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif