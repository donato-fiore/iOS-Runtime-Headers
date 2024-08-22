// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NOTEACCOUNTOBJECT_H
#define NOTEACCOUNTOBJECT_H

@class NSNumber, NSString, NSDictionary, NSSet;


#import "NoteCollectionObject.h"
#import "NoteStoreObject.h"

@interface NoteAccountObject : NoteCollectionObject {
    NSNumber *_preventMovingNotesToOtherAccounts;
}


@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) NSInteger accountType;
@property (retain, nonatomic) NSDictionary *constraints; // ivar: _constraints
@property (retain, nonatomic) NSString *constraintsPath;
@property (retain, nonatomic) NoteStoreObject *defaultStore;
@property (nonatomic) BOOL didChooseToMigrate;
@property (readonly, nonatomic) BOOL isICloudIMAPAccount;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *pathToConstraintsPlist;
@property (readonly, nonatomic) BOOL preventMovingNotesToOtherAccounts;
@property (retain, nonatomic) NSSet *stores;
@property (retain, nonatomic) NSNumber *type;


+(BOOL)shouldDataAccessCreateAccountForACAccount:(id)arg0 ;
-(BOOL)isAllNotesContainer;
-(BOOL)shouldMarkNotesAsDeleted;
-(BOOL)validateDefaultStore:(*id)arg0 error:(*id)arg1 ;
-(id)basicAccountIdentifier;
-(id)cacheKey;
-(id)collectionInfo;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)predicateForNotes;
-(id)searchDomainIdentifier;
-(id)storeForExternalId:(id)arg0 ;
-(id)titleForTableViewCell;
-(void)didTurnIntoFault;
-(void)willSave;


@end


#endif