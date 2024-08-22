// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDSIMPLEHASH_H
#define AMDSIMPLEHASH_H

@class NSMutableDictionary, NSData;

#import <Foundation/Foundation.h>


@interface AMDSimpleHash : NSObject

@property (retain, nonatomic) NSMutableDictionary *collisionMap; // ivar: _collisionMap
@property (nonatomic) *NSUInteger keys; // ivar: _keys
@property (retain, nonatomic) NSData *keysStorage; // ivar: _keysStorage
@property (nonatomic) char * metadata; // ivar: _metadata
@property (retain, nonatomic) NSData *metadataStorage; // ivar: _metadataStorage
@property (nonatomic) unsigned int moduloBase; // ivar: _moduloBase
@property (nonatomic) unsigned int numEntries; // ivar: _numEntries
@property (nonatomic) *NSUInteger values; // ivar: _values
@property (retain, nonatomic) NSData *valuesStorage; // ivar: _valuesStorage


+(unsigned int)getBase:(unsigned int)arg0 ;
-(BOOL)addForKey:(NSUInteger)arg0 theValue:(NSUInteger)arg1 ;
-(BOOL)getValueForKey:(NSUInteger)arg0 into:(*NSUInteger)arg1 ;
-(BOOL)removeKey:(NSUInteger)arg0 andSaveValueInto:(*NSUInteger)arg1 ;
-(id)initWithCapacity:(unsigned int)arg0 ;
-(unsigned int)count;
-(void)getAllKeysInto:(*NSUInteger)arg0 ;
-(void)removeAllKeys;


@end


#endif