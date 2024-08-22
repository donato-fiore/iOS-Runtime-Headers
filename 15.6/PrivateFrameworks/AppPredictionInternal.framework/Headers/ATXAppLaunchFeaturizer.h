// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPLAUNCHFEATURIZER_H
#define ATXAPPLAUNCHFEATURIZER_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "ATXFreeMomentDataSource.h"

@interface ATXAppLaunchFeaturizer : NSObject {
    ATXFreeMomentDataSource *_freeMomentDataSource;
    NSArray *_rankedApps;
    NSDictionary *_appCategories;
}




-(BOOL)isAppAntiCorrelatedWithWorkMode:(id)arg0 ;
-(BOOL)isWorkMode;
-(id)currentTimeAtLocalTimeZone;
-(id)initWithFreeMomentDataSource:(id)arg0 ;
-(id)initWithFreeMomentDataSource:(id)arg0 rankedApps:(id)arg1 appCategories:(id)arg2 ;
-(id)topNPercentileApps:(NSUInteger)arg0 rankedApps:(id)arg1 ;
-(void)updateFeatureVectorWithAppLaunchEvents:(id)arg0 ;


@end


#endif