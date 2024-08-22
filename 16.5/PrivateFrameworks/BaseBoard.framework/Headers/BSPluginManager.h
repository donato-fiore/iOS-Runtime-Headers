// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSPLUGINMANAGER_H
#define BSPLUGINMANAGER_H

@class NSBundle, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface BSPluginManager : NSObject

@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, copy, nonatomic) NSArray *pluginBundles; // ivar: _pluginBundles
@property (readonly, copy, nonatomic) NSString *pluginDirectory; // ivar: _pluginDirectory


+(id)mainManager;
-(id)description;
-(id)pluginBundleForIdentifier:(id)arg0 ;
-(id)pluginBundleForName:(id)arg0 type:(id)arg1 ;
-(id)pluginBundlesForType:(id)arg0 ;


@end


#endif