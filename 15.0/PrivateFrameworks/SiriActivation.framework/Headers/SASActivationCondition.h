// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASACTIVATIONCONDITION_H
#define SASACTIVATIONCONDITION_H

@class NSDictionary, AFPreferences;

#import <Foundation/Foundation.h>

#import "SASSiriPocketStateManager.h"
#import "SASActivationRequest.h"
#import "SASSystemState.h"

@interface SASActivationCondition : NSObject

@property (retain, nonatomic) NSDictionary *analyticsContext; // ivar: _analyticsContext
@property (nonatomic) BOOL buttonTriggerStateActive; // ivar: _buttonTriggerStateActive
@property (retain, nonatomic) SASSiriPocketStateManager *pocketStateManager; // ivar: _pocketStateManager
@property (retain, nonatomic) AFPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) SASActivationRequest *request; // ivar: _request
@property (nonatomic) NSInteger requestState; // ivar: _requestState
@property (retain, nonatomic) SASSystemState *systemState; // ivar: _systemState




@end


#endif