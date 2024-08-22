// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDWELCOMEVIEWCONTROLLER_H
#define MSDWELCOMEVIEWCONTROLLER_H

@class OBSetupAssistantSpinnerController, NSString;
@protocol OBSetupAssistantSupport;


#import "MSDSetupUIController.h"

@interface MSDWelcomeViewController : OBSetupAssistantSpinnerController <OBSetupAssistantSupport>



@property (nonatomic) NSUInteger activeNetworkInterface; // ivar: _activeNetworkInterface
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) MSDSetupUIController *controller; // ivar: _controller
@property (retain, nonatomic) NSString *currentSSID; // ivar: _currentSSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)needsToRun:(id)arg0 ;
-(BOOL)_bothWifiAndCellularActive;
-(id)init;
-(void)_checkIn;
-(void)_quit;
-(void)_showCheckInErrorAlert;
-(void)_showNetworkInterfaceSelectionAlert;
-(void)_showNextView;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif