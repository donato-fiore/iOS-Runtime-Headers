// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNQUICKLOOK_H
#define LNQUICKLOOK_H

@class NSString, NSMutableDictionary, NSArray, QLPreviewController, UIViewController;
@protocol QLPreviewControllerDataSource, QLPreviewControllerPrivateDelegate;

#import <Foundation/Foundation.h>


@interface LNQuickLook : NSObject <QLPreviewControllerDataSource, QLPreviewControllerPrivateDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *editedPreviewItems; // ivar: _editedPreviewItems
@property (nonatomic) NSInteger editingMode; // ivar: _editingMode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) QLPreviewController *previewController; // ivar: _previewController
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewControllerForPresenting; // ivar: _viewControllerForPresenting


-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(NSInteger)previewController:(id)arg0 editingModeForPreviewItem:(id)arg1 ;
-(id)editedItems;
-(id)initWithItems:(id)arg0 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)presentOverViewController:(id)arg0 completionHandler:(id)arg1 ;
-(void)previewController:(id)arg0 didSaveEditedCopyOfPreviewItem:(id)arg1 atURL:(id)arg2 ;
-(void)previewControllerDidDismiss:(id)arg0 ;


@end


#endif