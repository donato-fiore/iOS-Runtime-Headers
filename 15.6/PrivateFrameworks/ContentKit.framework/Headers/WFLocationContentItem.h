// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOCATIONCONTENTITEM_H
#define WFLOCATIONCONTENTITEM_H

@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFLocationContentItem : WFContentItem <WFContentItemClass>





+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(BOOL)includesFileRepresentationInSerializedItem;
-(id)preferredFileType;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)getMKMapSnapshotImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)getMKMapSnapshotImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 named:(id)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif