// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTWATCHKITAPPDEFINITION_H
#define BLTWATCHKITAPPDEFINITION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BLTWatchKitAppDefinition : NSObject

@property (readonly, nonatomic) NSString *containerBundleID; // ivar: _containerBundleID
@property (readonly, nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (readonly, nonatomic) BOOL runsIndependently; // ivar: _runsIndependently
@property (readonly, nonatomic) NSString *watchKitAppBundleID; // ivar: _watchKitAppBundleID


-(id)initWithContainerBundleID:(id)arg0 watchKitAppBundleID:(id)arg1 isInstalled:(BOOL)arg2 runsIndependently:(BOOL)arg3 ;


@end


#endif