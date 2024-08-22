// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCREENROUTEPICKERREMOTEVIEWCONTROLLER_H
#define _UISCREENROUTEPICKERREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, NSExtension;
@protocol _UIScreenRoutePickerRemoteViewControllerHost, NSCopying><NSObject;


#import "_UIScreenRoutePickerViewController.h"

@interface _UIScreenRoutePickerRemoteViewController : UIRemoteViewController <_UIScreenRoutePickerRemoteViewControllerHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (copy, nonatomic) NSObject<NSCopying><NSObject> *extensionRequestIdentifier; // ivar: _extensionRequestIdentifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) _UIScreenRoutePickerViewController *publicController; // ivar: _publicController
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)_dismissViewController;
-(void)invalidate;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif