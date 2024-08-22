// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATTSSPEECHSYNTHESISVOICE_H
#define SATTSSPEECHSYNTHESISVOICE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SATTSSpeechSynthesisVoice : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *contentVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *gender;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *keyString;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *quality;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL useServer;


+(id)speechSynthesisVoice;
+(id)speechSynthesisVoiceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif