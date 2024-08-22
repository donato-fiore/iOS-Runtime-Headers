// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLISTCONTENTITEM_H
#define WFLISTCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFListItem.h"

@interface WFListContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFListItem *listItem;


+(id)contentCategories;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)richListTitle;


@end


#endif