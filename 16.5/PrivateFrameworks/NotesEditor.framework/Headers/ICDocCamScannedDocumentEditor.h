// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMSCANNEDDOCUMENTEDITOR_H
#define ICDOCCAMSCANNEDDOCUMENTEDITOR_H

@class ICAttachment, ICAttachmentGalleryModel, NSUndoManager;

#import <Foundation/Foundation.h>


@interface ICDocCamScannedDocumentEditor : NSObject

@property (retain, nonatomic) ICAttachment *galleryAttachment; // ivar: _galleryAttachment
@property (readonly, nonatomic) ICAttachmentGalleryModel *galleryModel;
@property (retain, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager


-(BOOL)moveObjectWithIdentifier:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)setOrientation:(NSInteger)arg0 forAttachment:(id)arg1 ;
-(BOOL)updateTitle:(id)arg0 forSubAttachment:(id)arg1 ;
-(NSUInteger)indexForAttachmentWithIdentifier:(id)arg0 ;
-(id)initWithGalleryAttachment:(id)arg0 ;
-(id)subAttachmentWithIdentifier:(id)arg0 ;
-(void)applyFilter:(short)arg0 forAttachmentAtIndex:(NSUInteger)arg1 ;
-(void)applyFilter:(short)arg0 forAttachmentWithIdentifier:(id)arg1 ;
-(void)deletePagesAtIndexes:(id)arg0 ;
-(void)movePageFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)saveAndUpdatePreview:(BOOL)arg0 ;
-(void)setMarkupData:(id)arg0 forAttachmentWithIdentifier:(id)arg1 ;
-(void)setOrientation:(NSInteger)arg0 forAttachmentAtIndex:(NSUInteger)arg1 ;
-(void)setQuad:(id)arg0 forAttachment:(id)arg1 ;
-(void)setQuad:(id)arg0 forAttachmentWithIdentifier:(id)arg1 ;
-(void)undeleteSubAttachment:(id)arg0 ;
-(void)undoablyDeleteSubAttachments:(id)arg0 actionName:(id)arg1 ;
-(void)undoablyMoveAttachmentWithIdentifier:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)undoablySetOrientation:(NSInteger)arg0 forAttachmentIdentifier:(id)arg1 ;
-(void)undoablySetQuad:(id)arg0 forAttachment:(id)arg1 ;
-(void)undoablyUndeleteSubAttachments:(id)arg0 actionName:(id)arg1 ;
-(void)undoablyUpdateTitle:(id)arg0 forAttachmentWithIdentifier:(id)arg1 isUserDefined:(BOOL)arg2 ;
-(void)updateDocumentTitle:(id)arg0 isUserDefined:(BOOL)arg1 ;


@end


#endif