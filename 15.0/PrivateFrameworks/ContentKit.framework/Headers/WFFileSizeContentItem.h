// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFFILESIZECONTENTITEM_H
#define WFFILESIZECONTENTITEM_H

@protocol WFContentItemClass;


#import "WFContentItem.h"
#import "WFFileSize.h"

@interface WFFileSizeContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFFileSize *fileSize;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif