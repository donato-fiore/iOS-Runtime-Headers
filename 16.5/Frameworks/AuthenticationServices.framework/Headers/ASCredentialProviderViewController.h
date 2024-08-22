// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCREDENTIALPROVIDERVIEWCONTROLLER_H
#define ASCREDENTIALPROVIDERVIEWCONTROLLER_H

@class UIViewController;


#import "ASCredentialProviderExtensionContext.h"

@interface ASCredentialProviderViewController : UIViewController

@property (readonly, nonatomic) ASCredentialProviderExtensionContext *extensionContext;


-(void)prepareCredentialListForServiceIdentifiers:(id)arg0 ;
-(void)prepareInterfaceForExtensionConfiguration;
-(void)prepareInterfaceToProvideCredentialForIdentity:(id)arg0 ;
-(void)provideCredentialWithoutUserInteractionForIdentity:(id)arg0 ;


@end


#endif