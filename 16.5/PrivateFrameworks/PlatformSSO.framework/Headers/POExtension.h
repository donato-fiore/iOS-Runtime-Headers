// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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


-(BOOL)canPerformRegistration;
-(id)initWithExtensionBundleIdentifier:(id)arg0 ;
-(void)authorization:(id)arg0 didCompleteWithCredential:(id)arg1 error:(id)arg2 ;
-(void)beginDeviceRegistrationUsingOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)beginUserRegistrationUsingUserName:(id)arg0 authenticationMethod:(int)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)presentAuthorizationViewControllerWithHints:(id)arg0 completion:(id)arg1 ;
-(void)registrationDidCompleteWithCompletion:(id)arg0 ;
-(void)unload;


@end


#endif