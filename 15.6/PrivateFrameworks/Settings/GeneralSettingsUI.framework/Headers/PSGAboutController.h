// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSGABOUTCONTROLLER_H
#define PSGABOUTCONTROLLER_H

@class PSListController, NSString;
@protocol PSListControllerURLHandler;



@interface PSGAboutController : PSListController <PSListControllerURLHandler>

 {
    BOOL _firstViewDidAppear;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) id *effectiveSettingsChangedNotificationObserver; // ivar: _effectiveSettingsChangedNotificationObserver
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)deviceName:(id)arg0 ;
-(id)init;
-(void)handleResourceDictionaryWhenAlreadyPresented:(id)arg0 ;
-(void)setDeviceName:(id)arg0 specifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateDeviceNameSpecifierIfNeeded;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(void)willUnlock;


@end


#endif