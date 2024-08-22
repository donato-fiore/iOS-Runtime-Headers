// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SATTSFETCHSPEECHSYNTHESISVOICEREQUEST_H
#define SATTSFETCHSPEECHSYNTHESISVOICEREQUEST_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SATTSSpeechSynthesisVoice.h"

@interface SATTSFetchSpeechSynthesisVoiceRequest : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSArray *clientVoiceKeyList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SATTSSpeechSynthesisVoice *filteredVoiceKey;
@property (copy, nonatomic) NSString *gender;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)fetchSpeechSynthesisVoiceRequest;
+(id)fetchSpeechSynthesisVoiceRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif