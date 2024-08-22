// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFULLFONTSIZE_H
#define _UIFULLFONTSIZE_H


#import <Foundation/Foundation.h>


@interface _UIFullFontSize : NSObject {
    CGFloat _value;
    BOOL _isDefault;
    BOOL _needsEvaluation;
}




+(id)defaultValue;
+(id)valued:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needsEvaluation;
-(BOOL)setNeedsEvaluation;
-(CGFloat)valueWithEvaluationIfNeeded:(id)arg0 ;
-(id)initWithValue:(CGFloat)arg0 isDefault:(BOOL)arg1 ;
-(id)overrideUnlessDefault:(CGFloat)arg0 ;


@end


#endif