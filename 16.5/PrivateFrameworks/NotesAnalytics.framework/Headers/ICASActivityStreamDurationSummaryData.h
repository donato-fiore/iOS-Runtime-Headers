// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASACTIVITYSTREAMDURATIONSUMMARYDATA_H
#define ICASACTIVITYSTREAMDURATIONSUMMARYDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASActivityStreamDurationSummaryData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *fullHeightViewDuration; // ivar: _fullHeightViewDuration
@property (readonly, nonatomic) NSNumber *halfHeightViewDuration; // ivar: _halfHeightViewDuration
@property (readonly, nonatomic) NSNumber *minimizedViewDuration; // ivar: _minimizedViewDuration
@property (readonly, nonatomic) NSNumber *sideBarViewDuration; // ivar: _sideBarViewDuration


+(id)dataName;
-(id)initWithHalfHeightViewDuration:(id)arg0 fullHeightViewDuration:(id)arg1 sideBarViewDuration:(id)arg2 minimizedViewDuration:(id)arg3 ;
-(id)toDict;


@end


#endif