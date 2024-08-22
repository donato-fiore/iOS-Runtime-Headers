// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHKWORKOUTCONTENTITEM_H
#define WFHKWORKOUTCONTENTITEM_H

@class WFContentItem;
@protocol WFContentItemClass;



@interface WFHKWorkoutContentItem : WFContentItem <WFContentItemClass>





+(id)contentCategories;
+(id)countDescription;
+(id)itemWithWorkout:(id)arg0 ;
+(id)itemWithWorkout:(id)arg0 distanceUnit:(id)arg1 caloriesUnit:(id)arg2 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(id)readableActivityType;
-(id)sourceName;
-(id)workout;
-(id)workoutContainer;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif