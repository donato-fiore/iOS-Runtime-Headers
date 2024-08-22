// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAANSWERDEFINITIONVARIATION_H
#define SAANSWERDEFINITIONVARIATION_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAAnswerDefinitionVariation : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *examples;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *variation;


+(id)definitionVariation;
+(id)definitionVariationWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif