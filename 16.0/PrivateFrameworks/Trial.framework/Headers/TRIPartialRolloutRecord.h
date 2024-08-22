// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPARTIALROLLOUTRECORD_H
#define TRIPARTIALROLLOUTRECORD_H

@class NSString<TRIFactorPackSetId>, NSNumber, NSArray, NSString<TRIRampId>;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TRIRolloutDeployment.h"

@interface TRIPartialRolloutRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *activeFactorPackSetId; // ivar: _activeFactorPackSetId
@property (readonly, nonatomic) NSNumber *activeTargetingRuleIndex; // ivar: _activeTargetingRuleIndex
@property (readonly, nonatomic) TRIRolloutDeployment *deployment; // ivar: _deployment
@property (readonly, nonatomic) BOOL isShadow; // ivar: _isShadow
@property (readonly, nonatomic) NSArray *namespaces; // ivar: _namespaces
@property (readonly, nonatomic) NSString<TRIRampId> *rampId; // ivar: _rampId
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *targetedFactorPackSetId; // ivar: _targetedFactorPackSetId
@property (readonly, nonatomic) NSNumber *targetedTargetingRuleIndex; // ivar: _targetedTargetingRuleIndex


+(BOOL)supportsSecureCoding;
+(id)partialRecordWithFullRecord:(id)arg0 ;
+(id)recordWithDeployment:(id)arg0 rampId:(id)arg1 activeFactorPackSetId:(id)arg2 activeTargetingRuleIndex:(id)arg3 targetedFactorPackSetId:(id)arg4 targetedTargetingRuleIndex:(id)arg5 status:(NSInteger)arg6 namespaces:(id)arg7 isShadow:(BOOL)arg8 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementActiveFactorPackSetId:(id)arg0 ;
-(id)copyWithReplacementActiveTargetingRuleIndex:(id)arg0 ;
-(id)copyWithReplacementDeployment:(id)arg0 ;
-(id)copyWithReplacementIsShadow:(BOOL)arg0 ;
-(id)copyWithReplacementNamespaces:(id)arg0 ;
-(id)copyWithReplacementRampId:(id)arg0 ;
-(id)copyWithReplacementStatus:(NSInteger)arg0 ;
-(id)copyWithReplacementTargetedFactorPackSetId:(id)arg0 ;
-(id)copyWithReplacementTargetedTargetingRuleIndex:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeployment:(id)arg0 rampId:(id)arg1 activeFactorPackSetId:(id)arg2 activeTargetingRuleIndex:(id)arg3 targetedFactorPackSetId:(id)arg4 targetedTargetingRuleIndex:(id)arg5 status:(NSInteger)arg6 namespaces:(id)arg7 isShadow:(BOOL)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif