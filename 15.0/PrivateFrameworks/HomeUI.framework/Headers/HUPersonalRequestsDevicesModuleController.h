// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPERSONALREQUESTSDEVICESMODULECONTROLLER_H
#define HUPERSONALREQUESTSDEVICESMODULECONTROLLER_H

@class NSString;
@protocol HUSwitchCellDelegate, UITextViewDelegate;


#import "HUItemTableModuleController.h"
#import "HUPersonalRequestsDevicesItemModule.h"

@interface HUPersonalRequestsDevicesModuleController : HUItemTableModuleController <HUSwitchCellDelegate, UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUPersonalRequestsDevicesItemModule *module;
@property (readonly) Class superclass;


-(BOOL)_isCurrentDeviceCandidateForLocationDevice;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(Class)cellClassForItem:(id)arg0 ;
-(id)_preflightEnablingPersonalRequests;
-(id)_promptToChangeLocationDeviceFromCurrentDevice:(id)arg0 ;
-(id)_promptToChangeLocationDeviceIfNecessary;
-(id)_promptToEnableSiriIfNecessary;
-(id)initWithModule:(id)arg0 ;
-(id)initWithModule:(id)arg0 host:(id)arg1 ;
-(id)setPersonalRequestsDevices:(id)arg0 ;
-(id)turnOnPersonalRequestsForAllMultiUserCapableDevices;
-(void)_presentAlert:(id)arg0 ;
-(void)_presentConfirmationForEnablingPersonalRequestsForItem:(id)arg0 cell:(id)arg1 didTurnOn:(BOOL)arg2 showLanguageVariant:(BOOL)arg3 ;
-(void)_togglePersonalRequestStateForItem:(id)arg0 ;
-(void)_turnOnPersonalRequestForItem:(id)arg0 cell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif