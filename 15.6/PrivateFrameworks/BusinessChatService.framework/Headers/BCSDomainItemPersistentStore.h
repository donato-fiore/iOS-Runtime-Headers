// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSDOMAINITEMPERSISTENTSTORE_H
#define BCSDOMAINITEMPERSISTENTSTORE_H

@class NSString;
@protocol BCSDomainItemCaching;


#import "BCSPersistentStore.h"

@interface BCSDomainItemPersistentStore : BCSPersistentStore <BCSDomainItemCaching>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)executeDeleteDomainDomainItemSQLQuery:(id)arg0 ;
-(NSInteger)schemaVersion;
-(char *)schema;
-(id)databasePath;
-(id)domainItemMatching:(id)arg0 ;
-(void)deleteAllDomainItems;
-(void)deleteAllExpiredDomainItems;
-(void)deleteDomainItemMatching:(id)arg0 ;
-(void)updateDomainItem:(id)arg0 withDomainItemIdentifier:(id)arg1 ;
-(void)updateDomainItemsForDomainShard:(id)arg0 ;


@end


#endif