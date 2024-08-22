// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMAGICALMOMENTSPREDICTIONTABLE_H
#define ATXMAGICALMOMENTSPREDICTIONTABLE_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXMagicalMomentsPredictionTable : NSObject <NSSecureCoding>

 {
    NSMutableArray *_predictionTableEntries;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)deduplicatePredictions:(id)arg0 ;
-(id)describeTable;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredictionTableEntries:(id)arg0 ;
-(id)predictionTableEntries;
-(id)predictionsForTriggerEvent:(id)arg0 ;
-(id)removeRestrictedPredictions:(id)arg0 ;
-(id)validPredictionsFromTableEntries:(id)arg0 event:(id)arg1 ;
-(void)addPrediction:(id)arg0 withApplicablePredicates:(id)arg1 ;
-(void)addPredictions:(id)arg0 withApplicablePredicates:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif