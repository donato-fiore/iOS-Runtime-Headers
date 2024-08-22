// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIINTERVALWORKOUTDEFINITION_H
#define FIINTERVALWORKOUTDEFINITION_H

@class NSUUID, NSString, NSArray;
@protocol FIDictionaryRepresentable;

#import <Foundation/Foundation.h>


@interface FIIntervalWorkoutDefinition : NSObject <FIDictionaryRepresentable>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger intervalCount;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *sets; // ivar: _sets


+(id)definitionFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)intervalWorkoutDefinition;
-(id)byAddingIntervalDefinition:(id)arg0 toSetIndex:(NSUInteger)arg1 ;
-(id)byAddingSetDefinition:(id)arg0 ;
-(id)byChangingName:(id)arg0 ;
-(id)byInsertingIntervalDefinition:(id)arg0 atIndexPath:(id)arg1 ;
-(id)byInsertingSetDefinition:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)byRemovingIntervalDefinitionAtIndexPath:(id)arg0 ;
-(id)byRemovingSetDefinitionAtIndex:(NSUInteger)arg0 ;
-(id)byReplacingIntervalDefinitionAtIndexPath:(id)arg0 withIntervalDefinition:(id)arg1 ;
-(id)byReplacingSetDefinitionAtIndex:(NSUInteger)arg0 withSetDefinition:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithName:(id)arg0 identifier:(id)arg1 sets:(id)arg2 ;
-(id)intervalDefinitionForIntervalAtIndex:(NSInteger)arg0 ;


@end


#endif