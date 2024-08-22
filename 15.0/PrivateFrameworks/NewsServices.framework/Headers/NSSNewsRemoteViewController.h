// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSNEWSREMOTEVIEWCONTROLLER_H
#define NSSNEWSREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol NAVNewsArticleViewerRemoteProviderType;



@interface NSSNewsRemoteViewController : UIRemoteViewController <NAVNewsArticleViewerRemoteProviderType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)articleViewerRemoteProviderShouldDismissAnimated:(BOOL)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif