// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSETTINGSMSRELAYCONTROLLER_H
#define CKSETTINGSMSRELAYCONTROLLER_H

@class PSListController, NSString, IDSService;
@protocol IDSServiceDelegate;



@interface CKSettingSMSRelayController : PSListController <IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSService *relayService; // ivar: _relayService
@property (readonly) Class superclass;


+(BOOL)deviceIsAuthorized:(id)arg0 ;
+(BOOL)shouldShowSMSRelaySettings;
+(NSUInteger)numberOfActiveDevices;
+(id)authorizedSMSRelayDevices;
-(id)getDeviceActive:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)setDeviceActive:(id)arg0 specifier:(id)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif