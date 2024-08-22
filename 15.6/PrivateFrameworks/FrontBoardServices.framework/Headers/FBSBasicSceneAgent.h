// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSBASICSCENEAGENT_H
#define FBSBASICSCENEAGENT_H

@class NSString;
@protocol FBSSceneAgent, BSDescriptionProviding, FBSSceneHandle;

#import <Foundation/Foundation.h>


@interface FBSBasicSceneAgent : NSObject <FBSSceneAgent, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<FBSSceneHandle> *scene; // ivar: _scene
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_configureWithScene:(id)arg0 ;
-(void)didReceiveMessage:(id)arg0 fromCounterpartAgent:(id)arg1 withResponseSender:(id)arg2 ;
-(void)scene:(id)arg0 reviewEvent:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif