// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDOCUMENTPICKERREMOTEVIEWCONTROLLER_H
#define _UIDOCUMENTPICKERREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, UIViewController<_UIDocumentPickerRemoteViewControllerContaining>;
@protocol _UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating;



@interface _UIDocumentPickerRemoteViewController : UIRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (weak, nonatomic) UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *publicController; // ivar: _publicController
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)_didSelectPicker;
-(void)_didSelectURLBookmark:(id)arg0 ;
-(void)_didSelectURLWrapper:(id)arg0 ;
-(void)_dismissViewController;
-(void)_dismissWithOption:(id)arg0 ;
-(void)_stitchFileCreationAtURL:(id)arg0 ;
-(void)_tintColorDidChangeToColor:(id)arg0 ;
-(void)invalidate;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif