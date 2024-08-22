// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDEFAULTSLEEPDATASOURCEPROVIDER_H
#define HKDEFAULTSLEEPDATASOURCEPROVIDER_H

@class NSCalendar, NSString;
@protocol HKSleepDataSourceProvider;

#import <Foundation/Foundation.h>


@interface HKDefaultSleepDataSourceProvider : NSObject <HKSleepDataSourceProvider>



@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) NSString *queryIdentifier; // ivar: _queryIdentifier


-(id)initWithCalendar:(id)arg0 queryIdentifier:(id)arg1 ;
-(id)makeSleepDataSourceFromHealthStore:(id)arg0 representativeDisplayType:(id)arg1 ;
-(id)makeSleepStagesDataSourceFromHealthStore:(id)arg0 representativeDisplayType:(id)arg1 ;


@end


#endif