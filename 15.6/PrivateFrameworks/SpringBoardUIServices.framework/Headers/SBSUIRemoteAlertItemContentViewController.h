// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSUIREMOTEALERTITEMCONTENTVIEWCONTROLLER_H
#define SBSUIREMOTEALERTITEMCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol SBSUIRemoteAlertItemContentServiceInterface;



@interface SBSUIRemoteAlertItemContentViewController : UIViewController <SBSUIRemoteAlertItemContentServiceInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)getPreferredContentSizeWithReplyBlock:(id)arg0 ;
-(void)invalidatePreferredContentSize;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif