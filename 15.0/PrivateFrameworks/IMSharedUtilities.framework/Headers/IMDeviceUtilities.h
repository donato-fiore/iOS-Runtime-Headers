// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDEVICEUTILITIES_H
#define IMDEVICEUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMDeviceUtilities : NSObject



+(BOOL)IMDeviceIsChinaRegion;
+(BOOL)IMDeviceIsGreenTea;
+(BOOL)IMDeviceIsIndiaRegion;
+(BOOL)IMDeviceRegionIsEligibleToBeForcedIntoFilteringUnknownSender;
+(BOOL)IMSupportsASTC;


@end


#endif