// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHPLATFORMCORE10PLUGINDATA_H
#define _TTC18HEALTHPLATFORMCORE10PLUGINDATA_H

@class NSManagedObject, NSData, NSSet, NSString;


#import "_TtC18HealthPlatformCore6Plugin.h"

@interface _TtC18HealthPlatformCore10PluginData : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) _TtC18HealthPlatformCore6Plugin *plugin;
@property (nonatomic, copy) NSSet *profiles;
@property (nonatomic, copy) NSString *uniqueIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif