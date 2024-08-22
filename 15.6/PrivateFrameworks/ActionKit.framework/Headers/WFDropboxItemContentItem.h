// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDROPBOXITEMCONTENTITEM_H
#define WFDROPBOXITEMCONTENTITEM_H

@class WFGenericFileContentItem;
@protocol WFContentItemClass;



@interface WFDropboxItemContentItem : WFGenericFileContentItem <WFContentItemClass>





+(BOOL)isAvailableOnPlatform:(NSInteger)arg0 ;
+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)canEncodeWithCoder:(id)arg0 ;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(BOOL)hasStringOutput;
-(id)metadata;
-(id)outputTypes;
-(id)overrideFilename;
-(id)representedFileType;
-(id)representedFilename;
-(id)richListTitle;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;
-(void)getPreferredFileExtension:(id)arg0 ;
-(void)getPreferredFileSize:(id)arg0 ;


@end


#endif