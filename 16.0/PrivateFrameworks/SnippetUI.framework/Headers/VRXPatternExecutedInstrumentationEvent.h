// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VRXPATTERNEXECUTEDINSTRUMENTATIONEVENT_H
#define VRXPATTERNEXECUTEDINSTRUMENTATIONEVENT_H

@class NSString;


#import "VRXTurnBasedInstrumentationEvent.h"
#import "_TtC9SnippetUI17RFPatternExecuted.h"

@interface VRXPatternExecutedInstrumentationEvent : VRXTurnBasedInstrumentationEvent

@property (readonly) _TtC9SnippetUI17RFPatternExecuted *patternExecuted; // ivar: _patternExecuted
@property (retain, nonatomic) NSString *patternId; // ivar: _patternId
@property (retain, nonatomic) NSString *patternType; // ivar: _patternType
@property (retain, nonatomic) NSString *responseMode; // ivar: _responseMode


-(id)init:(id)arg0 patternType:(id)arg1 responseMode:(id)arg2 ;
-(void)emitWithTurnIdentifier:(id)arg0 ;


@end


#endif