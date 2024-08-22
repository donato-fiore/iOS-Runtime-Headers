// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXPHONENUMBERACTIONACTIVITYPROVIDER_H
#define SXPHONENUMBERACTIONACTIVITYPROVIDER_H

@class NSString;
@protocol SXActionActivityProvider, SXContactsPresenter, SXDeviceCapabilities, SXHost, SXMessagePresenter;

#import <Foundation/Foundation.h>


@interface SXPhoneNumberActionActivityProvider : NSObject <SXActionActivityProvider>



@property (readonly, nonatomic) NSObject<SXContactsPresenter> *contactsPresenter; // ivar: _contactsPresenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXDeviceCapabilities> *deviceCapabilities; // ivar: _deviceCapabilities
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXHost> *host; // ivar: _host
@property (readonly, nonatomic) NSObject<SXMessagePresenter> *messagePresenter; // ivar: _messagePresenter
@property (readonly) Class superclass;


-(id)activityGroupForAction:(id)arg0 ;
-(id)initWithHost:(id)arg0 contactsPresenter:(id)arg1 messagePresenter:(id)arg2 deviceCapabilities:(id)arg3 ;
-(void)addToContacts:(id)arg0 ;
-(void)call:(id)arg0 showDialog:(BOOL)arg1 ;
-(void)copy:(id)arg0 ;
-(void)faceTime:(id)arg0 ;
-(void)message:(id)arg0 ;


@end


#endif