// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKSTOREEXTENSION_H
#define SKSTOREEXTENSION_H

@class UIViewController, NSString;
@protocol SKStoreExtensionServiceInterface;



@interface SKStoreExtension : UIViewController <SKStoreExtensionServiceInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(id)clientInterface;
+(id)serviceInterface;
-(BOOL)shouldOpenURL:(id)arg0 sourceApplication:(id)arg1 annotation:(id)arg2 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)openURL:(id)arg0 sourceApplication:(id)arg1 annotation:(id)arg2 ;
-(void)presentRequestedViewControllerWithIdentifier:(id)arg0 ;
-(void)setRequestedIdentifier:(id)arg0 ;
-(void)setTabIdentifier:(id)arg0 ;
-(void)setupWithParameters:(id)arg0 ;


@end


#endif