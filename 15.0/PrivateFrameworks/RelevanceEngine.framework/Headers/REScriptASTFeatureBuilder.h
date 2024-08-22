// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESCRIPTASTFEATUREBUILDER_H
#define RESCRIPTASTFEATUREBUILDER_H



#import "REScriptASTObjectBuilder.h"

@interface REScriptASTFeatureBuilder : REScriptASTObjectBuilder



-(BOOL)_loadIndexFromNode:(id)arg0 index:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)_buildTransformedFeature:(id)arg0 features:(id)arg1 node:(id)arg2 error:(*id)arg3 ;
-(id)buildObjectWithBinaryExpressionNode:(id)arg0 previousExpression:(id)arg1 error:(*id)arg2 ;
-(id)buildObjectWithFunctionNode:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithIdentifierNode:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithSubscriptExpressionNode:(id)arg0 error:(*id)arg1 ;
-(id)objectTypeErrorDescription;


@end


#endif