// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKEXTENSIONHOSTVIEWCONTROLLER_H
#define GKEXTENSIONHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, NSString, UIViewController<GKSocialGamingHostInterface>, NSMapTable;
@protocol GKSocialGamingHostInterface, GKSocialGamingExtensionInterface, GKExtensionHostViewControllerDelegate;



@interface GKExtensionHostViewController : UIRemoteViewController <GKSocialGamingHostInterface, GKSocialGamingExtensionInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKExtensionHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController<GKSocialGamingHostInterface> *hostViewController; // ivar: _hostViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMapTable *targetForSelector; // ivar: _targetForSelector


-(id)methodSignatureForProtocol:(id)arg0 selector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)addTarget:(id)arg0 forProtocol:(id)arg1 toLookup:(id)arg2 ;
-(void)buildLookupForHost:(id)arg0 ;
-(void)extensionWillFinish;
-(void)finishExtension;
-(void)forwardInvocation:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif