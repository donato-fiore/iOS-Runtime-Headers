// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFBACKLIGHTSCENEHOSTENVIRONMENTPROVIDERENTRY_H
#define SBFBACKLIGHTSCENEHOSTENVIRONMENTPROVIDERENTRY_H

@class NSString;
@protocol BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>


@interface SBFBacklightSceneHostEnvironmentProviderEntry : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *environment; // ivar: _environment


+(id)entryWithSceneHostEnvironment:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithSceneHostEnvironment:(id)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif