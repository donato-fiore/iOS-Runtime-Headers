// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXEXTENSIONVIEWCONTROLLER_H
#define _EXEXTENSIONVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol _EXConnectionHandler, _EXSceneConfigurationProviding;



@interface _EXExtensionViewController : UIViewController <_EXConnectionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<_EXSceneConfigurationProviding> *sceneConfiguration; // ivar: _sceneConfiguration
@property (readonly) Class superclass;


-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)makeContentViewController;


@end


#endif