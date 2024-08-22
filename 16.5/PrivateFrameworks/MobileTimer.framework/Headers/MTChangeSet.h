// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTCHANGESET_H
#define MTCHANGESET_H

@class NSDictionary, NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface MTChangeSet : NSObject

@property (retain, nonatomic) NSDictionary *changeDictionary; // ivar: _changeDictionary
@property (retain, nonatomic) NSSet *changedProperties; // ivar: _changedProperties
@property (readonly, nonatomic) NSArray *changes;


+(id)changeSetWithChangesFromObject:(id)arg0 toObject:(id)arg1 ;
+(id)changeSetWithChangesFromObject:(id)arg0 toObject:(id)arg1 inProperties:(id)arg2 ;
+(id)dictionaryFromChanges:(id)arg0 ;
-(BOOL)_isEqualToChangeSet:(id)arg0 checkOriginalValues:(BOOL)arg1 ;
-(BOOL)hasChangeForProperty:(id)arg0 ;
-(BOOL)hasChangesInCommonWithChangeSet:(id)arg0 ;
-(BOOL)hasChangesInProperties:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToChangeSet:(id)arg0 ;
-(id)_deserializer;
-(id)changeSetByAddingChangeSet:(id)arg0 ;
-(id)changedValueForProperty:(id)arg0 hasProperty:(*BOOL)arg1 ;
-(id)description;
-(id)deserializedChangedValueForProperty:(id)arg0 hasProperty:(*BOOL)arg1 ;
-(id)initWithChangeDictionary:(id)arg0 ;
-(id)initWithChanges:(id)arg0 ;


@end


#endif