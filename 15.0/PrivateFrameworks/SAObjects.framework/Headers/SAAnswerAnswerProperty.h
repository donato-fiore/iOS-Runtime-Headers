// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAANSWERANSWERPROPERTY_H
#define SAANSWERANSWERPROPERTY_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAAnswerAnswerProperty : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *valueAnnotation;


+(id)answerProperty;
+(id)answerPropertyWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif