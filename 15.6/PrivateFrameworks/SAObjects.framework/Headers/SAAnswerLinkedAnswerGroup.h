// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAANSWERLINKEDANSWERGROUP_H
#define SAANSWERLINKEDANSWERGROUP_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAAnswerLinkedAnswerGroup : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *linkedAnswers;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)linkedAnswerGroup;
+(id)linkedAnswerGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif