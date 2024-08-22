// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICREATEPDFACTIVITY_H
#define UICREATEPDFACTIVITY_H

@class NSString, QLPreviewController;
@protocol QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIDocumentPickerDelegate;


#import "UIPrintActivity.h"
#import "UICreatePDFActivityItem.h"

@interface UICreatePDFActivity : UIPrintActivity <QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIDocumentPickerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) QLPreviewController *previewController; // ivar: _previewController
@property (retain, nonatomic) UICreatePDFActivityItem *previewURLItem; // ivar: _previewURLItem
@property (readonly) Class superclass;


+(NSUInteger)_xpcAttributes;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(BOOL)previewController:(id)arg0 canEditItem:(id)arg1 ;
-(BOOL)previewController:(id)arg0 shouldSaveEditedItem:(id)arg1 ;
-(BOOL)shouldAppendDefaultDismissActionsForPreviewController:(id)arg0 ;
-(BOOL)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)arg0 ;
-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(id)_embeddedActivityViewController;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)dismissActionsForPreviewController:(id)arg0 ;
-(id)excludedActivityTypesForPreviewController:(id)arg0 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(void)_cleanup;
-(void)_setupQuickLookWithURL:(id)arg0 activityItems:(id)arg1 isPreview:(BOOL)arg2 ;
-(void)documentPicker:(id)arg0 didPickDocumentsAtURLs:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;
-(void)previewControllerDidDismiss:(id)arg0 ;


@end


#endif