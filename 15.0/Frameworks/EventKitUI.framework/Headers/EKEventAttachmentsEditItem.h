// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTATTACHMENTSEDITITEM_H
#define EKEVENTATTACHMENTSEDITITEM_H

@class NSArray, NSString, EKEvent;
@protocol UIDocumentPickerDelegate, UIDropInteractionDelegate, EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate;


#import "EKEventEditItem.h"
#import "EKUITableViewCell.h"

@interface EKEventAttachmentsEditItem : EKEventEditItem <UIDocumentPickerDelegate, UIDropInteractionDelegate, EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate>

 {
    NSArray *_cellControllers;
    EKUITableViewCell *_addAttachmentCell;
    BOOL _documentPickerPresented;
}


@property BOOL attachmentsModified; // ivar: _attachmentsModified
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) EKEvent *eventToModify; // ivar: _eventToModify
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldCondenseIntoSingleItem;
-(BOOL)_shouldShowAddAttachmentCell;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)dropInteraction:(id)arg0 canHandleSession:(id)arg1 ;
-(BOOL)forceTableReloadOnSave;
-(BOOL)usesDetailViewControllerForSubitem:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)numberOfSubitems;
-(id)_addAttachmentCell;
-(id)attachmentEvent;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)dropInteraction:(id)arg0 sessionDidUpdate:(id)arg1 ;
-(id)footerTitle;
-(id)owningEventForAttachmentCellController:(id)arg0 ;
-(id)owningEventForAttachmentEditViewController:(id)arg0 ;
-(id)parentViewControllerForAttachmentCellController:(id)arg0 ;
-(id)trailingSwipeActionsConfigurationForRowAtIndex:(NSInteger)arg0 ;
-(void)_addAttachment:(id)arg0 ;
-(void)_cleanUpCellControllers;
-(void)_loadAndAddDataAttachmentFromItem:(id)arg0 ;
-(void)_showAddAttachmentViewControllerAnimated:(BOOL)arg0 ;
-(void)attachmentEditViewController:(id)arg0 attachmentDidChange:(NSInteger)arg1 ;
-(void)dealloc;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)documentPickerWasCancelled:(id)arg0 ;
-(void)dropInteraction:(id)arg0 performDrop:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnd:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidEnter:(id)arg1 ;
-(void)dropInteraction:(id)arg0 sessionDidExit:(id)arg1 ;
-(void)editor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)prepareForReload;
-(void)refreshFromCalendarItemAndStore;


@end


#endif