// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XBAPPLICATIONSNAPSHOT_H
#define XBAPPLICATIONSNAPSHOT_H

@class NSMutableDictionary, NSDate, UIImage, BSAtomicFlag, NSString, NSDictionary;
@protocol NSSecureCoding, BSDescriptionProviding, OS_os_transaction, XBSnapshotManifestStore;

#import <Foundation/Foundation.h>

#import "XBStatusBarSettings.h"
#import "XBSnapshotContainerIdentity.h"
#import "XBDisplayEdgeInsetsWrapper.h"
#import "XBApplicationSnapshotGenerationContext.h"

@interface XBApplicationSnapshot : NSObject <NSSecureCoding, BSDescriptionProviding>

 {
    NSMutableDictionary *_variantsByID;
    NSDate *_expirationDate;
    CGRect _contentFrame;
    UIImage *_cachedImage;
    NSUInteger _imageAccessCount;
    BOOL _invalidated;
    BOOL _keepImageAccessUntilExpiration;
    BOOL _keepImageAccessForPreHeat;
    BSAtomicFlag *_hasProtectedContent;
    os_unfair_lock_s _loadImageLock;
    NSString *_baseLogIdentifier;
    NSString *_logIdentifier;
    BOOL _logContainerIdentifierDirty;
    NSObject<OS_os_transaction> *_cachedImageTransaction;
}


