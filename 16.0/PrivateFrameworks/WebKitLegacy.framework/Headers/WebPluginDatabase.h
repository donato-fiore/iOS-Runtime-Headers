// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBPLUGINDATABASE_H
#define WEBPLUGINDATABASE_H

@class NSMutableDictionary, NSMutableSet, NSArray;

#import <Foundation/Foundation.h>


@interface WebPluginDatabase : NSObject {
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}




+(id)_defaultPlugInPaths;
+(id)sharedDatabase;
+(id)sharedDatabaseIfExists;
+(void)closeSharedDatabase;
+(void)setAdditionalWebPlugInPaths:(id)arg0 ;
-(BOOL)isMIMETypeRegistered:(id)arg0 ;
-(id)_plugInPaths;
-(id)_scanForNewPlugins;
-(id)init;
-(id)pluginForExtension:(id)arg0 ;
-(id)pluginForMIMEType:(id)arg0 ;
-(id)plugins;
-(void)_addPlugin:(id)arg0 ;
-(void)_removePlugin:(id)arg0 ;
-(void)addPluginInstanceView:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)destroyAllPluginInstanceViews;
-(void)refresh;
-(void)removePluginInstanceView:(id)arg0 ;
-(void)removePluginInstanceViewsFor:(id)arg0 ;
-(void)setPlugInPaths:(id)arg0 ;


@end


#endif