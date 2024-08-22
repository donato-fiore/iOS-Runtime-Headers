// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBOOLEANCONTENTITEM_H
#define WFBOOLEANCONTENTITEM_H

@class NSString;
@protocol WFContentItemClass;


#import "WFNumberContentItem.h"

@interface WFBooleanContentItem : WFNumberContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(id)allowedClassesForDecodingInternalRepresentations;


@end


#endif