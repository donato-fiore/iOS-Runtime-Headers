// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEANINGDURATIONCRITERIA_H
#define PGMEANINGDURATIONCRITERIA_H

@class NSString;
@protocol PGMeaningCriteria;

#import <Foundation/Foundation.h>


@interface PGMeaningDurationCriteria : NSObject <PGMeaningCriteria>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeRoutineVisitsInDuration; // ivar: _includeRoutineVisitsInDuration
@property (nonatomic) NSUInteger minimumDuration; // ivar: _minimumDuration
@property (readonly) Class superclass;


+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)passesForAssets:(id)arg0 ;
-(BOOL)passesForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;


@end


#endif