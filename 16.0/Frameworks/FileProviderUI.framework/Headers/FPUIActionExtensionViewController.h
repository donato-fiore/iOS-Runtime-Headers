// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPUIACTIONEXTENSIONVIEWCONTROLLER_H
#define FPUIACTIONEXTENSIONVIEWCONTROLLER_H

@class UIViewController;
@protocol FPUIActionExtensionViewControllerProtocol;


#import "FPUIActionExtensionContext.h"

@interface FPUIActionExtensionViewController : UIViewController <FPUIActionExtensionViewControllerProtocol>



@property (readonly, nonatomic, getter=_browserUserInterfaceStyle) NSUInteger browserUserInterfaceStyle; // ivar: _browserUserInterfaceStyle
@property (readonly, nonatomic) FPUIActionExtensionContext *extensionContext;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)_extensionImplementsSelector:(SEL)arg0 ;
-(void)_configureWithDomainIdentifier:(id)arg0 ;
-(void)_prepareAuthenticationUsingServerURL:(id)arg0 ;
-(void)_prepareAuthenticationUsingURL:(id)arg0 ;
-(void)_prepareForActionWithIdentifier:(id)arg0 items:(id)arg1 ;
-(void)_prepareForError:(id)arg0 ;
-(void)_prepareForServerCreation;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)prepareAuthenticationUsingServerURL:(id)arg0 ;
-(void)prepareAuthenticationUsingURL:(id)arg0 ;
-(void)prepareForActionWithIdentifier:(id)arg0 itemIdentifiers:(id)arg1 ;
-(void)prepareForAuthentication;
-(void)prepareForError:(id)arg0 ;
-(void)prepareForServerCreation;


@end


#endif