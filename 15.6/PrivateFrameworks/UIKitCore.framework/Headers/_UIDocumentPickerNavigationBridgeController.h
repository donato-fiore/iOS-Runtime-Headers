// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERNAVIGATIONBRIDGECONTROLLER_H
#define _UIDOCUMENTPICKERNAVIGATIONBRIDGECONTROLLER_H

@class NSString;
@protocol _UIDocumentPickerExtensionViewController;


#import "UINavigationController.h"

@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController>

 {
    BOOL _hasSetInitialNavigationItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)hostingViewController;
-(id)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(id)popToViewController:(id)arg0 animated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(void)_documentPickerDidDismiss;
-(void)_doneButton:(id)arg0 ;
-(void)_locationsMenu:(id)arg0 ;
-(void)_prepareWithExtensionInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)_setPickableTypes:(id)arg0 ;
-(void)_setPickerMode:(NSUInteger)arg0 ;
-(void)_setTintColor:(id)arg0 ;
-(void)_setUploadURLWrapper:(id)arg0 ;
-(void)_updateNavigationItem;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif