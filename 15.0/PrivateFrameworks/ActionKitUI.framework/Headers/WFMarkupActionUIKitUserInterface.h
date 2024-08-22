// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMARKUPACTIONUIKITUSERINTERFACE_H
#define WFMARKUPACTIONUIKITUSERINTERFACE_H

@class WFActionUserInterface, NSString, NSMutableDictionary, NSArray;
@protocol QLPreviewControllerDataSource, QLPreviewControllerDelegate, WFMarkupActionUserInterface;



@interface WFMarkupActionUIKitUserInterface : WFActionUserInterface <QLPreviewControllerDataSource, QLPreviewControllerDelegate, WFMarkupActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *editedPreviewItems; // ivar: _editedPreviewItems
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *previewItems; // ivar: _previewItems
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(NSInteger)previewController:(id)arg0 editingModeForPreviewItem:(id)arg1 ;
-(id)editedItems;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)previewController:(id)arg0 didSaveEditedCopyOfPreviewItem:(id)arg1 atURL:(id)arg2 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)showWithPreviewItems:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif