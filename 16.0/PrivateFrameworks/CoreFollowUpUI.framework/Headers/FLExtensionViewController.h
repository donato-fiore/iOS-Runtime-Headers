// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLEXTENSIONVIEWCONTROLLER_H
#define FLEXTENSIONVIEWCONTROLLER_H

@class UIViewController, NSExtensionContext, NSString;
@protocol NSExtensionRequestHandling, FLExtensionRemoteContextInterface;



@interface FLExtensionViewController : UIViewController <NSExtensionRequestHandling, FLExtensionRemoteContextInterface>

 {
    NSExtensionContext *_context;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)hostInterface;
-(id)syncHostInterface;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)finishProcessing;
-(void)finishProcessingWithUserInfo:(id)arg0 ;
-(void)followUpPerformUpdateWithCompletionHandler:(id)arg0 ;
-(void)processFollowUpItem:(id)arg0 selectedAction:(id)arg1 completion:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif