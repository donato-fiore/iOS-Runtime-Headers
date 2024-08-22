// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKREMOTEENGAGEMENTREMOTEVIEWCONTROLLER_H
#define SKREMOTEENGAGEMENTREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController;
@protocol SKEngagementPresenterProtocol;



@interface SKRemoteEngagementRemoteViewController : UIRemoteViewController

@property (weak, nonatomic) NSObject<SKEngagementPresenterProtocol> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)engagementTaskDidFinishWithResult:(id)arg0 resultData:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)preferredContentSizeDidChange:(struct CGSize )arg0 ;


@end


#endif