// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPHSHAREDUTILITIES_H
#define NPHSHAREDUTILITIES_H


#import <Foundation/Foundation.h>


@interface NPHSharedUtilities : NSObject



+(BOOL)isActiveDeviceTinker;
+(BOOL)isActiveWatchChinaRegionCellular;
+(BOOL)pairedDeviceHasHomeButton;


@end


#endif