// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPMUTABLECOMPONENTDATAREFERENCEMAP_H
#define TSPMUTABLECOMPONENTDATAREFERENCEMAP_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>

#import "_TtC13TSPersistence22TSPMutableReferenceMap.h"

@interface TSPMutableComponentDataReferenceMap : NSObject {
    _TtC13TSPersistence22TSPMutableReferenceMap *_dataToObjectReferenceMap;
    _TtC13TSPersistence22TSPMutableReferenceMap *_objectToDataReferenceMap;
    NSMutableIndexSet *_objectIdentifiersWithoutUUID;
    *void _resetObjectIdentifiers;
}




-(NSInteger)addReferenceFromObjectIdentifier:(NSInteger)arg0 toDataIdentifier:(NSInteger)arg1 objectHasUUID:(BOOL)arg2 ;
-(NSInteger)incrementReferenceFromObjectIdentifier:(NSInteger)arg0 toDataIdentifier:(NSInteger)arg1 objectHasUUID:(BOOL)arg2 increment:(NSUInteger)arg3 ;
-(id)init;
-(id)initWithDataCapacity:(NSInteger)arg0 objectCapacity:(NSInteger)arg1 ;
-(id)initWithDataToObjectReferenceMap:(id)arg0 objectToDataReferenceMap:(id)arg1 objectIdentifiersWithoutUUID:(id)arg2 ;
-(id)makeComponentDataReferenceMap;
-(void)dealloc;
-(void)objectIdentifier:(NSInteger)arg0 didResetToObjectIdentifier:(NSInteger)arg1 ;


@end


#endif