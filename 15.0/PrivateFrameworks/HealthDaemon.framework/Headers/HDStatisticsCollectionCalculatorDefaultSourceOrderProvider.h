// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSTATISTICSCOLLECTIONCALCULATORDEFAULTSOURCEORDERPROVIDER_H
#define HDSTATISTICSCOLLECTIONCALCULATORDEFAULTSOURCEORDERPROVIDER_H

@class NSString, HKQuantityType;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDStatisticsCollectionCalculatorDefaultSourceOrderProvider : NSObject <HDStatisticsCollectionCalculatorSourceOrderProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 quantityType:(id)arg1 ;
-(id)orderedSourceIDsWithUnorderedIDs:(id)arg0 ;
-(id)sourceForSourceID:(NSInteger)arg0 ;


@end


#endif