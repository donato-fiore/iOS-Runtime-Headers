// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIINTERVALSETDEFINITION_H
#define FIINTERVALSETDEFINITION_H

@class NSArray;
@protocol FIDictionaryRepresentable;

#import <Foundation/Foundation.h>


@interface FIIntervalSetDefinition : NSObject <FIDictionaryRepresentable>



@property (readonly, nonatomic) NSUInteger intervalCount;
@property (readonly, nonatomic) NSArray *intervalDefinitions; // ivar: _intervalDefinitions
@property (readonly, nonatomic) NSInteger repeatCount; // ivar: _repeatCount
@property (readonly, nonatomic) NSInteger setType; // ivar: _setType


+(id)definitionFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)byAddingIntervalDefinition:(id)arg0 ;
-(id)byChangingRepeatCount:(NSInteger)arg0 ;
-(id)byChangingSetType:(NSInteger)arg0 ;
-(id)byInsertingIntervalDefinition:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)byRemovingIntervalDefinitionAtIndex:(NSUInteger)arg0 ;
-(id)byReplacingIntervalDefinitionAtIndex:(NSUInteger)arg0 withIntervalDefinition:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithIntervalDefinitions:(id)arg0 repeatCount:(NSInteger)arg1 setType:(NSInteger)arg2 ;
-(id)intervalAtIndex:(NSUInteger)arg0 ;


@end


#endif