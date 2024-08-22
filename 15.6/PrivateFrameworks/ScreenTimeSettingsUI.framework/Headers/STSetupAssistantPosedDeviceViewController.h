// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSETUPASSISTANTPOSEDDEVICEVIEWCONTROLLER_H
#define STSETUPASSISTANTPOSEDDEVICEVIEWCONTROLLER_H

@class UIViewController, UIImageView;



@interface STSetupAssistantPosedDeviceViewController : UIViewController

@property (readonly) NSInteger deviceSize; // ivar: _deviceSize
@property (retain) UIImageView *deviceWithScreenImageView; // ivar: _deviceWithScreenImageView
@property (readonly) BOOL isiPad; // ivar: _isiPad


-(BOOL)_isRTL;
-(id)_deviceWithScreenImage;
-(id)_setupGenericImage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_stSetupAssistantPosedDeviceViewControllerCommonInit;
-(void)viewDidLoad;


@end


#endif