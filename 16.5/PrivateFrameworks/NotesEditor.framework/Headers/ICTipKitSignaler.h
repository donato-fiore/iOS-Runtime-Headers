// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTIPKITSIGNALER_H
#define ICTIPKITSIGNALER_H

@class NSNumber, NSMutableDictionary, ICSearchQuery;

#import <Foundation/Foundation.h>


@interface ICTipKitSignaler : NSObject

@property (retain, nonatomic) NSNumber *hasClassifiedImages; // ivar: _hasClassifiedImages
@property (retain, nonatomic) NSMutableDictionary *noteModificationDateByIdentifier; // ivar: _noteModificationDateByIdentifier
@property (retain, nonatomic) ICSearchQuery *queryForClassifiedImages; // ivar: _queryForClassifiedImages


+(id)sharedInstance;
-(BOOL)_hasSentSearchSignal:(id)arg0 ;
-(id)clientContextMapForKeys:(id)arg0 selectedObject:(id)arg1 ;
-(id)init;
-(void)_clearHasSentSearchSignal:(id)arg0 ;
-(void)_sendSignalForEventWithIdentifier:(id)arg0 context:(id)arg1 ;
-(void)_setHasSentSearchSignal:(id)arg0 ;
-(void)attachmentAdded:(id)arg0 ;
-(void)clearHasSentHandwritingSearchResultSelectedSignal;
-(void)clearHasSentImageObjectSearchResultSelectedSignal;
-(void)clearHasSentScannedDocumentSearchResultSelectedSignal;
-(void)dealloc;
-(void)documentImageAdded:(id)arg0 ;
-(void)fetchHasClassifiedImagesWithCompletionHandler:(id)arg0 ;
-(void)galleryAttachmentAddedFromCloud:(id)arg0 ;
-(void)hashtagAdded:(id)arg0 ;
-(void)noteDidSave:(id)arg0 ;
-(void)notePinnedStatusChanged:(id)arg0 ;
-(void)noteWasViewed:(id)arg0 modificationDate:(id)arg1 ;
-(void)sendSignalForHashtagAdded:(id)arg0 ;
-(void)sendSignalForNoteCollaborated:(id)arg0 ;
-(void)sendSignalForNoteDocumentImageAdded:(id)arg0 ;
-(void)sendSignalForNoteDocumentScannerUsed:(id)arg0 ;
-(void)sendSignalForNoteEdited:(id)arg0 ;
-(void)sendSignalForNoteEditorCameraButtonTapped:(id)arg0 ;
-(void)sendSignalForNoteEditorMoreButtonTapped:(id)arg0 ;
-(void)sendSignalForNotePinned:(id)arg0 ;
-(void)sendSignalForNoteSharedViaMailOrMessages:(id)arg0 ;
-(void)sendSignalForNoteViewed:(id)arg0 ;
-(void)sendSignalForSearchResultSelectedIfNecessary:(id)arg0 ;
-(void)sendSignalForSmartFolderAdded:(id)arg0 ;
-(void)smartFolderAdded:(id)arg0 ;


@end


#endif