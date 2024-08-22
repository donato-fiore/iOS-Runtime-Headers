// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MXBUNDLEBLACKLISTENTRY_H
#define _MXBUNDLEBLACKLISTENTRY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_MXVersion.h"

@interface _MXBundleBlacklistEntry : NSObject {
    NSString *_bundleIdentifier;
    _MXVersion *_minimum;
    _MXVersion *_maximum;
}




+(id)blacklistEntriesFromDefaultsValue:(id)arg0 ;
-(BOOL)_isVersionValueAllowed:(id)arg0 ;
-(BOOL)isBundleRecordAllowed:(id)arg0 ;
-(BOOL)isExtensionAllowed:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 minimumDisallowedVersion:(id)arg1 maximumDisallowedVersion:(id)arg2 ;


@end


#endif