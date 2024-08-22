// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INSYSTEMAPPMATCH_H
#define INSYSTEMAPPMATCH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface INSystemAppMatch : NSObject

@property (readonly, nonatomic) BOOL appIsUnavailableOnCurrentPlatform;
@property (readonly, nonatomic) NSString *bundleIdentifierForCurrentPlatform;
@property (readonly, nonatomic) NSString *iOSBundleIdentifier; // ivar: _iOSBundleIdentifier
@property (readonly, nonatomic) NSString *macOSBundleIdentifier; // ivar: _macOSBundleIdentifier
@property (readonly, nonatomic) NSString *watchOSBundleIdentifier; // ivar: _watchOSBundleIdentifier


+(id)matchWithiOSBundleIdentifier:(id)arg0 macOSBundleIdentifier:(id)arg1 watchOSBundleIdentifier:(id)arg2 ;
-(id)initWithiOSBundleIdentifier:(id)arg0 macOSBundleIdentifier:(id)arg1 watchOSBundleIdentifier:(id)arg2 ;


@end


#endif