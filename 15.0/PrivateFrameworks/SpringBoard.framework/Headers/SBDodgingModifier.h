// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDODGINGMODIFIER_H
#define SBDODGINGMODIFIER_H

@class NSString;
@protocol SBDodgingQueryProviding, SBDodgingContextProviding;


#import "SBChainableModifier.h"

@interface SBDodgingModifier : SBChainableModifier <SBDodgingQueryProviding, SBDodgingContextProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contextProtocol;
+(id)newEventResponse;
+(id)queryProtocol;
-(BOOL)runsInternalVerificationAfterEventDispatch;
-(id)_handleEvent:(id)arg0 ;
-(id)handleAnimationCompletionEvent:(id)arg0 ;
-(id)handleCustomEvent:(id)arg0 ;
-(id)handleInsertionEvent:(id)arg0 ;
-(id)handlePreferenceChangeEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleRotationEvent:(id)arg0 ;
-(id)loggingCategory;


@end


#endif