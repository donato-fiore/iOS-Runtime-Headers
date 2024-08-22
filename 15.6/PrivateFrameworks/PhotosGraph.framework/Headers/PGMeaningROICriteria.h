// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEANINGROICRITERIA_H
#define PGMEANINGROICRITERIA_H

@class NSString, NSArray;
@protocol PGMeaningCriteria;

#import <Foundation/Foundation.h>


@interface PGMeaningROICriteria : NSObject <PGMeaningCriteria>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger minimumNumberOfROIs; // ivar: _minimumNumberOfROIs
@property (retain, nonatomic) NSArray *negativeROIs; // ivar: _negativeROIs
@property (retain, nonatomic) NSArray *positiveROIs; // ivar: _positiveROIs
@property (readonly) Class superclass;


+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)passesForAssets:(id)arg0 ;
-(BOOL)passesForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;


@end


#endif