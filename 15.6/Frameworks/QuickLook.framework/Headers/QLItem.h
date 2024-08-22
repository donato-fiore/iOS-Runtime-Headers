// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLITEM_H
#define QLITEM_H

@class NSString, QLUTIAnalyzer, NSDictionary, UIColor, QLTBitmapFormat, NSURL, FPItem, QLURLHandler, NSNumber, NSData, NSItemProvider, FPSandboxingURLWrapper, NSUUID;
@protocol QLTExtensionThumbnailItem, QLPreviewItemPrivateProtocol, NSSecureCoding, QLPreviewItemDataProvider, QLItemThumbnailGeneratorProtocolInternal;

#import <Foundation/Foundation.h>

#import "QLPreviewItemEditedCopy.h"
#import "QLItemFetcher.h"
#import "QLGeneratorFetcher.h"

@interface QLItem : NSObject <QLTExtensionThumbnailItem, QLPreviewItemPrivateProtocol, NSSecureCoding>

 {
    NSInteger _editedFileExtensionHandle;
}


@property (readonly) NSString *MIMEType;
@property (retain, nonatomic) QLUTIAnalyzer *UTIAnalyzer; // ivar: _UTIAnalyzer
@property (retain) NSDictionary *attachments; // ivar: _attachments
@property (readonly) CGFloat autoPlaybackPosition;
@property (retain, nonatomic) UIColor *backgroundColorOverride; // ivar: _backgroundColorOverride
@property (retain) QLTBitmapFormat *bitmapFormat; // ivar: _bitmapFormat
@property (nonatomic) BOOL canBeEdited; // ivar: _canBeEdited
@property (nonatomic) BOOL canBeShared; // ivar: _canBeShared
@property (nonatomic) BOOL canHandleEditedCopy; // ivar: _canHandleEditedCopy
@property (copy, nonatomic) NSDictionary *clientPreviewOptions; // ivar: _clientPreviewOptions
@property (readonly, copy, nonatomic) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) QLPreviewItemEditedCopy *editedCopy; // ivar: _editedCopy
@property (nonatomic) NSUInteger editedFileBehavior; // ivar: _editedFileBehavior
@property (readonly, nonatomic) NSURL *editedFileURL;
@property (nonatomic) NSInteger editingMode; // ivar: _editingMode
@property (retain, nonatomic) QLItemFetcher *fetcher; // ivar: _fetcher
@property (retain) FPItem *fpItem; // ivar: _fpItem
@property (retain) NSString *generatedItemContentType; // ivar: _generatedItemContentType
@property (nonatomic) NSUInteger generatedPreviewItemType; // ivar: _generatedPreviewItemType
@property NSUInteger generatedReplyType; // ivar: _generatedReplyType
@property (retain) QLURLHandler *generatedURLHandler; // ivar: _generatedURLHandler
@property (retain) QLGeneratorFetcher *generationFetcher; // ivar: _generationFetcher
@property (nonatomic) BOOL hasDeterminedPredictedPreferredContentSizeForOrbPlatter; // ivar: _hasDeterminedPredictedPreferredContentSizeForOrbPlatter
@property (nonatomic) BOOL hasDeterminedShouldUseExtensionThumbnail;
@property (nonatomic) BOOL hasDeterminedShouldUseExtensionThumbnail; // ivar: _hasDeterminedShouldUseExtensionThumbnail
@property (nonatomic) BOOL hasDeterminedThirdPartyPreviewExtensionType;
@property (nonatomic) BOOL hasDeterminedThirdPartyPreviewExtensionType; // ivar: _hasDeterminedThirdPartyPreviewExtensionType
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPromisedItem; // ivar: _isPromisedItem
@property (retain, nonatomic) NSNumber *itemSize; // ivar: _itemSize
@property (retain, nonatomic) QLPreviewItemEditedCopy *lastSavedEditedCopy; // ivar: _lastSavedEditedCopy
@property BOOL needsAccessToExternalResources;
@property BOOL needsAccessToExternalResources; // ivar: _needsAccessToExternalResources
@property (nonatomic) BOOL originalContentWasUpdated; // ivar: _originalContentWasUpdated
@property (retain, nonatomic) NSObject<QLPreviewItemPrivateProtocol> *originalPreviewItem; // ivar: _originalPreviewItem
@property (retain) NSString *password; // ivar: _password
@property (nonatomic) CGSize preferredContentSizeForOrbPlatter; // ivar: _preferredContentSizeForOrbPlatter
@property (nonatomic) NSUInteger previewExtensionType;
@property (nonatomic) NSUInteger previewExtensionType; // ivar: _previewExtensionType
@property (retain, nonatomic) NSString *previewItemContentType; // ivar: _previewItemContentType
@property (retain) NSData *previewItemData; // ivar: _previewItemData
@property (retain) NSObject<QLPreviewItemDataProvider> *previewItemDataProvider; // ivar: _previewItemDataProvider
@property (retain) NSItemProvider *previewItemProvider; // ivar: _previewItemProvider
@property (copy, nonatomic) NSNumber *previewItemProviderProgress; // ivar: _previewItemProviderProgress
@property (retain, nonatomic) NSString *previewItemTitle; // ivar: _previewItemTitle
@property (nonatomic) NSUInteger previewItemType; // ivar: _previewItemType
@property (retain, nonatomic) NSURL *previewItemURL; // ivar: _previewItemURL
@property (readonly) NSURL *previewItemURLForDisplay;
@property (copy, nonatomic) NSDictionary *previewOptions;
@property NSInteger processIdentifier; // ivar: _processIdentifier
@property (retain) NSString *relativePath; // ivar: _relativePath
@property (retain, nonatomic) FPSandboxingURLWrapper *sandboxingURLWrapper; // ivar: _sandboxingURLWrapper
@property (retain) NSString *searchableItemApplicationBundleIdentifier; // ivar: _searchableItemApplicationBundleIdentifier
@property (retain) NSString *searchableItemIdentifier; // ivar: _searchableItemIdentifier
@property (nonatomic) BOOL shouldUseExtensionThumbnail;
@property (nonatomic) BOOL shouldUseExtensionThumbnail; // ivar: _shouldUseExtensionThumbnail
@property (retain) NSString *spotlightQueryString; // ivar: _spotlightQueryString
@property NSUInteger stringEncoding; // ivar: _stringEncoding
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) FPSandboxingURLWrapper *temporaryEditionDirectoryURLWrapper; // ivar: _temporaryEditionDirectoryURLWrapper
@property (retain, nonatomic) NSObject<QLItemThumbnailGeneratorProtocolInternal> *thumbnailGenerator; // ivar: _thumbnailGenerator
@property (nonatomic) BOOL useFullPDFTransition; // ivar: _useFullPDFTransition
@property (nonatomic) BOOL useLoadingTimeout; // ivar: _useLoadingTimeout
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property BOOL wantsPreviewInDebugViewController; // ivar: _wantsPreviewInDebugViewController


