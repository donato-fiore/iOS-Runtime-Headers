// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTRIPINFOCONTENTITEM_H
#define WFTRIPINFOCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFTripInfo.h"

@interface WFTripInfoContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFTripInfo *tripInfo;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(id)arrivalTime;
-(id)distance;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)routeName;
-(id)travelTime;


@end


#endif