// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGENERICFILECONTENTITEM_H
#define WFGENERICFILECONTENTITEM_H

@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFGenericFileContentItem : WFContentItem <WFContentItemClass>





+(id)contentCategories;
+(id)itemWithSerializedItem:(id)arg0 forType:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 cachingIdentifier:(id)arg4 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)isContent;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif