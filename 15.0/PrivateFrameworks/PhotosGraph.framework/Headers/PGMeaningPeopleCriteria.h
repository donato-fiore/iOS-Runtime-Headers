// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEANINGPEOPLECRITERIA_H
#define PGMEANINGPEOPLECRITERIA_H

@class NSString;
@protocol PGMeaningCriteria;

#import <Foundation/Foundation.h>


@interface PGMeaningPeopleCriteria : NSObject <PGMeaningCriteria>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger minimumNumberOfPeople; // ivar: _minimumNumberOfPeople
@property (nonatomic) BOOL requiresChildPresence; // ivar: _requiresChildPresence
@property (nonatomic) BOOL requiresPartnerPresence; // ivar: _requiresPartnerPresence
@property (nonatomic) BOOL requiresPetPresence; // ivar: _requiresPetPresence
@property (readonly) Class superclass;


+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)passesForAssets:(id)arg0 ;
-(BOOL)passesForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;


@end


#endif