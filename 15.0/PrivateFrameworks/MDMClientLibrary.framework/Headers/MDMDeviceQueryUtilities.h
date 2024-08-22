// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDMDEVICEQUERYUTILITIES_H
#define MDMDEVICEQUERYUTILITIES_H


#import <Foundation/Foundation.h>


@interface MDMDeviceQueryUtilities : NSObject



+(id)allowedDeviceQueriesForAccessRights:(int)arg0 ;
+(id)allowedDeviceQueriesOnUserChannelForAccessRights:(int)arg0 ;
+(id)allowedDeviceQueriesWithUserEnrollment;


@end


#endif