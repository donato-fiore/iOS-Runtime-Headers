// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASSTARTSPEECHDICTATION_H
#define SASSTARTSPEECHDICTATION_H

@class NSData, NSString, NSArray;


#import "SASStartSpeech.h"

@interface SASStartSpeechDictation : SASStartSpeech

@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationVersion;
@property (nonatomic) BOOL autoPunctuation;
@property (nonatomic) BOOL censorSpeech;
@property (copy, nonatomic) NSString *fieldId;
@property (copy, nonatomic) NSString *fieldLabel;
@property (copy, nonatomic) NSArray *inlineItemList;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *keyboardIdentifier;
@property (copy, nonatomic) NSString *keyboardReturnKey;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSString *postfixText;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) BOOL saveRequestAudio;
@property (copy, nonatomic) NSString *selectedText;
@property (nonatomic) BOOL speakerIndependentRecognition;


+(id)startSpeechDictation;
+(id)startSpeechDictationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif