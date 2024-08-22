// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPLICATIONEXTENSIONRECORD_H
#define ATXAPPLICATIONEXTENSIONRECORD_H


#import <Foundation/Foundation.h>


@interface ATXApplicationExtensionRecord : NSObject



+(BOOL)isDebuggingAllowedForExtensionBundleId:(id)arg0 ;
+(id)containerBundleIdForExtensionBundleId:(id)arg0 ;
+(id)localizedNameForExtensionBundleId:(id)arg0 ;
+(id)recordForExtensionBundleId:(id)arg0 ;


@end


#endif