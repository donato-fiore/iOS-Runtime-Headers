// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGLOCATIONCRITERIA_H
#define PGMEANINGLOCATIONCRITERIA_H

@class NSString;
@protocol PGMeaningCriteria;

#import <Foundation/Foundation.h>


@interface PGMeaningLocationCriteria : NSObject <PGMeaningCriteria>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL excludeFrequentLocations; // ivar: _excludeFrequentLocations
@property (nonatomic) BOOL excludeHomeWorkLocations; // ivar: _excludeHomeWorkLocations
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeFrequentLocations; // ivar: _includeFrequentLocations
@property (nonatomic) BOOL includeHomeLocations; // ivar: _includeHomeLocations
@property (nonatomic) BOOL includeWorkLocations; // ivar: _includeWorkLocations
@property (readonly) Class superclass;


+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)passesForAssets:(id)arg0 ;
-(BOOL)passesForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;


@end


#endif