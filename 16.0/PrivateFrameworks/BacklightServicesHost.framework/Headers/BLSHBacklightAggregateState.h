// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHBACKLIGHTAGGREGATESTATE_H
#define BLSHBACKLIGHTAGGREGATESTATE_H

@class NSString;
@protocol BLSHBacklightTransitionStateMachineState;

#import <Foundation/Foundation.h>

#import "BLSHBacklightDisplayStateMachine.h"
#import "BLSHBacklightEnvironmentPresentation.h"
#import "BLSHBacklightEnvironmentStateMachine.h"

@interface BLSHBacklightAggregateState : NSObject <BLSHBacklightTransitionStateMachineState>

 {
    BLSHBacklightDisplayStateMachine *_displayModeSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger displayMode;
@property (readonly) NSUInteger hash;
@property (readonly) BLSHBacklightEnvironmentPresentation *presentation;
@property (retain) BLSHBacklightEnvironmentStateMachine *presentationSource; // ivar: _presentationSource
@property (readonly) Class superclass;


+(BOOL)isState:(id)arg0 equalToObject:(id)arg1 ;
+(NSUInteger)stateHash:(id)arg0 ;
+(id)stateDebugDescription:(id)arg0 ;
+(id)stateDescription:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDisplayModeSource:(id)arg0 ;


@end


#endif