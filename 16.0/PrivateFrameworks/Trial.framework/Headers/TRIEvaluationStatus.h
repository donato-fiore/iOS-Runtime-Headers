// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIEVALUATIONSTATUS_H
#define TRIEVALUATIONSTATUS_H

@class NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TRIFactorsState.h"

@interface TRIEvaluationStatus : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) TRIFactorsState *evalState; // ivar: _evalState
@property (readonly, nonatomic) NSString *evaluationId; // ivar: _evaluationId
@property (readonly, nonatomic) unsigned char type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)defaultProvider;
+(id)freshProvider;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(unsigned char)arg0 evaluationId:(id)arg1 date:(id)arg2 evalState:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif