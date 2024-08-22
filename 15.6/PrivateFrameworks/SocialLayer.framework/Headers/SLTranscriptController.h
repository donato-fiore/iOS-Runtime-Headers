// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SLTRANSCRIPTCONTROLLER_H
#define SLTRANSCRIPTCONTROLLER_H

@class UIViewController, _UIRemoteViewController, NSString, NSExtension, NSUUID;
@protocol _UIRemoteViewControllerContaining;



@interface SLTranscriptController : UIViewController <_UIRemoteViewControllerContaining>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (retain, nonatomic) NSUUID *requestUUID; // ivar: _requestUUID
@property (readonly) Class superclass;


-(BOOL)deviceIsiPad;
-(void)dealloc;
-(void)presentTranscriptForMessageGUID:(id)arg0 attachmentGUID:(id)arg1 presentingViewController:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif