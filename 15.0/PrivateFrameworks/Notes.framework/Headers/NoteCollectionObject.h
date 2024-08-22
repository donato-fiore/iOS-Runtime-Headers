// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NOTECOLLECTIONOBJECT_H
#define NOTECOLLECTIONOBJECT_H

@class NSManagedObject, NSString, NSNumber;
@protocol ICNoteVisibilityTesting;



@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *transientNoteCount; // ivar: transientNoteCount


-(BOOL)isTitleValid:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsVisibilityTestingType:(NSInteger)arg0 ;
-(id)basicAccountIdentifier;
-(id)cacheKey;
-(id)collectionInfo;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)predicateForNotes;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
-(id)searchDomainIdentifier;
-(id)titleForTableViewCell;


@end


#endif