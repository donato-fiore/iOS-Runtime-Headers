// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFCONTEXTMAPTABLE_H
#define _PFCONTEXTMAPTABLE_H


#import <Foundation/Foundation.h>

#import "_PFModelMap.h"

@interface _PFContextMapTable : NSObject {
    NSUInteger _slotLimit;
    *__CFDictionary _objectsByTemporaryID;
    ? _objectsByPermanentObjectID;
    ? _objectsBy64bitPKID;
    *NSUInteger _capacitiesFor64bitPKMappings;
    _contextMapTableFlags _flags;
    _PFModelMap *_modelMap;
}




-(void)dealloc;


@end


#endif