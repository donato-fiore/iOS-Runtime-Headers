// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMFIOKITDATASOURCE_H
#define __HMFIOKITDATASOURCE_H

@class NSString;
@protocol HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource;


#import "HMFObject.h"

@interface __HMFIOKitDataSource : HMFObject <HMFSystemInfoSerialNumberDataSource, HMFSystemInfoProductInfoDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) NSInteger productClass;
@property (readonly, nonatomic) NSInteger productPlatform;
@property (readonly, nonatomic) NSInteger productVariant;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly) Class superclass;




@end


#endif