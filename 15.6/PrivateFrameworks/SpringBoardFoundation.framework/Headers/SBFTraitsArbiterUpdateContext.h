// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFTRAITSARBITERUPDATECONTEXT_H
#define SBFTRAITSARBITERUPDATECONTEXT_H

@class NSString, NSArray;
@protocol SBFTraitsArbiterUpdateContextBuilding, BSDescriptionProviding, SBFTraitsSettingsActuationContextProviding;

#import <Foundation/Foundation.h>

#import "SBFTraitsSettingsActuationContext.h"

@interface SBFTraitsArbiterUpdateContext : NSObject <SBFTraitsArbiterUpdateContextBuilding, BSDescriptionProviding, SBFTraitsSettingsActuationContextProviding>



@property (readonly, nonatomic) BOOL _hasDefaultOrientationActuationContext; // ivar: __hasDefaultOrientationActuationContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceOrientationResolution; // ivar: _forceOrientationResolution
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SBFTraitsSettingsActuationContext *orientationActuationContext; // ivar: _orientationActuationContext
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (copy, nonatomic) NSArray *requestingParticipantsUniqueIdentifiers; // ivar: _requestingParticipantsUniqueIdentifiers
@property (readonly) Class superclass;


-(BOOL)hasAnyActuationContext;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithBuilder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif