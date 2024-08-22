// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAANSWERDEFINITIONGROUP_H
#define SAANSWERDEFINITIONGROUP_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *definitionEntries;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *partOfSpeech;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *synonyms;


+(id)definitionGroup;
+(id)definitionGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif