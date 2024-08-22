// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMNOTEBOOKRESTRICTIONS_H
#define EDAMNOTEBOOKRESTRICTIONS_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMNotebookRestrictions : FATObject

@property (retain, nonatomic) NSNumber *expungeWhichSharedNotebookRestrictions; // ivar: _expungeWhichSharedNotebookRestrictions
@property (retain, nonatomic) NSNumber *noCreateNotes; // ivar: _noCreateNotes
@property (retain, nonatomic) NSNumber *noCreateSharedNotebooks; // ivar: _noCreateSharedNotebooks
@property (retain, nonatomic) NSNumber *noCreateTags; // ivar: _noCreateTags
@property (retain, nonatomic) NSNumber *noEmailNotes; // ivar: _noEmailNotes
@property (retain, nonatomic) NSNumber *noExpungeNotebook; // ivar: _noExpungeNotebook
@property (retain, nonatomic) NSNumber *noExpungeNotes; // ivar: _noExpungeNotes
@property (retain, nonatomic) NSNumber *noExpungeTags; // ivar: _noExpungeTags
@property (retain, nonatomic) NSNumber *noPublishToBusinessLibrary; // ivar: _noPublishToBusinessLibrary
@property (retain, nonatomic) NSNumber *noPublishToPublic; // ivar: _noPublishToPublic
@property (retain, nonatomic) NSNumber *noReadNotes; // ivar: _noReadNotes
@property (retain, nonatomic) NSNumber *noRenameNotebook; // ivar: _noRenameNotebook
@property (retain, nonatomic) NSNumber *noSendMessageToRecipients; // ivar: _noSendMessageToRecipients
@property (retain, nonatomic) NSNumber *noSetDefaultNotebook; // ivar: _noSetDefaultNotebook
@property (retain, nonatomic) NSNumber *noSetNotebookStack; // ivar: _noSetNotebookStack
@property (retain, nonatomic) NSNumber *noSetParentTag; // ivar: _noSetParentTag
@property (retain, nonatomic) NSNumber *noShareNotes; // ivar: _noShareNotes
@property (retain, nonatomic) NSNumber *noShareNotesWithBusiness; // ivar: _noShareNotesWithBusiness
@property (retain, nonatomic) NSNumber *noUpdateNotebook; // ivar: _noUpdateNotebook
@property (retain, nonatomic) NSNumber *noUpdateNotes; // ivar: _noUpdateNotes
@property (retain, nonatomic) NSNumber *noUpdateTags; // ivar: _noUpdateTags
@property (retain, nonatomic) NSNumber *updateWhichSharedNotebookRestrictions; // ivar: _updateWhichSharedNotebookRestrictions


+(id)structFields;
+(id)structName;


@end


#endif