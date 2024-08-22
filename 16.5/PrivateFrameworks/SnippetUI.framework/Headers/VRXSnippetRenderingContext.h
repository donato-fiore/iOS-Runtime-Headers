// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VRXSNIPPETRENDERINGCONTEXT_H
#define VRXSNIPPETRENDERINGCONTEXT_H



#import "VRXTurnBasedInstrumentationEvent.h"
#import "_TtC9SnippetUI25RFSnippetRenderingContext.h"

@interface VRXSnippetRenderingContext : VRXTurnBasedInstrumentationEvent

@property (readonly) _TtC9SnippetUI25RFSnippetRenderingContext *snippetRenderingContext; // ivar: _snippetRenderingContext


-(id)initWithRenderingEvent:(NSInteger)arg0 ;
-(void)emitWithTurnIdentifier:(id)arg0 ;


@end


#endif