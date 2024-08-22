// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSMOTIONTRACKINGEXPRESSIONCONFIGURATION_H
#define AXSSMOTIONTRACKINGEXPRESSIONCONFIGURATION_H

@class NSMutableDictionary, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXSSMotionTrackingExpressionConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *_facialExpressionToSensitivity; // ivar: __facialExpressionToSensitivity
@property (readonly, copy, nonatomic) NSDictionary *plistDictionary;


+(BOOL)_jawOpenStartingWithValue:(float)arg0 mouthClose:(float)arg1 expressionConfiguration:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(float)_minConfidenceExpressionStarted:(NSUInteger)arg0 usingExpressionConfiguration:(id)arg1 ;
+(id)_defaultSensitivitiesForAllFacialExpressions;
+(id)_facicalExpressionToSensitivityToValueMapping;
+(id)defaultExpressionConfiguration;
+(id)processIncomingExpressions:(id)arg0 previousExpressions:(id)arg1 expressionConfiguration:(id)arg2 startExpressionsOutSet:(*id)arg3 endExpressionsOutSet:(*id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMotionTrackingExpressionConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)sensitivityForFacialExpression:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlistDictionary:(id)arg0 ;
-(void)_safelySetSensitivity:(NSUInteger)arg0 forFacialExpression:(NSUInteger)arg1 inDictionary:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setSensitivity:(NSUInteger)arg0 forFacialExpression:(NSUInteger)arg1 ;


@end


#endif