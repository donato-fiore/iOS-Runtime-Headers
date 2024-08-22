// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDEVICEPICKINGNAVIGATIONCONTROLLER_H
#define FBKDEVICEPICKINGNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol FBKDeviceChoiceDelegate;



@interface FBKDevicePickingNavigationController : UINavigationController <FBKDeviceChoiceDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDeviceChoices:(id)arg0 allowsMultipleSelection:(BOOL)arg1 completion:(id)arg2 ;
-(void)deviceChoicesController:(id)arg0 didChooseDevices:(id)arg1 ;
-(void)deviceChoicesControllerDidCancelWithController:(id)arg0 ;
-(void)pairedDevicesDidChangeWithAddedDevice:(id)arg0 removed:(id)arg1 ;
-(void)pairingViewDidCancel;
-(void)pairingViewDidClose;


@end


#endif