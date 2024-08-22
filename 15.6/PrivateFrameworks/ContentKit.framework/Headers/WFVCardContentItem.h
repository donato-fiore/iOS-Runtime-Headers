// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVCARDCONTENTITEM_H
#define WFVCARDCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"

@interface WFVCardContentItem : WFGenericFileContentItem <WFContentItemClass>





+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(id)generateObjectRepresentationsForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif