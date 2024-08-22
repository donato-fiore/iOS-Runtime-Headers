// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CABTMIDILOCALPERIPHERALVIEWCONTROLLER_H
#define CABTMIDILOCALPERIPHERALVIEWCONTROLLER_H

@class UIViewController, NSString, UITextField, UIActivityIndicatorView, NSTimer;
@protocol UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate;


#import "AMSBTLEAdvertisementManager.h"

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>

 {
    AMSBTLEAdvertisementManager *advertisingManager;
    NSString *statusString;
    UITextField *serviceNameField;
    BOOL advertising;
    BOOL isErrorMessage;
    UIActivityIndicatorView *indicator;
    NSString *theServiceName;
    NSInteger advertiseTimeout;
    NSInteger fullRefreshCounter;
    NSTimer *advertiseTimer;
    NSTimer *messageTimer;
    BOOL didCleanup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(BOOL)advertiseServiceWithName:(id)arg0 completionBlock:(id)arg1 error:(unk)arg2  ;
// -(BOOL)changeServiceNameTo:(id)arg0 completionBlock:(id)arg1 error:(unk)arg2  ;
-(BOOL)disconnectLocalPeripheral;
// -(BOOL)stopAdvertisingServiceWithCompletionBlock:(id)arg0 error:(unk)arg1  ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)advertisedServiceName;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)statusString;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)title;
-(void)activateController:(id)arg0 ;
-(void)advertiseServiceSwitchToggled:(id)arg0 ;
-(void)advertiseTimerFired:(id)arg0 ;
-(void)cleanup;
-(void)deactivateController:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)messageTimerFired:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setStatusString:(id)arg0 animateIndicator:(BOOL)arg1 isError:(BOOL)arg2 ;
-(void)stopTimers;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)textFieldDone:(id)arg0 ;
-(void)updateAdvertiseUI;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif