// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCLOUDDEVICEVALIDATION_H
#define TPSCLOUDDEVICEVALIDATION_H

@protocol TPSCloudDeviceDataSource;


#import "TPSTargetingValidation.h"
#import "TPSCloudDeviceInfo.h"

@interface TPSCloudDeviceValidation : TPSTargetingValidation

@property (weak, nonatomic) NSObject<TPSCloudDeviceDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) TPSCloudDeviceInfo *deviceInfo; // ivar: _deviceInfo


-(id)description;
-(id)initWithDeviceInfo:(id)arg0 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif