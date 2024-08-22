// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICBASETEXTVIEWITEMPROVIDERPASTESESSION_H
#define ICBASETEXTVIEWITEMPROVIDERPASTESESSION_H

@class NSSet, NSMutableSet, NSManagedObjectID, NSManagedObjectContext, ICNote;


#import "ICBaseTextViewPasteSession.h"

@interface ICBaseTextViewItemProviderPasteSession : ICBaseTextViewPasteSession

@property (readonly, nonatomic) NSSet *errorCodes;
@property (nonatomic) BOOL isForDragAndDrop; // ivar: _isForDragAndDrop
@property (retain, nonatomic) NSMutableSet *mutableErrorCodes; // ivar: _mutableErrorCodes
@property (retain, nonatomic) NSManagedObjectID *noteObjectID; // ivar: _noteObjectID
@property (nonatomic) NSUInteger numberOfAttachmentImagesPreloaded; // ivar: _numberOfAttachmentImagesPreloaded
@property (nonatomic) NSUInteger numberOfAttachmentsAttemptedAdded; // ivar: _numberOfAttachmentsAttemptedAdded
@property (nonatomic) NSUInteger numberOfTrailingNewlinesStripped; // ivar: _numberOfTrailingNewlinesStripped
@property (nonatomic) BOOL shouldFilterAttributedString; // ivar: _shouldFilterAttributedString
@property (nonatomic) BOOL supportsAttachments; // ivar: _supportsAttachments
@property (retain, nonatomic) NSManagedObjectContext *workerContext; // ivar: _workerContext
@property (readonly, nonatomic) ICNote *workerNote;


-(id)initWithNoteObjectID:(id)arg0 ;
-(void)addErrorWithCode:(NSInteger)arg0 ;
-(void)incrementNumberOfAttachmentsAttemptedAdded;
-(void)performBlockAndWait:(id)arg0 ;
-(void)saveWorkerContext;


@end


#endif