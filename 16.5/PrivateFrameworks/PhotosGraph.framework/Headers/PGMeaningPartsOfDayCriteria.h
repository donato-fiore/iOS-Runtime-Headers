// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGPARTSOFDAYCRITERIA_H
#define PGMEANINGPARTSOFDAYCRITERIA_H

@class NSString, NSArray;
@protocol PGMeaningCriteria;

#import <Foundation/Foundation.h>


@interface PGMeaningPartsOfDayCriteria : NSObject <PGMeaningCriteria>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *negativePartsOfDay; // ivar: _negativePartsOfDay
@property (retain, nonatomic) NSArray *negativePartsOfDayStrings; // ivar: _negativePartsOfDayStrings
@property (retain, nonatomic) NSArray *negativeSignificantPartsOfDay; // ivar: _negativeSignificantPartsOfDay
@property (retain, nonatomic) NSArray *negativeSignificantPartsOfDayStrings; // ivar: _negativeSignificantPartsOfDayStrings
@property (retain, nonatomic) NSArray *positivePartsOfDay; // ivar: _positivePartsOfDay
@property (retain, nonatomic) NSArray *positivePartsOfDayStrings; // ivar: _positivePartsOfDayStrings
@property (retain, nonatomic) NSArray *positiveSignificantPartsOfDay; // ivar: _positiveSignificantPartsOfDay
@property (retain, nonatomic) NSArray *positiveSignificantPartsOfDayStrings; // ivar: _positiveSignificantPartsOfDayStrings
@property (readonly) Class superclass;


+(id)_partsOfDayAsNumbersFromStrings:(id)arg0 ;
+(id)_partsOfDayNumbersByString;
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg0 ;
-(BOOL)_passesPartsOfDayWithMomentNodePartsOfDay:(NSUInteger)arg0 positivePartsOfDay:(id)arg1 negativePartsOfDay:(id)arg2 ;
-(BOOL)isValid;
-(BOOL)passesForAssets:(id)arg0 ;
-(BOOL)passesForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;


@end


#endif