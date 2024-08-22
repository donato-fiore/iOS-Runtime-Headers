// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKREMOTEFEATUREAVAILABILITYBASERULE_H
#define HKREMOTEFEATUREAVAILABILITYBASERULE_H

@protocol HKRemoteFeatureAvailabilityDataSource;

#import <Foundation/Foundation.h>


@interface HKRemoteFeatureAvailabilityBaseRule : NSObject

@property (weak, nonatomic) NSObject<HKRemoteFeatureAvailabilityDataSource> *dataSource; // ivar: _dataSource


+(Class)ruleClassForRawValue:(id)arg0 ;
-(BOOL)evaluate;
-(id)initWithRawValue:(id)arg0 dataSource:(id)arg1 ;
-(void)processUserInfo:(id)arg0 ;


@end


#endif