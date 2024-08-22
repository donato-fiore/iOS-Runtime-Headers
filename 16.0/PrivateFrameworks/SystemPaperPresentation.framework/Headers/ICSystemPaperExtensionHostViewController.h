// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSYSTEMPAPEREXTENSIONHOSTVIEWCONTROLLER_H
#define ICSYSTEMPAPEREXTENSIONHOSTVIEWCONTROLLER_H

@class EXHostViewController, _UIRemoteViewController, NSXPCConnection, NSString, NSData;
@protocol _EXHostViewControllerDelegate, ICSystemPaperExtensionHost, _UIRemoteViewControllerContaining, ICSystemPaperPresentationDelegate;



@interface ICSystemPaperExtensionHostViewController : EXHostViewController <_EXHostViewControllerDelegate, ICSystemPaperExtensionHost, _UIRemoteViewControllerContaining>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didFinish; // ivar: _didFinish
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<ICSystemPaperPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (copy, nonatomic) id *startHostingBlock; // ivar: _startHostingBlock
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *userActivityData; // ivar: _userActivityData


-(id)initWithConfiguration:(id)arg0 ;
-(void)_finishAndNotifyDelegateWithError:(id)arg0 ;
-(void)addChildViewController:(id)arg0 ;
-(void)dismissViewControllerCancelled:(BOOL)arg0 ;
-(void)hostViewControllerDidActivate:(id)arg0 ;
-(void)hostViewControllerWillDeactivate:(id)arg0 error:(id)arg1 ;
-(void)openURL:(id)arg0 completion:(id)arg1 ;
-(void)teardown;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif