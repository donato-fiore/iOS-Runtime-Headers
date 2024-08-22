// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASRECOGNITION_H
#define SASRECOGNITION_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASRecognition : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *phrases;
@property (nonatomic) NSInteger sentenceConfidence;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *utterances;


+(id)recognition;
+(id)recognitionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif