// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFQUICKLOOKACTIONUIKITUSERINTERFACE_H
#define WFQUICKLOOKACTIONUIKITUSERINTERFACE_H

@class WFActionUserInterface, WFContentCollection, NSString, NSError, QLPreviewController;
@protocol QLPreviewControllerPrivateDelegate, WFQuickLookActionUserInterface;



@interface WFQuickLookActionUIKitUserInterface : WFActionUserInterface <QLPreviewControllerPrivateDelegate, WFQuickLookActionUserInterface>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) WFContentCollection *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *exitError; // ivar: _exitError
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) QLPreviewController *previewController; // ivar: _previewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *userInterfaceType;


-(BOOL)previewController:(id)arg0 canShareItem:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)previewControllerDidDismiss:(id)arg0 ;
-(void)showWithItems:(id)arg0 fullScreen:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif