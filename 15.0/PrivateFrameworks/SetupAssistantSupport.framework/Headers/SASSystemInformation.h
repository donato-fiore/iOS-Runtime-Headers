// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASSYSTEMINFORMATION_H
#define SASSYSTEMINFORMATION_H


#import <Foundation/Foundation.h>


@interface SASSystemInformation : NSObject



+(NSInteger)compareProductVersion:(id)arg0 toProductVersion:(id)arg1 ;
+(id)deviceClass;
+(id)productType;
+(id)productVersion;
+(id)storageAvailable;
+(id)storageCapacity;


@end


#endif