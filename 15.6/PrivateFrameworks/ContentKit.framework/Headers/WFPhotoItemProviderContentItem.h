// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPHOTOITEMPROVIDERCONTENTITEM_H
#define WFPHOTOITEMPROVIDERCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFNSItemProviderContentItem.h"

@interface WFPhotoItemProviderContentItem : WFNSItemProviderContentItem <WFContentItemClass>





+(id)contentCategories;
+(id)countDescription;
+(id)itemWithItemProviderItem:(id)arg0 photoMediaFileRepresentation:(id)arg1 assetIdentifier:(id)arg2 ;
+(id)outputTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)outputTypes;


@end


#endif