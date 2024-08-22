// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIMLRUNTIMEACTIVEEVALUATIONTUPLE_H
#define TRIMLRUNTIMEACTIVEEVALUATIONTUPLE_H

@class TRIMLRuntimeEvaluation;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TRIFactorsState.h"

@interface TRIMLRuntimeActiveEvaluationTuple : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) TRIMLRuntimeEvaluation *eval; // ivar: _eval
@property (readonly, nonatomic) TRIFactorsState *factorsState; // ivar: _factorsState


+(BOOL)supportsSecureCoding;
+(id)tupleWithEval:(id)arg0 factorsState:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTuple:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementEval:(id)arg0 ;
-(id)copyWithReplacementFactorsState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEval:(id)arg0 factorsState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif