// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKSPFEATURES_H
#define _HKSPFEATURES_H


#import <Foundation/Foundation.h>


@interface _HKSPFeatures : NSObject



+(BOOL)cloudKitSyncEnabled;
+(BOOL)focusModeEnabled;
+(id)focusModeEnabledOverride;
+(void)setFocusModeEnabledOverride:(id)arg0 ;


@end


#endif