// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSSCENEHOSTREGISTRATION_H
#define BKSSCENEHOSTREGISTRATION_H

@class NSString;
@protocol BSDescriptionStreamable, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BKSTouchEventService.h"
#import "BKSSceneHostSettings.h"

@interface BKSSceneHostRegistration : NSObject <BSDescriptionStreamable, BSInvalidatable>

 {
    unsigned int _contextID;
    BKSTouchEventService *_service;
    BKSSceneHostSettings *_sceneHostSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)invalidate;
-(void)updateSettings:(id)arg0 ;


@end


#endif