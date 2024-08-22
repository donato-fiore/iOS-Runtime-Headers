// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSVISUALIZERPREDICATE_H
#define _CSVISUALIZERPREDICATE_H

@class NSPredicate, NSString;



@interface _CSVisualizerPredicate : NSPredicate {
    NSString *_title;
    NSString *_searchString;
    NSUInteger _operator;
    NSPredicate *_numericPredicate;
}




+(BOOL)operatorIsNumeric:(NSUInteger)arg0 ;
+(id)constantValueForExpression:(id)arg0 ;
+(id)predicateWithFormatString:(id)arg0 error:(*id)arg1 ;
+(id)translateNSPredicate:(id)arg0 error:(*id)arg1 ;
+(void)getRanges:(*void)arg0 matchingPredicate:(id)arg1 inDescription:(id)arg2 ;
-(BOOL)evaluateNumerically:(id)arg0 ;
-(BOOL)evaluateWithObject:(id)arg0 ;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(BOOL)getRanges:(*void)arg0 inDescription:(id)arg1 options:(NSUInteger)arg2 limit:(NSUInteger)arg3 searchedInRange:(struct _NSRange *)arg4 ;
-(id)debugDescription;
-(id)description;
-(id)initWithExpression:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 forTitle:(id)arg1 operator:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithSearchString:(id)arg0 operator:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)predicateFormat;


@end


#endif