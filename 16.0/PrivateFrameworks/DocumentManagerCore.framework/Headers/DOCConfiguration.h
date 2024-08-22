// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCCONFIGURATION_H
#define DOCCONFIGURATION_H

@class NSDictionary, DOCConcreteLocation, NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DOCConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *allowedConversions; // ivar: _allowedConversions
@property NSUInteger browserViewContext; // ivar: _browserViewContext
@property BOOL collectionSupportsDragAndDrop; // ivar: _collectionSupportsDragAndDrop
@property (retain) DOCConcreteLocation *defaultLocation; // ivar: _defaultLocation
@property (copy, nonatomic) NSArray *documentContentTypes; // ivar: _documentContentTypes
@property (copy, nonatomic) NSArray *excludedDocumentContentTypes; // ivar: _excludedDocumentContentTypes
@property (readonly) BOOL forBrowsingInApp;
@property BOOL forMovingDocuments; // ivar: _forMovingDocuments
@property BOOL forPickingDocuments; // ivar: _forPickingDocuments
@property BOOL forPickingDownloadsFolder; // ivar: _forPickingDownloadsFolder
@property BOOL forPickingFolders; // ivar: _forPickingFolders
@property (readonly) BOOL forSavingDocuments;
@property (copy) NSArray *forbiddenActionIdentifiers; // ivar: _forbiddenActionIdentifiers
@property (copy, nonatomic) NSArray *hiddenSourcesIdentifiers; // ivar: _hiddenSourcesIdentifiers
@property (copy, nonatomic) NSString *hostBundleTitle; // ivar: _hostBundleTitle
@property (copy, nonatomic) NSString *hostIdentifier; // ivar: _hostIdentifier
@property BOOL inProcess; // ivar: _inProcess
@property NSUInteger interactionMode; // ivar: _interactionMode
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (readonly) BOOL isFilesApp;
@property (readonly) BOOL isPickerUI;
@property (readonly) BOOL isPopover;
@property (readonly) BOOL isPopoverOrWidget;
@property (readonly) BOOL isWidget;
@property NSInteger maximumNumberOfItemsToFetch; // ivar: _maximumNumberOfItemsToFetch
@property NSInteger maximumNumberOfRows; // ivar: _maximumNumberOfRows
@property BOOL neverCreateBookmarkForOpenInPlace; // ivar: _neverCreateBookmarkForOpenInPlace
@property BOOL pickingItemsShouldBumpLastOpenDate; // ivar: _pickingItemsShouldBumpLastOpenDate
@property BOOL preferLastUsedDate; // ivar: _preferLastUsedDate
@property BOOL presentingMakesCollectionFirstResponder; // ivar: _presentingMakesCollectionFirstResponder
@property (copy, nonatomic) NSArray *recentDocumentsContentTypes; // ivar: _recentDocumentsContentTypes
@property BOOL restoreLastVisitedLocation; // ivar: _restoreLastVisitedLocation
@property (copy, nonatomic) NSString *roleIdentifier; // ivar: _roleIdentifier
@property BOOL saveLastVisitedLocation; // ivar: _saveLastVisitedLocation
@property (copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property BOOL shouldAdjustContentInset; // ivar: _shouldAdjustContentInset
@property (nonatomic) BOOL shouldConvert; // ivar: _shouldConvert
@property BOOL shouldIgnoreInteractionMode; // ivar: _shouldIgnoreInteractionMode
@property BOOL shouldOpenInApp; // ivar: _shouldOpenInApp
@property BOOL showCollectionControls; // ivar: _showCollectionControls
@property BOOL skipDownload; // ivar: _skipDownload
@property (copy, nonatomic) NSString *stateIdentifier; // ivar: _stateIdentifier
@property BOOL supportsColumnView; // ivar: _supportsColumnView
@property BOOL supportsNavigationTitleMenus; // ivar: _supportsNavigationTitleMenus
@property BOOL supportsRemovableFileProviders; // ivar: _supportsRemovableFileProviders
@property BOOL suppressBlackCallout; // ivar: _suppressBlackCallout
@property CGFloat thumbnailFetchingTimeOut; // ivar: _thumbnailFetchingTimeOut
@property (retain) NSArray *urls; // ivar: _urls
@property BOOL useExpandedSourceList; // ivar: _useExpandedSourceList
@property BOOL useSharedQuickLook; // ivar: _useSharedQuickLook


+(BOOL)supportsSecureCoding;
+(id)configurationForExportingDocumentsToURLs:(id)arg0 mode:(NSUInteger)arg1 ;
+(id)configurationForFolderPicking;
+(id)configurationForImportingDocumentContentTypes:(id)arg0 mode:(NSUInteger)arg1 ;
+(id)configurationForImportingDocumentsWithContentTypes:(id)arg0 mode:(NSUInteger)arg1 ;
+(id)configurationForImportingDocumentsWithConversionRules:(id)arg0 ;
+(id)configurationForOpeningDocumentsOfApplicationWithBundleIdentifier:(id)arg0 ;
+(id)pickableContentTypesFromAllowedConversions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif