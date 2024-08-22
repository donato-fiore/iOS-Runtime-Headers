// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEADPHONEEXPOSURESTATISTICUPDATERESULT_H
#define HDHEADPHONEEXPOSURESTATISTICUPDATERESULT_H


#import <Foundation/Foundation.h>


@interface HDHeadphoneExposureStatisticUpdateResult : NSObject

@property (readonly, nonatomic) BOOL canTriggerNotification; // ivar: _canTriggerNotification
@property (readonly, nonatomic) BOOL includedSeries; // ivar: _includedSeries


+(id)_resultWithIncludedSeries:(BOOL)arg0 canTriggerNotification:(BOOL)arg1 ;
+(id)_resultWithIncludedSeries:(BOOL)arg0 samples:(id)arg1 ;
+(id)resultForAggregation;
+(id)resultForEmptySamplesAdded;
+(id)resultForSamplesAdded:(id)arg0 includedSeries:(BOOL)arg1 ;
+(id)resultForSamplesJournaled:(id)arg0 ;
-(id)_initWithIncludedSeries:(BOOL)arg0 canTriggerNotification:(BOOL)arg1 ;
-(void)combineWithResult:(id)arg0 ;


@end


#endif