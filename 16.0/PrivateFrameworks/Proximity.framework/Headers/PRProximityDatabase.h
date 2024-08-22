// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPROXIMITYDATABASE_H
#define PRPROXIMITYDATABASE_H


#import <Foundation/Foundation.h>


@interface PRProximityDatabase : NSObject



+(BOOL)getProximityDeviceParameters:(*id)arg0 forDeviceModel:(id)arg1 withError:(*id)arg2 ;
+(NSInteger)getPRDeviceModelFromModelId:(id)arg0 ;
+(NSInteger)getScannerDeviceModel;
+(char)getDeviceBtRxOffsetFromModel:(NSInteger)arg0 ;
+(char)getDeviceBtTxPowerFromModel:(NSInteger)arg0 ;
+(id)getDeviceData;
-(id)init;


@end


#endif