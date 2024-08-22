// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDPSIMPLEMODELPARAMETERMANAGER_H
#define _CDPSIMPLEMODELPARAMETERMANAGER_H

@class NSString;
@protocol _CDSocialInteractionAdvisorTuningDelegate;

#import <Foundation/Foundation.h>

#import "_CDPSimpleModelParameterManagerAccountState.h"
#import "_CDPModelTuningState.h"

@interface _CDPSimpleModelParameterManager : NSObject <_CDSocialInteractionAdvisorTuningDelegate>

 {
    _CDPSimpleModelParameterManagerAccountState *_accountState;
    NSString *_accountStateKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _CDPModelTuningState *lastTuningState;
@property (readonly) Class superclass;


-(id)accountIdentifierForSettings:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)getLambda:(*float)arg0 w0:(*float)arg1 threshold:(*float)arg2 ;
-(void)loadAccountState;
-(void)modelTuner:(id)arg0 heartBeatWithlambda:(float)arg1 w0:(float)arg2 threshold:(float)arg3 score:(float)arg4 progress:(float)arg5 ;
-(void)modelTunerWillResume:(id)arg0 ;
-(void)modelTunerWillStop:(id)arg0 ;
-(void)saveAccountState;


@end


#endif