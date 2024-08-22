// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXSOURCEUTILITIES_H
#define MXSOURCEUTILITIES_H


#import <Foundation/Foundation.h>


@interface MXSourceUtilities : NSObject



+(BOOL)anyClientsAvailable;
+(BOOL)isAppAnalyticsEnabled;
+(BOOL)isMetricKitClient:(id)arg0 ;
+(BOOL)isMetricKitClient:(id)arg0 forUser:(unsigned int)arg1 ;
+(id)regionFormat;


@end


#endif