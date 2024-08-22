// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASVOICEIDENTIFICATIONSIGNAL_H
#define SASVOICEIDENTIFICATIONSIGNAL_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SASVoiceIdentificationSignal : SABaseClientBoundCommand

@property (nonatomic) BOOL recordUserAudio;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (copy, nonatomic) NSString *selectedSharedUserId;


+(id)voiceIdentificationSignal;
+(id)voiceIdentificationSignalWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif