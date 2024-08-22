// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUEDITPLUGINMANAGER_H
#define PUEDITPLUGINMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PUEditPluginManager : NSObject

@property (readonly) NSUInteger mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSArray *plugins; // ivar: _plugins


+(id)sharedManagerForMediaType:(NSUInteger)arg0 ;
-(BOOL)hasMarkupPlugin;
-(BOOL)hasNonMarkupPlugins;
-(BOOL)hasPlugins;
-(id)_allowedPluginTypes;
-(id)_initWithMediaType:(NSUInteger)arg0 ;
-(id)pluginActivities;
-(id)pluginActivitiesExceptMarkup;
-(void)_discoveredAvailableExtensions:(id)arg0 ;
-(void)rediscoverAvailablePlugins;


@end


#endif