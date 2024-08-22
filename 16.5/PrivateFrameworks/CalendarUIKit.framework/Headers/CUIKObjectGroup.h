// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKOBJECTGROUP_H
#define CUIKOBJECTGROUP_H

@class NSMutableDictionary, NSDictionary, CalDefaultDictionary;

#import <Foundation/Foundation.h>


@interface CUIKObjectGroup : NSObject

@property (retain) NSMutableDictionary *objectMap; // ivar: _objectMap
@property (retain) NSDictionary *originalObjectMap; // ivar: _originalObjectMap
@property (retain) CalDefaultDictionary *spawnedObjectIdentifiers; // ivar: _spawnedObjectIdentifiers


+(id)_identifierForObject:(id)arg0 ;
+(id)_objectMapForObjects:(id)arg0 ;
-(BOOL)_newSeriesSpawnedWithObject:(id)arg0 ;
-(BOOL)objectsBelongInGroup:(id)arg0 ;
-(id)description;
-(id)initWithObjects:(id)arg0 ;
-(id)objectIdentifiers;
-(id)objects;
-(id)originalObjects;
-(id)shiftedOccurrencePreviouslySpawnedByIdentifier:(id)arg0 ;
-(void)newObject:(id)arg0 spawnedFromObject:(id)arg1 ;


@end


#endif