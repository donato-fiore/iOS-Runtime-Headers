// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWENTITYMAPPERSTATICASSIGNMENT_H
#define NWENTITYMAPPERSTATICASSIGNMENT_H

@class NSMutableDictionary;


#import "NWEntityMapper.h"

@interface NWEntityMapperStaticAssignment : NWEntityMapper {
    NSMutableDictionary *_staticUUIDToBundleIDMap;
}




-(id)identifierForUUID:(id)arg0 derivation:(*int)arg1 ;
-(id)initWithFlavor:(id)arg0 ;


@end


#endif