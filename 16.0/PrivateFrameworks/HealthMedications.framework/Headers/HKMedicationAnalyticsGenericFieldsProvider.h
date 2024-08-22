// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONANALYTICSGENERICFIELDSPROVIDER_H
#define HKMEDICATIONANALYTICSGENERICFIELDSPROVIDER_H

@protocol HKAnalyticsHealthDataSource;

#import <Foundation/Foundation.h>


@interface HKMedicationAnalyticsGenericFieldsProvider : NSObject {
    id<HKAnalyticsHealthDataSource> *_dataSource;
}




-(BOOL)isOntologySupportedRegion;
-(id)activePairedWatchProductType;
-(id)biologicalSex;
-(id)bucketedUserAgeForCurrentDate:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)userAgeForCurrentDate:(id)arg0 ;


@end


#endif