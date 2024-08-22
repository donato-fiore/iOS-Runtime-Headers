// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDOCUMENTPICKEREXTENSIONVIEWCONTROLLER_H
#define UIDOCUMENTPICKEREXTENSIONVIEWCONTROLLER_H

@class NSString, NSURL, NSArray;
@protocol _UIDocumentPickerExtensionViewController;


#import "UIViewController.h"

@interface UIDocumentPickerExtensionViewController : UIViewController <_UIDocumentPickerExtensionViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, setter=_setPickerMode:) NSUInteger documentPickerMode; // ivar: _documentPickerMode
@property (copy, nonatomic, setter=_setDocumentStorageURL:) NSURL *documentStorageURL; // ivar: _documentStorageURL
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=_setUploadURL:) NSURL *originalURL; // ivar: _originalURL
@property (copy, nonatomic, setter=_setProviderIdentifier:) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic, setter=_setPickableTypes:) NSArray *validTypes; // ivar: _validTypes


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)_documentPickerDidDismiss;
-(void)_prepareWithExtensionInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)_setTintColor:(id)arg0 ;
-(void)_setUploadURLWrapper:(id)arg0 ;
-(void)dismissGrantingAccessToURL:(id)arg0 ;
-(void)prepareForDocumentSelectionInMode:(NSUInteger)arg0 ;
-(void)prepareForPresentationInMode:(NSUInteger)arg0 ;


@end


#endif