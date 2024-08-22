// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXNSEXTENSIONUISHIMSCENE_H
#define _EXNSEXTENSIONUISHIMSCENE_H

@class EXNSExtensionShimScene, NSString, UIViewController;
@protocol _EXViewControllerScene;



@interface _EXNSExtensionUIShimScene : EXNSExtensionShimScene <_EXViewControllerScene>



@property (readonly, copy) NSString *debugDescription;
@property (retain) id *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) UIViewController *viewController; // ivar: viewController


-(BOOL)shouldAcceptConnection:(id)arg0 ;
-(id)makePrincipalObjectForExtension:(id)arg0 ;
-(void)connectToSession:(id)arg0 ;


@end


#endif