// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESJSONPREDICATE_H
#define DESJSONPREDICATE_H


#import <Foundation/Foundation.h>


@interface DESJSONPredicate : NSObject



+(BOOL)_testStrings:(id)arg0 test:(id)arg1 caseInsensitive:(BOOL)arg2 ;
+(BOOL)evaluateAnd:(id)arg0 onObj:(id)arg1 ;
+(BOOL)evaluateArrayOp:(id)arg0 onObj:(id)arg1 ;
+(BOOL)evaluateBoolOp:(id)arg0 onObj:(id)arg1 ;
+(BOOL)evaluateDefOp:(id)arg0 onObj:(id)arg1 ;
+(BOOL)evaluateDict:(id)arg0 onObj:(id)arg1 ;
+(BOOL)evaluateJson:(id)arg0 onJson:(id)arg1 ;
+(BOOL)evaluateNumericOp:(id)arg0 onObj:(id)arg1 ;
+(BOOL)evaluateOr:(id)arg0 onObj:(id)arg1 ;
+(BOOL)evaluatePredicate:(id)arg0 onObj:(id)arg1 ;
+(BOOL)evaluateRegexOp:(id)arg0 onObj:(id)arg1 ;
+(BOOL)evaluateStringOp:(id)arg0 onObj:(id)arg1 ;
+(BOOL)evaluateTypeOp:(id)arg0 onObj:(id)arg1 ;
+(BOOL)isBoolean:(id)arg0 ;
+(BOOL)isDate:(id)arg0 ;
+(BOOL)isDateTime:(id)arg0 ;
+(BOOL)isNumber:(id)arg0 ;
+(BOOL)isTime:(id)arg0 ;
+(BOOL)obj:(id)arg0 matchesRegex:(id)arg1 ;
+(id)fetchObjectAtPath:(id)arg0 from:(id)arg1 ;
+(id)parseJSON:(id)arg0 ;
+(id)parsePath:(id)arg0 ;


@end


#endif