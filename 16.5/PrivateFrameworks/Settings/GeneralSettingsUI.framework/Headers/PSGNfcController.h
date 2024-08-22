// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGNFCCONTROLLER_H
#define PSGNFCCONTROLLER_H

@class PSListController, NSString, PSSpecifier;
@protocol NFHardwareEventListener;



@interface PSGNfcController : PSListController <NFHardwareEventListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int hwState; // ivar: _hwState
@property (nonatomic) BOOL restrictedFeature; // ivar: _restrictedFeature
@property (readonly) Class superclass;


-(BOOL)_setNfcEnable:(BOOL)arg0 ;
-(id)nfcEnable;
-(id)specifiers;
-(void)_disableNfcRadio;
-(void)_enableNfcRadio;
-(void)_refreshFooterForSpecifier:(id)arg0 ;
-(void)_refreshNfcRadioStateSetting;
-(void)_updateHwStateChange;
-(void)dealloc;
-(void)didChangeRadioState:(BOOL)arg0 ;
-(void)hardwareStateDidChange;
-(void)setNfcEnable:(id)arg0 specifier:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif