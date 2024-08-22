// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFACECONTACTEXPECTATIONMANAGER_H
#define SBFACECONTACTEXPECTATIONMANAGER_H


#import <Foundation/Foundation.h>

#import "SBSceneManager.h"
#import "SBProximitySensorManager.h"

@interface SBFaceContactExpectationManager : NSObject {
    SBSceneManager *_sceneManager;
    SBProximitySensorManager *_proximitySensorManager;
    BOOL _faceExpected;
}




-(BOOL)_sceneHasBypassEntitlement:(id)arg0 ;
-(id)_frontmostScenesExpectingFaceContactAndGetShouldDisableGracePeriod:(*BOOL)arg0 ;
-(id)_proximitySensorClientID;
-(id)description;
-(id)initWithSceneManager:(id)arg0 ;
-(id)initWithSceneManager:(id)arg0 proximitySensorManager:(id)arg1 ;
-(void)updateFaceContactExpectation;


@end


#endif