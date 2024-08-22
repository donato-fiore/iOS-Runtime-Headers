// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAGKANSWERPROPERTYGROUP_H
#define SAGKANSWERPROPERTYGROUP_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAGKAnswerPropertyGroup : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *answerProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)answerPropertyGroup;
+(id)answerPropertyGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif