// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGKDIRECTANSWER_H
#define SAGKDIRECTANSWER_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAGKSpeakableAnswer.h"

@interface SAGKDirectAnswer : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *answer;
@property (copy, nonatomic) NSString *confidenceLevel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAGKSpeakableAnswer *speakableAnswer;
@property (readonly) Class superclass;


+(id)directAnswer;
+(id)directAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif