// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXUTILITIES_H
#define MXUTILITIES_H


#import <Foundation/Foundation.h>


@interface MXUtilities : NSObject



+(BOOL)isAppAnalyticsEnabled;
+(BOOL)verifySDKVersionForClient:(id)arg0 ;
+(id)containerPath;
+(id)getServicesWhitelist;
+(id)modelIdentifier;
+(id)osVersion;
+(id)platformArchitecture;
+(id)regionFormat;


@end


#endif