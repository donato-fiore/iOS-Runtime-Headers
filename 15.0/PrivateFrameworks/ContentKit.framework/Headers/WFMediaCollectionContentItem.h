// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMEDIACOLLECTIONCONTENTITEM_H
#define WFMEDIACOLLECTIONCONTENTITEM_H

@class MPMediaItemCollection;
@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFMediaCollectionContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) MPMediaItemCollection *collection;


+(id)contentCategories;
+(id)countDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;


@end


#endif