+(BOOL)contentTypeConformsToRTFD:(id)arg0 ;
+(BOOL)shouldUseRemoteCollection:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_previewExtensionKindForContentType:(id)arg0 firstPartyExtension:(BOOL)arg1 ;
+(NSUInteger)openInTypeForItem:(id)arg0 appIsContentManaged:(BOOL)arg1 ;
+(id)customExtensionCommunicationEncodedClasses;
+(id)encodedClasses;
+(id)itemWithPreviewItem:(id)arg0 ;
+(id)rtfContentTypes;
+(id)supportedContentTypeIdentifiers;
+(id)supportedContentTypes;
+(id)webContentTypes;
-(BOOL)canBePreviewed;
-(BOOL)canBePrintedWithCustomPrinter;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStandardQuickLookType;
-(BOOL)shouldUseRemoteViewController;
-(BOOL)useExtensionThumbnail;
-(CGFloat)maxLoadingTime;
-(Class)transformerClass;
-(NSInteger)defaultWhitePointAdaptivityStyle;
-(NSUInteger)_getGeneratedItemType;
-(NSUInteger)_getPreviewItemType;
-(NSUInteger)_previewItemTypeForType:(id)arg0 ;
-(NSUInteger)_uncachedExtensionPreviewItemType;
-(NSUInteger)_uncachedPreviewItemTypeForContentType:(id)arg0 ;
-(NSUInteger)maximumNumberOfCachedPreviews;
-(id)createPreviewContext;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 contentType:(id)arg1 previewTitle:(id)arg2 ;
-(id)initWithDataProvider:(id)arg0 contentType:(id)arg1 previewTitle:(id)arg2 ;
-(id)initWithFPItem:(id)arg0 ;
-(id)initWithPreviewItemProvider:(id)arg0 contentType:(id)arg1 previewTitle:(id)arg2 fileSize:(id)arg3 ;
-(id)initWithSearchableItemUniqueIdentifier:(id)arg0 applicationBundleIdentifier:(id)arg1 ;
-(id)initWithSearchableItemUniqueIdentifier:(id)arg0 queryString:(id)arg1 applicationBundleIdentifier:(id)arg2 previewTitle:(id)arg3 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 MIMEType:(id)arg1 ;
-(id)initWithURLSandboxWrapper:(id)arg0 ;
-(id)internalCopy;
-(id)previewItemPrintingViewControllerClassName;
-(id)previewItemViewControllerClassName;
-(id)previewItemViewControllerClassNameForType:(NSUInteger)arg0 ;
-(id)saveURL;
-(id)shareableURL;
-(id)temporaryEditionDirectory;
-(struct CGSize )imageRawSizeOfContents:(id)arg0 withPreviewItemType:(NSUInteger)arg1 imageIsAnimated:(*BOOL)arg2 ;
-(struct CGSize )predictedPreferredContentSizeForOrbPlatter;
-(struct CGSize )preferredContentSizeForOrbPlatterWithURL:(id)arg0 ;
-(struct CGSize )previewSizeForItemViewControllerSize:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)_removeEditedCopyIfExists;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareSaveURL:(id)arg0 ;
-(void)prepareShareableURL:(id)arg0 ;
-(void)provideURLWrapper:(id)arg0 ;


@end


#endif