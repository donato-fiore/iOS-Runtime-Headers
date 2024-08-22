// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPOSITION_H
#define CKCOMPOSITION_H

@class NSDictionary, NSString, NSArray, IMPluginPayload, NSAttributedString;

#import <Foundation/Foundation.h>


@interface CKComposition : NSObject

@property (copy, nonatomic) NSDictionary *bizIntent; // ivar: _bizIntent
@property (readonly, nonatomic, getter=isExpirableComposition) BOOL expirableComposition;
@property (copy, nonatomic) NSString *expressiveSendStyleID; // ivar: _expressiveSendStyleID
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasNonwhiteSpaceContent;
@property (nonatomic) BOOL isFromExternalSource; // ivar: _isFromExternalSource
@property (readonly, nonatomic) NSArray *mediaObjects;
@property (readonly, nonatomic) NSArray *pasteboardItemProviders;
@property (readonly, nonatomic) NSArray *pluginDisplayContainers;
@property (readonly, copy, nonatomic) NSString *previewText;
@property (readonly, nonatomic, getter=isSaveable) BOOL saveable;
@property (readonly, nonatomic, getter=isSendAnimated) BOOL sendAnimated;
@property (copy, nonatomic) IMPluginPayload *shelfPluginPayload; // ivar: _shelfPluginPayload
@property (nonatomic) BOOL shouldHideClearPluginButton; // ivar: _shouldHideClearPluginButton
@property (copy, nonatomic) NSAttributedString *subject; // ivar: _subject
@property (copy, nonatomic) NSAttributedString *text; // ivar: _text
@property (readonly, nonatomic, getter=isTextOnly) BOOL textOnly;


+(BOOL)_pasteRTFDocumentWithItemProvider:(id)arg0 completionHandler:(id)arg1 ;
+(BOOL)_shouldCreateMediaObjectForUTIType:(id)arg0 ;
+(id)_mediaObjectClassToUTIsForTypes:(id)arg0 ;
+(id)_savedCompositionForGUID:(id)arg0 readUsingBlock:(id)arg1 ;
+(id)_temporaryURLFromURL:(id)arg0 ;
+(id)_transcoderUserInfoFor:(id)arg0 filename:(id)arg1 type:(id)arg2 ;
+(id)_trimUnwantedAttributesFromAttributedString:(id)arg0 ;
+(id)audioCompositionWithMediaObject:(id)arg0 ;
+(id)composition;
+(id)compositionForMessageParts:(id)arg0 preserveSubject:(BOOL)arg1 contextIdentifier:(id)arg2 ;
+(id)compositionWithMSMessage:(id)arg0 appExtensionIdentifier:(id)arg1 ;
+(id)compositionWithMediaObject:(id)arg0 subject:(id)arg1 ;
+(id)compositionWithMediaObjects:(id)arg0 subject:(id)arg1 ;
+(id)compositionWithPluginDisplayContainer:(id)arg0 subject:(id)arg1 ;
+(id)compositionWithShelfPluginPayload:(id)arg0 ;
+(id)expirableCompositionWithMediaObject:(id)arg0 ;
+(id)finalCompositionFromAllCompositions:(id)arg0 ;
+(id)newExpirableCompositionWithText:(id)arg0 subject:(id)arg1 shelfPluginPayload:(id)arg2 ;
+(id)pasteboardTypesForItemProvider:(id)arg0 ;
+(id)photoPickerCompositionWithMediaObject:(id)arg0 ;
+(id)photoPickerCompositionWithMediaObjects:(id)arg0 ;
+(id)quickImageCompositionWithMediaObject:(id)arg0 ;
+(id)richestMediaTypeForItemProvider:(id)arg0 ;
+(id)savedCompositionForGUID:(id)arg0 ;
+(id)stickerCompositionWithMediaObjects:(id)arg0 ;
+(void)__ck_valueForItemClass:(Class)arg0 forItemProvider:(id)arg1 completion:(id)arg2 ;
+(void)compositionFromItemProviders:(id)arg0 completionHandler:(id)arg1 ;
+(void)dataForPasteboardType:(id)arg0 forItemProvider:(id)arg1 completion:(id)arg2 ;
+(void)deleteCompositionWithGUID:(id)arg0 ;
+(void)filenameForType:(id)arg0 forItemProvider:(id)arg1 completionHandler:(id)arg2 ;
+(void)filenameFromURLTypeForType:(id)arg0 forItemProvider:(id)arg1 completionHandler:(id)arg2 ;
+(void)mediaObjectForItemProvider:(id)arg0 completion:(id)arg1 ;
+(void)mediaObjectFromItemAtURL:(id)arg0 filename:(id)arg1 completion:(id)arg2 ;
+(void)mediaObjectFromPhotosAsset:(id)arg0 completion:(id)arg1 ;
+(void)pluginDisplayContainerForItemProvider:(id)arg0 completion:(id)arg1 ;
+(void)requestCompositionFromItemProviders:(id)arg0 completion:(id)arg1 ;
+(void)requestFilenameForType:(id)arg0 forItemProvider:(id)arg1 completion:(id)arg2 ;
+(void)requestMediaObjectForItemProvider:(id)arg0 type:(id)arg1 completion:(id)arg2 ;
+(void)requestMediaObjectsForAttributedString:(id)arg0 completion:(id)arg1 ;
+(void)requestPluginDisplayContainerForItemProvider:(id)arg0 completion:(id)arg1 ;
+(void)updateComposition:(*id)arg0 fromItemProvider:(id)arg1 completion:(id)arg2 ;
-(BOOL)_saveCompositionData:(id)arg0 atURL:(id)arg1 forGUID:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)balloonViewClass;
-(NSUInteger)hash;
-(id)_compositionByAppendingText:(id)arg0 isExpirable:(BOOL)arg1 shelfPluginPayload:(id)arg2 ;
-(id)_compositionParts;
-(id)_messageFromPayload:(id)arg0 firstGUID:(id)arg1 ;
-(id)compositionByAppendingComposition:(id)arg0 ;
-(id)compositionByAppendingMediaObject:(id)arg0 ;
-(id)compositionByAppendingMediaObjects:(id)arg0 ;
-(id)compositionByAppendingPluginDisplayContainer:(id)arg0 ;
-(id)compositionByAppendingText:(id)arg0 ;
-(id)compositionByRemovingMediaObjects:(id)arg0 ;
-(id)compositionByReplacingMediaObject:(id)arg0 withMediaObject:(id)arg1 ;
-(id)compositionWithExpressiveSendStyleID:(id)arg0 ;
-(id)description;
-(id)externalSourceComposition;
-(id)initWithText:(id)arg0 subject:(id)arg1 ;
-(id)initWithText:(id)arg0 subject:(id)arg1 shelfPluginPayload:(id)arg2 ;
-(id)initWithText:(id)arg0 subject:(id)arg1 shelfPluginPayload:(id)arg2 bizIntent:(id)arg3 ;
-(id)messageWithGUID:(id)arg0 ;
-(id)messageWithGUID:(id)arg0 superFormatText:(id)arg1 superFormatSubject:(id)arg2 fileTransferGUIDs:(id)arg3 mediaObjects:(id)arg4 balloonBundleID:(id)arg5 payloadData:(id)arg6 ;
-(id)messagesFromCompositionFirstGUIDForMessage:(id)arg0 ;
-(id)superFormatSubject;
-(id)superFormatText:(*id)arg0 ;
-(id)superFormatText:(id)arg0 transfterGUIDs:(*id)arg1 mediaObjects:(*id)arg2 ;
-(void)saveCompositionWithGUID:(id)arg0 ;


@end


#endif