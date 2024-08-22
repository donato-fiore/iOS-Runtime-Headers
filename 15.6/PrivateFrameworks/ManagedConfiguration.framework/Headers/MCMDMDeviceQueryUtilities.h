// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCMDMDEVICEQUERYUTILITIES_H
#define MCMDMDEVICEQUERYUTILITIES_H


#import <Foundation/Foundation.h>


@interface MCMDMDeviceQueryUtilities : NSObject



+(id)allowedDeviceQueriesForAccessRights:(int)arg0 ;
+(id)allowedDeviceQueriesOnUserChannelForAccessRights:(int)arg0 ;
+(id)allowedDeviceQueriesWithUserEnrollment;


@end


#endif