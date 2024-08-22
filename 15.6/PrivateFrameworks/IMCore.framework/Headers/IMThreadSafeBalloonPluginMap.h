// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTHREADSAFEBALLOONPLUGINMAP_H
#define IMTHREADSAFEBALLOONPLUGINMAP_H

@class NSArray, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMThreadSafeBalloonPluginMap : NSObject

@property (readonly, nonatomic) NSArray *allIdentifiers;
@property (readonly, nonatomic) NSArray *allPlugins;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // ivar: _dataQueue
@property (readonly, nonatomic) NSDictionary *dictionaryMapCopy;
@property (retain, nonatomic) NSMutableDictionary *map; // ivar: _map
@property (readonly, nonatomic) NSUInteger pluginCount; // ivar: _pluginCount


-(NSUInteger)count;
-(id)initWithConcurrentDataQueue:(id)arg0 ;
-(id)pluginForIdentifier:(id)arg0 ;
-(void)removePluginWithIdentifier:(id)arg0 ;
-(void)removePluginsWithIdentifiers:(id)arg0 ;
-(void)setPlugin:(id)arg0 forIdentifier:(id)arg1 ;
-(void)updateWithMap:(id)arg0 ;


@end


#endif