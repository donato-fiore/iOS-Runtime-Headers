// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSBASICSCENECLIENTAGENT_H
#define FBSBASICSCENECLIENTAGENT_H

@class NSString;
@protocol FBSSceneClientAgent;


#import "FBSBasicSceneAgent.h"

@interface FBSBasicSceneClientAgent : FBSBasicSceneAgent <FBSSceneClientAgent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)scene:(id)arg0 didInitializeWithEvent:(id)arg1 completion:(id)arg2 ;
-(void)scene:(id)arg0 handleEvent:(id)arg1 withCompletion:(id)arg2 ;
-(void)scene:(id)arg0 willInvalidateWithEvent:(id)arg1 completion:(id)arg2 ;


@end


#endif