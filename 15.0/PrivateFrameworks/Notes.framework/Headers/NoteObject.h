// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NOTEOBJECT_H
#define NOTEOBJECT_H

@class NSManagedObject, NSString, NSSet, NSArray, NSNumber, NSDate, NSData, NSManagedObjectContext, NSURL, NSManagedObjectID, CSSearchableItemAttributeSet;
@protocol ICSearchIndexableNote;


#import "NoteBodyObject.h"
#import "NoteStoreObject.h"

@interface NoteObject : NSManagedObject <ICSearchIndexableNote>



@property (readonly, copy, nonatomic) NSString *accountName;
@property (retain, nonatomic) NSSet *attachments;
@property (retain, nonatomic) NSString *author;
@property (readonly, nonatomic) NSArray *authorsExcludingCurrentUser;
@property (retain, nonatomic) NoteBodyObject *body;
@property (retain, nonatomic) NSNumber *containsCJK;
@property (retain, nonatomic) NSString *content;
@property (readonly, nonatomic) NSString *contentAsPlainText;
@property (readonly, nonatomic) NSString *contentAsPlainTextPreservingNewlines;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy, nonatomic) NSString *contentInfoText;
@property (retain, nonatomic) NSNumber *contentType;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSInteger currentStatus;
@property (readonly, copy, nonatomic) NSString *dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *deletedFlag;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *externalContentRef;
@property (retain, nonatomic) NSNumber *externalFlags;
@property (retain, nonatomic) NSData *externalRepresentation;
@property (retain, nonatomic) NSNumber *externalSequenceNumber;
@property (retain, nonatomic) NSNumber *externalServerIntId;
@property (nonatomic) NSUInteger flags;
@property (readonly, copy, nonatomic) NSString *folderName;
@property (readonly, copy, nonatomic) NSString *folderNameForNoteList;
@property (readonly, retain, nonatomic) NSString *guid;
@property (readonly, nonatomic) BOOL hasUnreadChanges;
@property (readonly, nonatomic) BOOL hasValidServerIntId;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *integerId;
@property (readonly, nonatomic) BOOL isBeingMarkedForDeletion;
@property (retain, nonatomic) NSNumber *isBookkeepingEntry;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly, nonatomic) BOOL isDeletedOrInTrash;
@property (readonly, nonatomic) BOOL isHiddenFromSearch;
@property (readonly, nonatomic) BOOL isMarkedForDeletion;
@property (readonly, nonatomic) BOOL isModernNote;
@property (readonly, nonatomic) BOOL isMovable;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly, nonatomic) BOOL isPinned;
@property (nonatomic) BOOL isPlainText;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isSharedViaICloudFolder;
@property (readonly, nonatomic) BOOL isUnsupported;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSString *noteAsPlainTextWithoutTitle;
@property (readonly, nonatomic) NSSet *noteCellKeyPaths;
@property (readonly, nonatomic) NSURL *noteId;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, copy, nonatomic) NSString *searchDomainIdentifier;
@property (readonly, copy, nonatomic) NSString *searchIndexingIdentifier;
@property (readonly, nonatomic) BOOL searchResultCanBeDeletedFromNoteContext;
@property (readonly, nonatomic) NSUInteger searchResultType;
@property (readonly, nonatomic) NSUInteger searchResultsSection;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *searchableItemAttributeSet;
@property (nonatomic) NSUInteger sequenceNumber;
@property (retain, nonatomic) NSString *serverId;
@property (nonatomic) NSInteger serverIntId;
@property (retain, nonatomic) NoteStoreObject *store;
@property (retain, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *trimmedTitle;
@property (readonly, nonatomic) CSSearchableItemAttributeSet *userActivityContentAttributeSet;
@property (readonly, nonatomic) NSInteger visibilityTestingType;


-(BOOL)belongsToCollection:(id)arg0 ;
-(BOOL)containsAttachments;
-(id)dataForTypeIdentifier:(id)arg0 ;
-(id)defaultTitleForEmptyNote;
-(void)markForDeletion;


@end


#endif