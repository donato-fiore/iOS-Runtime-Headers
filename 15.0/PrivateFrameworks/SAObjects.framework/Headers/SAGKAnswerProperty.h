// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGKANSWERPROPERTY_H
#define SAGKANSWERPROPERTY_H

@class NSString, NSNumber;
@protocol SAAceSerializable, SAClientBoundCommand;


#import "AceObject.h"
#import "SAUIDecoratedText.h"
#import "SAUIAppPunchOut.h"

@interface SAGKAnswerProperty : AceObject <SAAceSerializable>



@property (retain, nonatomic) NSObject<SAClientBoundCommand> *command;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValueAnnotation;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSNumber *selected;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *valueAnnotation;


+(id)answerProperty;
+(id)answerPropertyWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif