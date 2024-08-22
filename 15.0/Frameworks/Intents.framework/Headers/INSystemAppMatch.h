// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSYSTEMAPPMATCH_H
#define INSYSTEMAPPMATCH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface INSystemAppMatch : NSObject

@property (readonly, nonatomic) BOOL appIsUnavailableOnCurrentPlatform; // ivar: _appIsUnavailableOnCurrentPlatform
@property (readonly, nonatomic) NSString *bundleIdentifierForCurrentPlatform; // ivar: _bundleIdentifierForCurrentPlatform


+(id)appExistsButIsUnavailableOnCurrentPlatform;
+(id)matchWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 appIsUnavailableOnCurrentPlatform:(BOOL)arg1 ;


@end


#endif