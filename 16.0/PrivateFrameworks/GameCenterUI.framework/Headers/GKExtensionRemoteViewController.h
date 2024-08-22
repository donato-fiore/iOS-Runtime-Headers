// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKEXTENSIONREMOTEVIEWCONTROLLER_H
#define GKEXTENSIONREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, NSExtension, GKGame;
@protocol GKExtensionProtocol, GKExtensionHostProtocol;



@interface GKExtensionRemoteViewController : UIRemoteViewController <GKExtensionProtocol, GKExtensionHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *requestIdentifier; // ivar: _requestIdentifier
@property (readonly) Class superclass;


+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)initialItemsForExtension;
+(void)setupCallbackBlocksForExtension:(id)arg0 withParentViewController:(id)arg1 ;
+(void)viewControllerForExtension:(id)arg0 inputItems:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)_desiredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(void)cancelExtension;
-(void)dealloc;
-(void)hostApp:(id)arg0 grantingAccessExtensionSandbox:(id)arg1 replyWithEndpoint:(id)arg2 ;
-(void)messageFromClient:(id)arg0 ;
-(void)messageFromExtension:(id)arg0 ;
-(void)sendMessageToExtension:(id)arg0 ;
-(void)setInitialState:(id)arg0 withReply:(id)arg1 ;
-(void)tearDownExtensionWithReply:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif