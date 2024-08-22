// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILCOMPOSEREMOTEVIEWCONTROLLER_H
#define MFMAILCOMPOSEREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol MFMailComposeRemoteHost, MFMailComposeRemoteViewControllerDelegate;



@interface MFMailComposeRemoteViewController : UIRemoteViewController <MFMailComposeRemoteHost>



@property (weak, nonatomic) NSObject<MFMailComposeRemoteViewControllerDelegate> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(void)bodyFinishedDrawing;
-(void)serviceCompositionFinishedWithResult:(NSInteger)arg0 error:(id)arg1 ;
-(void)serviceCompositionRequestsSendWithBody:(id)arg0 recipients:(id)arg1 completion:(id)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif