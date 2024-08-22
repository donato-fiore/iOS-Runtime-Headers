// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVCALENDARCONTENTITEM_H
#define WFVCALENDARCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"

@interface WFVCalendarContentItem : WFGenericFileContentItem <WFContentItemClass>





+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif