// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPSERVEROBJECTDATABASEIMPORTER_H
#define _MPSERVEROBJECTDATABASEIMPORTER_H

@class MSVSQLDatabaseTransaction, MSVSQLStatement, NSString;
@protocol MPServerObjectDatabaseOperations;

#import <Foundation/Foundation.h>


@interface _MPServerObjectDatabaseImporter : NSObject <MPServerObjectDatabaseOperations>

 {
    MSVSQLDatabaseTransaction *_transaction;
    MSVSQLStatement *_selectExistingObjectStatement;
    MSVSQLStatement *_insertObjectStatement;
    MSVSQLStatement *_insertObjectRelationshipStatement;
    MSVSQLStatement *_insertAssetURLStatement;
    MSVSQLStatement *_removeRelationshipsStatement;
    MSVSQLStatement *_updateMiniSINFStatement;
    MSVSQLStatement *_updateSINFStatement;
    MSVSQLStatement *_insertPlaybackAuthorizationTokenStatement;
    MSVSQLStatement *_updateAssetURLStatement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_importAssetFullSINF:(id)arg0 forIdentifier:(id)arg1 hashedPersonID:(id)arg2 flavor:(NSInteger)arg3 ;
-(BOOL)_importAssetMiniSINF:(id)arg0 forIdentifier:(id)arg1 hashedPersonID:(id)arg2 flavor:(NSInteger)arg3 ;
-(BOOL)importAssetSinf:(id)arg0 type:(NSInteger)arg1 forIdentifier:(id)arg2 hashedPersonID:(id)arg3 flavor:(NSInteger)arg4 sinfPayload:(id)arg5 ;
-(BOOL)importAssetURL:(id)arg0 forIdentifiers:(id)arg1 flavor:(NSInteger)arg2 expirationDate:(id)arg3 ;
-(BOOL)importObject:(id)arg0 type:(id)arg1 identifiers:(id)arg2 source:(NSInteger)arg3 expiration:(id)arg4 ;
-(BOOL)importPlaybackAuthorizationToken:(id)arg0 identifiers:(id)arg1 source:(NSInteger)arg2 type:(id)arg3 expirationDate:(id)arg4 ;
-(BOOL)relateIdentifiers:(id)arg0 toParentIdentifiers:(id)arg1 childKey:(id)arg2 order:(NSInteger)arg3 ;
-(BOOL)removeRelationshipsForParentIdentifiers:(id)arg0 childKey:(id)arg1 ;
-(id)_existingAssetMatchingIdentifier:(id)arg0 hashedPersonID:(id)arg1 flavor:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif