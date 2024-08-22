// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTIMEINTERVALCONTENTITEM_H
#define WFTIMEINTERVALCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFTimeInterval.h"

@interface WFTimeIntervalContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFTimeInterval *timeInterval;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif