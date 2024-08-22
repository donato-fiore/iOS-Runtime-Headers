// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWENTITYMAPPERDYNAMICLAUNCHSERVICES_H
#define NWENTITYMAPPERDYNAMICLAUNCHSERVICES_H



#import "NWEntityMapperNEHelper.h"
#import "EntityMapCache.h"

@interface NWEntityMapperDynamicLaunchServices : NWEntityMapperNEHelper {
    EntityMapCache *_entityMap;
}




-(id)_attemptConvertingPluginNameToContainingAppName:(id)arg0 ;
-(id)_identifierForUUID:(id)arg0 fromSet:(id)arg1 ;
-(id)handleNewUUID:(id)arg0 ;
-(id)identifierForUUID:(id)arg0 derivation:(*int)arg1 ;
-(id)init;
-(id)stateDictionary;


@end


#endif