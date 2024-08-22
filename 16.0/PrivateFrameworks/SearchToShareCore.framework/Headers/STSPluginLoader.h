// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSPLUGINLOADER_H
#define STSPLUGINLOADER_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface STSPluginLoader : NSObject

@property (retain, nonatomic) NSCache *pluginCache; // ivar: _pluginCache


-(id)init;
-(id)pluginWithName:(id)arg0 ;


@end


#endif