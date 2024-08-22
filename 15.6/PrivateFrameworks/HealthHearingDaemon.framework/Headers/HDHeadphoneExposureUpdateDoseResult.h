// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEADPHONEEXPOSUREUPDATEDOSERESULT_H
#define HDHEADPHONEEXPOSUREUPDATEDOSERESULT_H


#import <Foundation/Foundation.h>

#import "HDHeadphoneExposureStatisticsResult.h"

@interface HDHeadphoneExposureUpdateDoseResult : NSObject

@property (retain, nonatomic) HDHeadphoneExposureStatisticsResult *statistics; // ivar: _statistics


+(id)resultForNoChange;
+(id)resultForUpdate:(id)arg0 ;
-(id)_initWithStatistics:(id)arg0 ;


@end


#endif