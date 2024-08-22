// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGKLINKEDANSWERGROUP_H
#define SAGKLINKEDANSWERGROUP_H

@class NSString, NSArray, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAGKLinkedAnswerGroup : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *linkedAnswers;
@property (copy, nonatomic) NSNumber *numberOfResults;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)linkedAnswerGroup;
+(id)linkedAnswerGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif