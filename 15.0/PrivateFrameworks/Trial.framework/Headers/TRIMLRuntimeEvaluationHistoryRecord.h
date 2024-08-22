// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIMLRUNTIMEEVALUATIONHISTORYRECORD_H
#define TRIMLRUNTIMEEVALUATIONHISTORYRECORD_H

@class TRIMLRuntimeEvaluation;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TRIEvaluationStatus.h"

@interface TRIMLRuntimeEvaluationHistoryRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) TRIMLRuntimeEvaluation *evaluation; // ivar: _evaluation
@property (readonly, nonatomic) TRIEvaluationStatus *status; // ivar: _status


+(BOOL)supportsSecureCoding;
+(id)recordWithEvaluation:(id)arg0 status:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementEvaluation:(id)arg0 ;
-(id)copyWithReplacementStatus:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvaluation:(id)arg0 status:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif