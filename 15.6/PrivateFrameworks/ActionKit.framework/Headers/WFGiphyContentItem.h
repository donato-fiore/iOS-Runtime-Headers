// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFGIPHYCONTENTITEM_H
#define WFGIPHYCONTENTITEM_H

@class WFGenericFileContentItem;
@protocol WFContentItemClass;



@interface WFGiphyContentItem : WFGenericFileContentItem <WFContentItemClass>





+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(id)object;
-(id)preferredFileType;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)getPreferredFileSize:(id)arg0 ;


@end


#endif