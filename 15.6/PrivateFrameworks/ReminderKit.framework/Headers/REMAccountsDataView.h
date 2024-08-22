// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMACCOUNTSDATAVIEW_H
#define REMACCOUNTSDATAVIEW_H


#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMAccountsDataView : NSObject

@property (readonly, nonatomic) REMStore *store; // ivar: _store


-(id)accountsFromStorages:(id)arg0 ;
-(id)fetchAccountWithExternalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)fetchAccountWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchAccountsWithExternalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)fetchAccountsWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)fetchAllAccountsForAccountManagementWithError:(*id)arg0 ;
-(id)fetchAllAccountsForDumpingWithError:(*id)arg0 ;
-(id)fetchAllAccountsWithError:(*id)arg0 ;
-(id)fetchPrimaryActiveCloudKitAccountREMObjectIDWithError:(*id)arg0 ;
-(id)fetchPrimaryActiveCloudKitAccountWithError:(*id)arg0 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif