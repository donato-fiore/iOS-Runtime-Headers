// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDOCUMENTPICKEREXTENSIONREMOTEVIEWCONTROLLER_H
#define _UIDOCUMENTPICKEREXTENSIONREMOTEVIEWCONTROLLER_H

@class UIDocumentPickerRemoteViewController, NSString;
@protocol _UIDocumentPickerViewControllerExtensionHost;



@interface _UIDocumentPickerExtensionRemoteViewController : UIDocumentPickerRemoteViewController <_UIDocumentPickerViewControllerExtensionHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)_displayLocationMenu:(struct CGRect )arg0 ;
-(void)_doneButtonPressed;


@end


#endif