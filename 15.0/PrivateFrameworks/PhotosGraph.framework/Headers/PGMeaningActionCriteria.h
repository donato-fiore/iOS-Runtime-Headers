// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEANINGACTIONCRITERIA_H
#define PGMEANINGACTIONCRITERIA_H

@class NSString;
@protocol PGMeaningCriteria;

#import <Foundation/Foundation.h>


@interface PGMeaningActionCriteria : NSObject <PGMeaningCriteria>



@property (retain, nonatomic) NSString *actionName; // ivar: _actionName
@property (nonatomic) int actionValue; // ivar: _actionValue
@property (nonatomic) CGFloat confidenceHighPrecisionThreshold; // ivar: _confidenceHighPrecisionThreshold
@property (nonatomic) CGFloat confidenceHighRecallThreshold; // ivar: _confidenceHighRecallThreshold
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)passesCriteriaWithTrait:(id)arg0 ;
-(BOOL)passesForAssets:(id)arg0 ;
-(BOOL)passesForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;


@end


#endif