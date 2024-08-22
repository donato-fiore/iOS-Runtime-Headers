// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMEDIACOLLECTIONCONTENTITEM_H
#define WFMEDIACOLLECTIONCONTENTITEM_H

@class MPMediaItemCollection, NSString;
@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFMediaCollectionContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) MPMediaItemCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)contentCategories;
+(id)countDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;


@end


#endif