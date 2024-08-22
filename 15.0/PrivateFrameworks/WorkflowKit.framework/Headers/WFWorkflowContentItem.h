// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWCONTENTITEM_H
#define WFWORKFLOWCONTENTITEM_H

@class WFGenericFileContentItem;
@protocol WFContentItemClass;


#import "WFWorkflowReference.h"

@interface WFWorkflowContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFWorkflowReference *workflowReference;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(id)actionCount;
-(id)defaultSourceForRepresentation:(id)arg0 ;
-(id)folderName;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)workflowIcon;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;


@end


#endif