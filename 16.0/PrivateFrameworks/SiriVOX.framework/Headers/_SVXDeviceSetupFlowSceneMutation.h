// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXDEVICESETUPFLOWSCENEMUTATION_H
#define _SVXDEVICESETUPFLOWSCENEMUTATION_H

@class NSString, NSArray;
@protocol SVXDeviceSetupFlowSceneMutating;

#import <Foundation/Foundation.h>

#import "SVXDeviceSetupFlowScene.h"
#import "SVXDeviceSetupFlowSiriCapabilitiesHint.h"

@interface _SVXDeviceSetupFlowSceneMutation : NSObject <SVXDeviceSetupFlowSceneMutating>

 {
    SVXDeviceSetupFlowScene *_baseModel;
    NSInteger _sceneID;
    NSString *_speakableText;
    NSArray *_displayKeyFrames;
    SVXDeviceSetupFlowSiriCapabilitiesHint *_siriCapabilitiesHint;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setDisplayKeyFrames:(id)arg0 ;
-(void)setSceneID:(NSInteger)arg0 ;
-(void)setSiriCapabilitiesHint:(id)arg0 ;
-(void)setSpeakableText:(id)arg0 ;


@end


#endif