// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAVASSETCONTENTITEM_H
#define WFAVASSETCONTENTITEM_H

@class AVAsset;
@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"

@interface WFAVAssetContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) AVAsset *asset;


+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
-(id)duration;
-(id)frameRate;
-(id)generateExportSessionForType:(id)arg0 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)metadataItemForCommonKey:(id)arg0 ;
-(id)preferredFileType;
-(id)supportedTypes;
// -(void)generateFileRepresentation:(id)arg0 forType:(unk)arg1 metadata:(id)arg2 options:(id)arg3  ;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)getPreferredFileSize:(id)arg0 ;


@end


#endif