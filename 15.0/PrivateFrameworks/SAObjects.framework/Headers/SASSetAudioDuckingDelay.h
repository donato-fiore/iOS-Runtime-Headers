// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASSETAUDIODUCKINGDELAY_H
#define SASSETAUDIODUCKINGDELAY_H

@class NSString, NSNumber;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASSetAudioDuckingDelay : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *duckingEventSyncDelay;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *preTriggerToDuckingEndDuration;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)setAudioDuckingDelay;
+(id)setAudioDuckingDelayWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif