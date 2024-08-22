// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASDEVICEDATA_H
#define ICASDEVICEDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASOsInstallVariant.h"

@interface ICASDeviceData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly, nonatomic) NSString *devicePlatform; // ivar: _devicePlatform
@property (readonly, nonatomic) NSString *osBundleVersion; // ivar: _osBundleVersion
@property (readonly, nonatomic) ICASOsInstallVariant *osInstallVariant; // ivar: _osInstallVariant
@property (readonly, nonatomic) NSString *osVersion; // ivar: _osVersion


+(id)dataName;
-(id)initWithDeviceModel:(id)arg0 devicePlatform:(id)arg1 osInstallVariant:(id)arg2 osVersion:(id)arg3 osBundleVersion:(id)arg4 ;
-(id)toDict;


@end


#endif