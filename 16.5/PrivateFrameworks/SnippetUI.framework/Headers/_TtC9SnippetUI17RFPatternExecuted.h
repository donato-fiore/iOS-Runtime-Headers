// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SNIPPETUI17RFPATTERNEXECUTED_H
#define _TTC9SNIPPETUI17RFPATTERNEXECUTED_H

@class NSString;


#import "VRXTurnBasedInstrumentationEvent.h"

@interface _TtC9SnippetUI17RFPatternExecuted : VRXTurnBasedInstrumentationEvent {
    ? patternId;
    ? patternType;
    ? responseMode;
    ? instrumentationClient;
}


@property (nonatomic, readonly) NSString *patternId;
@property (nonatomic, readonly) NSString *patternType;
@property (nonatomic, readonly) NSString *responseMode;


-(id)init;
-(id)initWithPatternId:(id)arg0 patternType:(id)arg1 responseMode:(id)arg2 ;
-(void)emitWithTurnIdentifier:(id)arg0 ;


@end


#endif