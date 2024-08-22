// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POEXTENSION_H
#define POEXTENSION_H

@class SOExtension, SORemoteExtensionViewController, NSString;
@protocol SOExtensionDelegate, POExtensionRegistrationProtocol, POExtensionDelegate;

#import <Foundation/Foundation.h>


@interface POExtension : NSObject <SOExtensionDelegate, POExtensionRegistrationProtocol>

 {
    SOExtension *_extension;
    SORemoteExtensionViewController *_extensionViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<POExtensionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithExtensionBundleIdentifier:(id)arg0 ;
-(void)authorizationDidCompleteWithCredential:(id)arg0 error:(id)arg1 ;
-(void)beginDeviceRegistrationUsingOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)beginUserRegistrationUsingUserName:(id)arg0 authenticationMethod:(int)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)presentAuthorizationViewControllerWithHints:(id)arg0 completion:(id)arg1 ;
-(void)registrationDidComplete;
-(void)unload;


@end


#endif