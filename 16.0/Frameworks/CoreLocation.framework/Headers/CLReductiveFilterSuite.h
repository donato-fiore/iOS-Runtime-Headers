// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLREDUCTIVEFILTERSUITE_H
#define CLREDUCTIVEFILTERSUITE_H


#import <Foundation/Foundation.h>


@interface CLReductiveFilterSuite : NSObject



+(CGFloat)rangeForReductiveFilterOptions:(id)arg0 ;
+(CGFloat)rangeForTransmitPower:(CGFloat)arg0 ;
+(id)applyFilterToLocationObservations:(id)arg0 options:(id)arg1 ;
+(id)applyFilterToLocationTrace:(id)arg0 options:(id)arg1 ;
+(id)deriveLocationFromLocations:(id)arg0 ;
+(id)deriveLocationFromLocations:(id)arg0 options:(id)arg1 ;
+(id)filterOutliers:(id)arg0 ;
+(id)filterOutliers:(id)arg0 options:(id)arg1 ;


@end


#endif