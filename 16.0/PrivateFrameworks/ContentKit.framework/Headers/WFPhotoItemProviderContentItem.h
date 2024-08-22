// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPHOTOITEMPROVIDERCONTENTITEM_H
#define WFPHOTOITEMPROVIDERCONTENTITEM_H

@class NSString;
@protocol WFContentItemClass;


#import "WFNSItemProviderContentItem.h"

@interface WFPhotoItemProviderContentItem : WFNSItemProviderContentItem <WFContentItemClass>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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