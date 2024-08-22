// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSVERSIONCOMPARATOR_H
#define AMSVERSIONCOMPARATOR_H


#import <Foundation/Foundation.h>


@interface AMSVersionComparator : NSObject



+(BOOL)isVersionSupported:(id)arg0 requiredVersion:(id)arg1 ;
+(id)_sanitizedVersionStringForVersionString:(id)arg0 ;


@end


#endif