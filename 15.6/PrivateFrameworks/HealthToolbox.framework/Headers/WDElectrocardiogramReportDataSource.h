// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDELECTROCARDIOGRAMREPORTDATASOURCE_H
#define WDELECTROCARDIOGRAMREPORTDATASOURCE_H

@class NSDateComponents, NSString, HKHealthStore, HKElectrocardiogram, UIColor;
@protocol HRElectrocardiogramReportDataSource;

#import <Foundation/Foundation.h>


@interface WDElectrocardiogramReportDataSource : NSObject <HRElectrocardiogramReportDataSource>



@property (readonly, nonatomic) NSInteger activeAlgorithmVersion; // ivar: _activeAlgorithmVersion
@property (retain, nonatomic) NSDateComponents *dateOfBirthComponents; // ivar: _dateOfBirthComponents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) HKElectrocardiogram *sample; // ivar: _sample
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)initWithSample:(id)arg0 healthStore:(id)arg1 activeAlgorithmVersion:(NSInteger)arg2 ;
-(void)_fetchDemographicInformation;


@end


#endif