// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFBOOLEANCONTENTITEM_H
#define WFBOOLEANCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFNumberContentItem.h"

@interface WFBooleanContentItem : WFNumberContentItem <WFContentItemClass>





+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(id)allowedClassesForDecodingInternalRepresentations;


@end


#endif