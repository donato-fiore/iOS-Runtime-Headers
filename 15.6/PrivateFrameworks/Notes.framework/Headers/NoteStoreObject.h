// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NOTESTOREOBJECT_H
#define NOTESTOREOBJECT_H

@class NSSet, NSString;


#import "NoteCollectionObject.h"
#import "NoteAccountObject.h"

@interface NoteStoreObject : NoteCollectionObject

@property (retain, nonatomic) NoteAccountObject *account;
@property (retain, nonatomic) NSSet *changes;
@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *syncAnchor;


-(NSUInteger)minimumSequenceNumberForServerIntIds:(id)arg0 ;
-(id)basicAccountIdentifier;
-(id)cacheKey;
-(id)collectionInfo;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)notesForGUIDs:(id)arg0 ;
-(id)notesForIntegerIds:(id)arg0 ;
-(id)notesForServerIds:(id)arg0 ;
-(id)notesForServerIntIds:(id)arg0 ;
-(id)notesForServerIntIds:(id)arg0 ascending:(BOOL)arg1 limit:(NSUInteger)arg2 ;
-(id)notesForServerIntIdsInRange:(struct _NSRange )arg0 ;
-(id)notesForServerIntIdsInRange:(struct _NSRange )arg0 ascending:(BOOL)arg1 limit:(NSUInteger)arg2 ;
-(id)predicateForNotes;
-(id)searchDomainIdentifier;
-(id)titleForTableViewCell;
-(unsigned int)maximumServerIntId;


@end


#endif