// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSHRNSUPPORT_H
#define LSHRNSUPPORT_H


#import <Foundation/Foundation.h>


@interface LSHRNSupport : NSObject



+(BOOL)deviceConfiguredForHRN;
+(id)vendorIDFromVendorName:(id)arg0 seedData:(id)arg1 error:(*id)arg2 ;
+(void)invalidateCache;
+(void)setActivationRecordOverride:(BOOL)arg0 ;
+(void)setActivationRecordOverrideNil;
+(void)setFeatureFlagOverride:(BOOL)arg0 ;


@end


#endif