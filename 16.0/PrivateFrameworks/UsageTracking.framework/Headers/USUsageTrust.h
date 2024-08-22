// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USUSAGETRUST_H
#define USUSAGETRUST_H


#import <Foundation/Foundation.h>


@interface USUsageTrust : NSObject



+(BOOL)validateTrustForSecTask:(struct __SecTask *)arg0 ;
+(BOOL)validateTrustForSecTask:(struct __SecTask *)arg0 representingBundleIdentifier:(id)arg1 ;


@end


#endif