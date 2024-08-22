// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SATTSCANCELSPEECHSYNTHESIS_H
#define SATTSCANCELSPEECHSYNTHESIS_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SATTSCancelSpeechSynthesis : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)cancelSpeechSynthesis;
+(id)cancelSpeechSynthesisWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif