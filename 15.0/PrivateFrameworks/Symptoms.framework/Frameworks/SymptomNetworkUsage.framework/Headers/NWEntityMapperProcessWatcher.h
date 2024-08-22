// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWENTITYMAPPERPROCESSWATCHER_H
#define NWENTITYMAPPERPROCESSWATCHER_H

@class NSMutableDictionary, NSString;


#import "NWEntityMapper.h"

@interface NWEntityMapperProcessWatcher : NWEntityMapper {
    NSMutableDictionary *_uuidProcessNameMap;
    NSString *_niluuidProcessName;
}




-(id)identifierForUUID:(id)arg0 derivation:(*int)arg1 ;
-(id)init;
-(id)stateDictionary;
-(void)_uuidProcessNameMapPrune;
-(void)noteUUID:(id)arg0 forProcessName:(id)arg1 ;


@end


#endif