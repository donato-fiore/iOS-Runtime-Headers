// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPRECISIONRECALLEVALUATION_H
#define PGPRECISIONRECALLEVALUATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PGPrecisionRecallEvaluation : NSObject

@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSUInteger falseNegatives; // ivar: _falseNegatives
@property (readonly, nonatomic) NSUInteger falsePositives; // ivar: _falsePositives
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger trueNegatives; // ivar: _trueNegatives
@property (readonly, nonatomic) NSUInteger truePositives; // ivar: _truePositives


-(CGFloat)fMeasure;
-(CGFloat)fMeasure:(CGFloat)arg0 ;
-(CGFloat)precision;
-(CGFloat)recall;
-(id)csvHeader;
-(id)description;
-(id)initWithIdentifier:(id)arg0 category:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 category:(id)arg1 truePositives:(NSUInteger)arg2 falsePositives:(NSUInteger)arg3 falseNegatives:(NSUInteger)arg4 trueNegatives:(NSUInteger)arg5 ;
-(void)evaluateWithGroundTruthResult:(BOOL)arg0 andInferenceResult:(BOOL)arg1 ;
-(void)evaluateWithGroundTruthResults:(id)arg0 andInferenceResults:(id)arg1 ;


@end


#endif