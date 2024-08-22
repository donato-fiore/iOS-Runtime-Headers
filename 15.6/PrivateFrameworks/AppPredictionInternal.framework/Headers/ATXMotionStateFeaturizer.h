// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMOTIONSTATEFEATURIZER_H
#define ATXMOTIONSTATEFEATURIZER_H

@class NSUserDefaults;

#import <Foundation/Foundation.h>

#import "ATXFreeMomentDataSource.h"

@interface ATXMotionStateFeaturizer : NSObject {
    ATXFreeMomentDataSource *_freeMomentDataSource;
    NSUserDefaults *_userDefaults;
}




-(CGFloat)cyclingToStationaryTimeStamp;
-(CGFloat)drivingToStationaryTimeStamp;
-(CGFloat)latestTimeStamp:(id)arg0 ;
-(CGFloat)otherMotionStateChangeTimeStamp;
-(CGFloat)runnningToStationaryTimeStamp;
-(CGFloat)stationaryToWalkingTimeStamp;
-(id)initWithFreeMomentDataSource:(id)arg0 ;
-(id)initWithFreeMomentDataSource:(id)arg0 userDefaults:(id)arg1 ;
-(void)setDefaultValuesForMotionStateFeatures:(id)arg0 ;
-(void)updateFeatureVectorMotionStateEvents:(id)arg0 ;


@end


#endif