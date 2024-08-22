// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWENTITYMAPPERCOALITIONWATCHER_H
#define NWENTITYMAPPERCOALITIONWATCHER_H

@class NSMutableDictionary;


#import "NWEntityMapper.h"

@interface NWEntityMapperCoalitionWatcher : NWEntityMapper {
    NSMutableDictionary *_uuidCoalitionNameMap;
}




-(BOOL)noteUUID:(id)arg0 forPid:(int)arg1 ;
-(id)identifierForUUID:(id)arg0 derivation:(*int)arg1 ;
-(id)init;
-(void)_uuidCoalitionNameMapPrune;


@end


#endif