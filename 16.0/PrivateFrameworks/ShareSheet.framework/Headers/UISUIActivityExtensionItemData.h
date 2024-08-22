// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISUIACTIVITYEXTENSIONITEMDATA_H
#define UISUIACTIVITYEXTENSIONITEMDATA_H

@class NSMutableDictionary, NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UISUIActivityExtensionItemData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableDictionary *attachmentNamesByItemUUID; // ivar: _attachmentNamesByItemUUID
@property (readonly, nonatomic) NSMutableDictionary *dataTypesByItemUUID; // ivar: _dataTypesByItemUUID
@property (retain, nonatomic) NSArray *extensionItems; // ivar: _extensionItems
@property (readonly, nonatomic) *__CFDictionary itemProviderOrExtensionItemWithMetadataToUUID; // ivar: _itemProviderOrExtensionItemWithMetadataToUUID
@property (retain, nonatomic) NSDictionary *openURLAnnotationsByURL; // ivar: _openURLAnnotationsByURL
@property (readonly, nonatomic) NSMutableDictionary *previewImageDataByItemUUID; // ivar: _previewImageDataByItemUUID
@property (readonly, nonatomic) NSMutableDictionary *previewImagesByItemUUID; // ivar: _previewImagesByItemUUID
@property (readonly, nonatomic) NSMutableDictionary *subjectsByItemUUID; // ivar: _subjectsByItemUUID


+(BOOL)supportsSecureCoding;
+(id)_extensionItemsByPreparingToSendExtensionItems:(id)arg0 toDestinationExtension:(id)arg1 ;
+(id)_onBackgroundQueue_extensionItemsByPreparingToSendExtensionItems:(id)arg0 toDestinationExtension:(id)arg1 ;
-(id)_getItemUUIDForItem:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)_uuidMappingDataForTemporaryAttachmentToExtensionItem:(id)arg0 attachments:(id)arg1 ;
-(id)allDataTypes;
-(id)attachmentNameForItem:(id)arg0 ;
-(id)dataTypeForItem:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)previewImageDataForItem:(id)arg0 ;
-(id)previewImageForItem:(id)arg0 ;
-(id)subjectForItem:(id)arg0 ;
-(void)_appendTemporaryUUIDMappingAttachmentToExtensionItem:(id)arg0 ;
-(void)_changeUUIDMappingFromExtensionItems:(id)arg0 toClonedExtensionItems:(id)arg1 ;
-(void)_loadItemProviderOrExtensionItemWithMetadataToUUIDFromTemporaryUUIDMappingAttachedToExtensionItems:(id)arg0 ;
-(void)_removeTemporaryUUIDMappingAttachmentFromExtensionItems:(id)arg0 ;
-(void)_setItemUUID:(id)arg0 forItem:(id)arg1 ;
-(void)addAttachmentName:(id)arg0 forItem:(id)arg1 ;
-(void)addDataType:(id)arg0 forItem:(id)arg1 ;
-(void)addPreviewImage:(id)arg0 forItem:(id)arg1 ;
-(void)addPreviewImageData:(id)arg0 forItem:(id)arg1 ;
-(void)addSubject:(id)arg0 forItem:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareForSendingAsCompletionToHostWithAuditToken:(struct ? )arg0 ;
-(void)prepareForSendingToExtension:(id)arg0 ;


@end


#endif