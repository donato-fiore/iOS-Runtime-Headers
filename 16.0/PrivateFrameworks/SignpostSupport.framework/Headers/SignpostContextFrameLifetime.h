// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTCONTEXTFRAMELIFETIME_H
#define SIGNPOSTCONTEXTFRAMELIFETIME_H

@protocol SignpostCARenderServerFrameMetadata, SignpostSupportTimeInterval;


#import "SignpostAnimationSubInterval.h"
#import "SignpostContextInfo.h"
#import "SignpostFrameLifetimeInterval.h"

@interface SignpostContextFrameLifetime : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>



@property (readonly, nonatomic) NSObject<SignpostSupportTimeInterval> *contextGlitchInterval;
@property (readonly, nonatomic) SignpostContextInfo *contextInfo; // ivar: _contextInfo
@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) SignpostFrameLifetimeInterval *parentFrameLifetime; // ivar: _parentFrameLifetime


-(id)initWithFrameLifetime:(id)arg0 contextInfo:(id)arg1 ;


@end


#endif