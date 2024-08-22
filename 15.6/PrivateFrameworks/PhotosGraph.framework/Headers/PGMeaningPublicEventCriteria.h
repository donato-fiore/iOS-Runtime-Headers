// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEANINGPUBLICEVENTCRITERIA_H
#define PGMEANINGPUBLICEVENTCRITERIA_H

@class NSString;
@protocol PGMeaningCriteria;

#import <Foundation/Foundation.h>


@interface PGMeaningPublicEventCriteria : NSObject <PGMeaningCriteria>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *publicEventCategory; // ivar: _publicEventCategory
@property (retain, nonatomic) NSString *publicEventCategoryNameString; // ivar: _publicEventCategoryNameString
@property (readonly) Class superclass;


+(id)_publicEventCategoryForPublicEventCategoryName:(id)arg0 ;
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)passesForAssets:(id)arg0 ;
-(BOOL)passesForMomentNode:(id)arg0 momentNodeCache:(id)arg1 ;


@end


#endif