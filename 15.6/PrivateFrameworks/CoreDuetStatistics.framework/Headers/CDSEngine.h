// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDSENGINE_H
#define CDSENGINE_H


#import <Foundation/Foundation.h>


@interface CDSEngine : NSObject



+(id)canonicalizeBasisObjectSequence:(id)arg0 error:(*id)arg1 ;
+(id)durationStatistic:(NSInteger)arg0 fromBasisObjects:(id)arg1 error:(*id)arg2 ;
+(id)interArrivalStatistic:(NSInteger)arg0 fromBasisObjects:(id)arg1 error:(*id)arg2 ;
+(id)valueStatistic:(NSInteger)arg0 fromBasisObjects:(id)arg1 error:(*id)arg2 ;
-(*CGFloat)copyOccurrenceCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(CGFloat)arg0 writeAttributeCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(*CGFloat)copyOccurrenceOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(CGFloat)arg0 writeAttributeCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(*CGFloat)copyPrincipalOccurrenceCoevalityComponentsWithCoevalityLeewaySeconds:(CGFloat)arg0 writeAttributeCount:(*NSUInteger)arg1 writeAttributeIds:(**NSUInteger)arg2 error:(*id)arg3 ;
-(*CGFloat)copyPrincipalOccurrenceOrderingComponentsWithOrderingGapLeewaySeconds:(CGFloat)arg0 writeAttributeCount:(*NSUInteger)arg1 writeAttributeIds:(**NSUInteger)arg2 error:(*id)arg3 ;
-(*CGFloat)copyPrincipalRangeCoevalityComponentsWithCoevalityLeewaySeconds:(CGFloat)arg0 writeAttributeCount:(*NSUInteger)arg1 writeAttributeIds:(**NSUInteger)arg2 writeStatisticTypes:(**NSInteger)arg3 error:(*id)arg4 ;
-(*CGFloat)copyPrincipalRangeOrderingComponentsWithOrderingGapLeewaySeconds:(CGFloat)arg0 writeAttributeCount:(*NSUInteger)arg1 writeAttributeIds:(**NSUInteger)arg2 writeStatisticTypes:(**NSInteger)arg3 error:(*id)arg4 ;
-(*CGFloat)copyRangeCoevalityCorrelationMatrixOfAttributeId:(NSUInteger)arg0 toAttributeId:(NSUInteger)arg1 coevalityLeewaySeconds:(CGFloat)arg2 error:(*id)arg3 ;
-(*CGFloat)copyRangeCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(CGFloat)arg0 writeAttributeCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(*CGFloat)copyRangeOrderingCorrelationMatrixOfAttributeId:(NSUInteger)arg0 toAttributeId:(NSUInteger)arg1 orderingGapLeewaySeconds:(CGFloat)arg2 error:(*id)arg3 ;
-(*CGFloat)copyRangeOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(CGFloat)arg0 writeAttributeCount:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)injestBasisObjects:(id)arg0 error:(*id)arg1 ;
-(CGFloat)occurrenceCoevalityCorrelationOfAttributeId:(NSUInteger)arg0 toAttributeId:(NSUInteger)arg1 coevalityLeewaySeconds:(CGFloat)arg2 error:(*id)arg3 ;
-(CGFloat)occurrenceOrderingCorrelationOfAttributeId:(NSUInteger)arg0 toAttributeId:(NSUInteger)arg1 orderingGapLeewaySeconds:(CGFloat)arg2 error:(*id)arg3 ;
-(id)cachedAttributeIds;
-(id)durationStatistic:(NSInteger)arg0 forAttributeId:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)interArrivalStatistic:(NSInteger)arg0 forAttributeId:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)valueStatistic:(NSInteger)arg0 forAttributeId:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif