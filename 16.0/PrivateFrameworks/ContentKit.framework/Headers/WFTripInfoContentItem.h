// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRIPINFOCONTENTITEM_H
#define WFTRIPINFOCONTENTITEM_H

@class NSString;
@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFTripInfo.h"

@interface WFTripInfoContentItem : WFContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
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