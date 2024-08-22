// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLVALUEEXPRESSION_H
#define TMLVALUEEXPRESSION_H

@class NSArray, NSString;
@protocol TMLModelSerialize;

#import <Foundation/Foundation.h>


@interface TMLValueExpression : NSObject <TMLModelSerialize>



@property (readonly, nonatomic) NSArray *bindings; // ivar: _bindings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *expressionText; // ivar: _expressionText
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)decode:(struct ProtobufCMessage *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithExpressionText:(id)arg0 bindings:(id)arg1 ;
-(void)encode:(struct ProtobufCMessage *)arg0 ;


@end


#endif