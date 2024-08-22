// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFEVERNOTECONTENTITEM_H
#define WFEVERNOTECONTENTITEM_H

@class WFContentItem, NSDictionary, NSString, WFFileType, WFObjectType;
@protocol WFContentItemClass;


#import "ENNoteRef.h"

@interface WFEvernoteContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) ENNoteRef *noteRef;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;


+(id)contentCategories;
+(id)countDescription;
+(id)itemWithNoteRef:(id)arg0 note:(id)arg1 ;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
+(void)createNoteWithContent:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)canEncodeWithCoder:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
-(id)name;
// -(void)generateFileRepresentations:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentations:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif