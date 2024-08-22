// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAANSWERSPEAKABLEANSWER_H
#define SAANSWERSPEAKABLEANSWER_H

@class NSString, NSDictionary;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAAnswerSpeakableAnswer : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *parameters;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *templateName;


+(id)speakableAnswer;
+(id)speakableAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif