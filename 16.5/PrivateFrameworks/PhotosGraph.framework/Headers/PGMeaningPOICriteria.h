// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGPOICRITERIA_H
#define PGMEANINGPOICRITERIA_H

@class NSString, NSArray;
@protocol PGMeaningCriteria;

#import <Foundation/Foundation.h>


@interface PGMeaningPOICriteria : NSObject <PGMeaningCriteria>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumParkDiameter; // ivar: _maximumParkDiameter
@property (nonatomic) NSUInteger minimumNumberOfPOIs; // ivar: _minimumNumberOfPOIs
@property (nonatomic) BOOL mustBeSpecial; // ivar: _mustBeSpecial
@property (retain, nonatomic) NSArray *negativePOIs; // ivar: _negativePOIs
@property (retain, nonatomic) NSArray *positivePOIs; // ivar: _positivePOIs
@property (readonly) Class superclass;


+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg0 ;
-(BOOL)_parkIsLargerThanMaximumDiameterWithAreaNodes:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)passesForAssets:(id)arg0 ;
-(BOOL)passesForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;


@end


#endif