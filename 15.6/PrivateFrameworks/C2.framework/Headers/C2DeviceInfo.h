// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2DEVICEINFO_H
#define C2DEVICEINFO_H


#import <Foundation/Foundation.h>


@interface C2DeviceInfo : NSObject



+(BOOL)isAppleInternal;
+(id)buildVersion;
+(id)processName;
+(id)processUUID;
+(id)processVersion;
+(id)productName;
+(id)productType;
+(id)productVersion;
+(id)testName;


@end


#endif