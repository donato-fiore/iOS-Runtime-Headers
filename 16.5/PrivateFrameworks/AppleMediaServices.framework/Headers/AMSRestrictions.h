// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSRESTRICTIONS_H
#define AMSRESTRICTIONS_H


#import <Foundation/Foundation.h>


@interface AMSRestrictions : NSObject



+(BOOL)allowAccountModifications;
+(BOOL)allowActiveAccountModifications;
+(BOOL)eroticaAllowed;
+(BOOL)explicitContentAllowed;
+(BOOL)inAppPurchaseAllowed;
+(BOOL)isParentalControlEnabled;
+(BOOL)onDeviceDiagnosticsAllowed;
+(BOOL)requirePasswordImmediately;
+(NSInteger)maximumMediaRank;
+(id)_featureNameForMediaType:(NSUInteger)arg0 ;
+(id)rankForMediaType:(NSUInteger)arg0 ;


@end


#endif