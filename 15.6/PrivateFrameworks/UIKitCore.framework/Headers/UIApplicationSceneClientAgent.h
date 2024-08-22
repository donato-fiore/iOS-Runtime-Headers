// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAPPLICATIONSCENECLIENTAGENT_H
#define UIAPPLICATIONSCENECLIENTAGENT_H

@class FBSBasicSceneClientAgent;



@interface UIApplicationSceneClientAgent : FBSBasicSceneClientAgent



-(id)init;
-(void)dealloc;
-(void)scene:(id)arg0 didInitializeWithEvent:(id)arg1 completion:(id)arg2 ;
-(void)scene:(id)arg0 handleEvent:(id)arg1 withCompletion:(id)arg2 ;
-(void)scene:(id)arg0 willInvalidateWithEvent:(id)arg1 completion:(id)arg2 ;


@end


#endif