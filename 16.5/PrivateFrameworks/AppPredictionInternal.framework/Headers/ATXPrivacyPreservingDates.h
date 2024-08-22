// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPRIVACYPRESERVINGDATES_H
#define ATXPRIVACYPRESERVINGDATES_H


#import <Foundation/Foundation.h>


@interface ATXPrivacyPreservingDates : NSObject



-(CGFloat)convertDate:(id)arg0 toDeltaFromSkyUpdateDate:(id)arg1 ;
-(id)_reduceGranularityToDayOfYear:(id)arg0 ;
-(id)reduceGranularityToWeekOfYear:(id)arg0 ;


@end


#endif