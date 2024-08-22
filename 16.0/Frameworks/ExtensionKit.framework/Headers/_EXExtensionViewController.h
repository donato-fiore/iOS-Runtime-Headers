// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXEXTENSIONVIEWCONTROLLER_H
#define _EXEXTENSIONVIEWCONTROLLER_H

@class UIViewController;
@protocol _EXConnectionHandler;


#import "_EXViewControllerSceneConfiguration.h"

@interface _EXExtensionViewController : UIViewController <_EXConnectionHandler>



@property (readonly) UIViewController *contentViewController; // ivar: _contentViewController
@property (retain) _EXViewControllerSceneConfiguration *sceneConfiguration; // ivar: _sceneConfiguration


-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)makeContentViewController;
-(void)loadView;


@end


#endif