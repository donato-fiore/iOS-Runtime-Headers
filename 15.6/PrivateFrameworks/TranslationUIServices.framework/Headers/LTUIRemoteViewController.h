// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LTUIREMOTEVIEWCONTROLLER_H
#define LTUIREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol LTUIViewServiceExtensionHostProtocol;



@interface LTUIRemoteViewController : UIRemoteViewController <LTUIViewServiceExtensionHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LTUIViewServiceExtensionHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)dismiss;
-(void)expandSheet;
-(void)finishWithTranslation:(id)arg0 ;
-(void)remoteIsReady;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif