// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFIMAGECONTENTITEM_H
#define WFIMAGECONTENTITEM_H

@protocol WFContentItemClass;


#import "WFGenericFileContentItem.h"
#import "WFImage.h"
#import "WFFileType.h"

@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass>



@property (readonly, nonatomic) WFImage *image;
@property (readonly, nonatomic) BOOL imageIsAnimated;
@property (nonatomic) BOOL isScreenshot; // ivar: _isScreenshot
@property (retain, nonatomic) WFFileType *preferredFileType; // ivar: _preferredFileType
@property (readonly, nonatomic) CGSize size;


+(BOOL)supportsSecureCoding;
+(id)contentCategories;
+(id)countDescription;
+(id)itemWithFile:(id)arg0 preferredFileType:(id)arg1 ;
+(id)itemWithImage:(id)arg0 named:(id)arg1 preferredFileType:(id)arg2 ;
+(id)itemWithSerializedItem:(id)arg0 forType:(id)arg1 named:(id)arg2 attributionSet:(id)arg3 cachingIdentifier:(id)arg4 ;
+(id)outputTypes;
+(id)ownedPasteboardTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)stringConversionBehavior;
+(id)typeDescription;
-(BOOL)canGenerateRepresentationForType:(id)arg0 ;
-(BOOL)getListAltText:(id)arg0 ;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(BOOL)isContent;
-(BOOL)isObjectBacked;
-(id)dateTaken;
-(id)generateFileRepresentationForType:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)generateImageFileForType:(id)arg0 includingMetadata:(BOOL)arg1 compressionQuality:(id)arg2 error:(*id)arg3 ;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)height;
-(id)initWithCoder:(id)arg0 ;
-(id)location;
-(id)make;
-(id)metadata;
-(id)model;
-(id)orientation;
-(id)preferredObjectType;
-(id)width;
-(void)copyStateToItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
// -(void)generateFileRepresentation:(id)arg0 options:(unk)arg1 forType:(id)arg2  ;
// -(void)generateObjectRepresentation:(id)arg0 options:(unk)arg1 forClass:(id)arg2  ;


@end


#endif