@property (readonly, nonatomic) NSUInteger _contentTypeMask;
@property (readonly, nonatomic) NSUInteger _interfaceOrientationMask;
@property (readonly, copy, nonatomic) NSString *_sortableLaunchInterfaceIdentifier;
@property (readonly, copy, nonatomic) NSString *_sortableName;
@property (readonly, copy, nonatomic) NSString *_sortableRequiredOSVersion;
@property (readonly, copy, nonatomic) NSString *_sortableScheme;
@property (readonly, retain, nonatomic) XBStatusBarSettings *_sortableStatusBarSettings;
@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (nonatomic) NSInteger classicMode; // ivar: _classicMode
@property (nonatomic) NSInteger compatibilityMode; // ivar: _compatibilityMode
@property (copy) XBSnapshotContainerIdentity *containerIdentity; // ivar: _containerIdentity
@property (nonatomic) CGRect contentFrame;
@property (nonatomic) NSInteger contentType; // ivar: _contentType
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) XBDisplayEdgeInsetsWrapper *customSafeAreaInsets; // ivar: _customSafeAreaInsets
@property (copy, nonatomic) NSString *dataProviderClassName; // ivar: _dataProviderClassName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (copy) NSDictionary *extendedData; // ivar: _extendedData
@property (readonly, nonatomic) BOOL fileExists;
@property (readonly, nonatomic) NSInteger fileFormat; // ivar: _fileFormat
@property (nonatomic) NSInteger fileLocation; // ivar: _fileLocation
@property (copy, nonatomic, getter=filename, setter=_setFilename:) NSString *filename; // ivar: _filename
@property (nonatomic, getter=isFullScreen) BOOL fullScreen; // ivar: _fullScreen
@property (readonly, nonatomic) XBApplicationSnapshotGenerationContext *generationContext; // ivar: _generationContext
@property (readonly, copy, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) BOOL hasFullSizedContent;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *imageGenerator; // ivar: _imageGenerator
@property (nonatomic, getter=isImageOpaque) BOOL imageOpaque; // ivar: _imageOpaque
@property (nonatomic) NSInteger imageOrientation; // ivar: _imageOrientation
@property (nonatomic) CGFloat imageScale; // ivar: _imageScale
@property (nonatomic) CGAffineTransform imageTransform; // ivar: _imageTransform
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (retain, nonatomic) NSDate *lastUsedDate; // ivar: _lastUsedDate
@property (copy, nonatomic) NSString *launchInterfaceIdentifier; // ivar: _launchInterfaceIdentifier
@property (readonly, nonatomic) NSString *logIdentifier;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGSize naturalSize;
@property (copy, nonatomic, setter=_setPath:) NSString *path; // ivar: _path
@property (nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (copy, nonatomic, getter=_relativePath, setter=_setRelativePath:) NSString *relativePath; // ivar: _relativePath
@property (copy, nonatomic) NSString *requiredOSVersion; // ivar: _requiredOSVersion
@property (copy, nonatomic) NSString *scheme; // ivar: _scheme
@property (copy, nonatomic) XBStatusBarSettings *statusBarSettings; // ivar: _statusBarSettings
@property (readonly, nonatomic, getter=_store) NSObject<XBSnapshotManifestStore> *store; // ivar: _store
@property (readonly) Class superclass;
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (copy, nonatomic) NSString *variantID; // ivar: _variantID


+(BOOL)isValidImageFileExtension:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_allSecureCodingClassesIncludingDefaultAndClientSpecified;
+(id)dataForImage:(id)arg0 withFormat:(NSInteger)arg1 ;
+(id)normalizeSnapshotName:(id)arg0 ;
+(id)secureCodableCustomExtendedDataClasses;
+(struct CGImage *)_createCGImageWithPreferredOptions:(id)arg0 fromCGImage:(struct CGImage *)arg1 ;
+(void)setSecureCodableCustomExtendedDataClasses:(id)arg0 ;
-(BOOL)_generateImageIfPossible;
-(BOOL)_hasGenerationContext;
-(BOOL)_isInvalidated;
-(BOOL)_path:(id)arg0 isRelativeToPath:(id)arg1 outRelativePath:(*id)arg2 ;
-(BOOL)_shouldDeleteFileOnPurge:(*id)arg0 ;
-(BOOL)_synchronized_hasCachedImage:(*id)arg0 ;
-(BOOL)_validateWithContainerIdentity:(id)arg0 ;
-(BOOL)hasCachedImage;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)isValidWithReason:(*id)arg0 ;
-(id)_cachedImage;
-(id)_configureDefaultPathWithinGroupForFormat:(NSInteger)arg0 ;
-(id)_createVariantWithIdentifier:(id)arg0 ;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg0 includeVariants:(BOOL)arg1 ;
-(id)_determineRelativePathForPath:(id)arg0 location:(*NSInteger)arg1 ;
-(id)_initWithContainerIdentity:(id)arg0 store:(id)arg1 groupID:(id)arg2 generationContext:(id)arg3 ;
-(id)_sanitizedPathForPath:(id)arg0 ;
-(id)cachedImageForInterfaceOrientation:(NSInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionForStateCaptureWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)imageForInterfaceOrientation:(NSInteger)arg0 ;
-(id)imageForInterfaceOrientation:(NSInteger)arg0 generationOptions:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)variantWithIdentifier:(id)arg0 ;
-(id)variants;
-(struct CGRect )_referenceBounds;
-(void)_beginPreHeatImageAccess;
-(void)_cacheImage:(id)arg0 ;
-(void)_commonInitWithIdentifier:(id)arg0 ;
-(void)_configureWithPath:(id)arg0 ;
-(void)_endPreHeatImageAccess;
-(void)_invalidate;
-(void)_purgeCachedImageIfAppropriate:(BOOL)arg0 ;
-(void)_synchronized_evaluateImageAccessUntilExpirationEnablingIfNecessary:(BOOL)arg0 ;
-(void)beginImageAccess;
-(void)beginImageAccessUntilExpiration;
-(void)clearImageGenerator;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endImageAccess;
-(void)loadImage;
-(void)loadImageForPreHeat;
-(void)loadImageWithGenerationOptions:(NSUInteger)arg0 ;
-(void)purgeImage;
-(void)setImageGeneratingByProvider:(id)arg0 withBlockingImageGenerator:(id)arg1 ;
-(void)willDeleteVariant:(id)arg0 ;


@end


#endif