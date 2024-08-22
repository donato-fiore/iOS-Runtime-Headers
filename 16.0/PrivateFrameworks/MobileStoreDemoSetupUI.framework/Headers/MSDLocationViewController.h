// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDLOCATIONVIEWCONTROLLER_H
#define MSDLOCATIONVIEWCONTROLLER_H

@class OBWelcomeController, NSString, CLLocationManager;
@protocol OBSetupAssistantSupport, CLLocationManagerDelegate;



@interface MSDLocationViewController : OBWelcomeController <OBSetupAssistantSupport, CLLocationManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLLocationManager *locationManager; // ivar: _locationManager
@property (readonly) Class superclass;


-(id)init;
-(void)_locationButtonTapped:(id)arg0 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif