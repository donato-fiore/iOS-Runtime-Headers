// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDEFAULTSLEEPDATASOURCEPROVIDER_H
#define HKDEFAULTSLEEPDATASOURCEPROVIDER_H

@class NSCalendar;
@protocol HKSleepDataSourceProvider;

#import <Foundation/Foundation.h>


@interface HKDefaultSleepDataSourceProvider : NSObject <HKSleepDataSourceProvider>



@property (retain, nonatomic) NSCalendar *calendar; // ivar: _calendar


-(id)initWithCalendar:(id)arg0 ;
-(id)makeSleepDataSourceFromHealthStore:(id)arg0 representativeDisplayType:(id)arg1 ;


@end


#endif