// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLTHUMBNAILGENERATIONREQUEST_H
#define QLTHUMBNAILGENERATIONREQUEST_H

@class NSDate, UTType, NSString, NSData, NSDictionary, NSURL, FPSandboxingURLWrapper, FPItem, NSError, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "QLCacheBasicVersionedFileIdentifier.h"
#import "QLCacheFileProviderVersionedFileIdentifier.h"
#import "QLThumbnailRepresentation.h"

@interface QLThumbnailGenerationRequest : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger badgeType; // ivar: _badgeType
@property (retain, nonatomic) QLCacheBasicVersionedFileIdentifier *basicFileIdentifier; // ivar: _basicFileIdentifier
@property (retain, nonatomic) NSDate *beginDate; // ivar: _beginDate
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (copy, nonatomic) id *completionBlock;
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) UTType *contentType;
@property (retain, nonatomic) NSString *contentTypeUTI; // ivar: _contentTypeUTI
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic, getter=isDownloadingAllowed) BOOL downloadingAllowed; // ivar: _downloadingAllowed
@property (retain, nonatomic) NSDictionary *externalThumbnailGeneratorData; // ivar: _externalThumbnailGeneratorData
@property (nonatomic) NSUInteger externalThumbnailGeneratorDataHash; // ivar: _externalThumbnailGeneratorDataHash
@property (retain, nonatomic) QLCacheFileProviderVersionedFileIdentifier *fileProviderFileIdentifier; // ivar: _fileProviderFileIdentifier
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (nonatomic) NSInteger generationBehavior; // ivar: _generationBehavior
@property (retain, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper; // ivar: _genericSandboxWrapper
@property (nonatomic) BOOL iconMode; // ivar: _iconMode
@property (nonatomic) NSInteger iconVariant; // ivar: _iconVariant
@property (nonatomic) int interpolationQuality; // ivar: _interpolationQuality
@property (retain, nonatomic) FPItem *item; // ivar: _item
@property (nonatomic) CGFloat minimumDimension; // ivar: _minimumDimension
@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail; // ivar: _mostRepresentativeThumbnail
@property (readonly, nonatomic) NSInteger mostRepresentativeTypeForWhichUpdateBlockHasBeenCalled;
@property (retain, nonatomic) NSString *overriddenContentType; // ivar: _overriddenContentType
@property (retain, nonatomic) FPSandboxingURLWrapper *parentDirectorySandboxWrapper; // ivar: _parentDirectorySandboxWrapper
@property (retain, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper; // ivar: _quicklookSandboxWrapper
@property (nonatomic) NSUInteger representationTypes; // ivar: _representationTypes
@property (retain, nonatomic) NSError *requestIsInvalidError; // ivar: _requestIsInvalidError
@property (copy, nonatomic) NSString *saveURLContentType; // ivar: _saveURLContentType
@property (retain, nonatomic) FPSandboxingURLWrapper *saveURLSandboxWrapper; // ivar: _saveURLSandboxWrapper
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) BOOL shouldUseRestrictedExtension; // ivar: _shouldUseRestrictedExtension
@property (nonatomic) CGSize size; // ivar: _size
@property (copy, nonatomic) id *statusBlock;
@property (copy, nonatomic) id *statusBlock; // ivar: _statusBlock
@property (nonatomic) NSUInteger typesForWhichUpdateBlockHasBeenCalled; // ivar: _typesForWhichUpdateBlockHasBeenCalled
@property (copy, nonatomic) id *updateBlock;
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic) BOOL wantsBaseline; // ivar: _wantsBaseline


+(BOOL)supportsSecureCoding;
+(id)_basicFileIdentifierForURL:(id)arg0 error:(*id)arg1 ;
+(id)_fileProviderFileIdentifierForFPItem:(id)arg0 ;
+(id)customExtensionCommunicationEncodedClasses;
+(id)requestWithThumbnailRequest:(id)arg0 ;
-(BOOL)forceGeneration;
-(BOOL)isDataBased;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFileBased;
-(BOOL)isUbiquitous;
-(BOOL)isValid;
-(BOOL)prepareForSending;
-(BOOL)provideCachedResultsOnly;
-(BOOL)provideFullResolutionThumbnail;
-(BOOL)provideGenericIcon;
-(BOOL)provideLowQualityThumbnail;
-(BOOL)resultShouldBeSavedToDisk;
-(BOOL)thumbnailRepresentationTypeMatchesRequestedMostRepresentativeType:(NSInteger)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)requestedMostRepresentativeType;
-(NSUInteger)hash;
-(float)maximumPixelSize;
-(id)_stateDescription;
-(id)copyWithSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)equivalentFPItemRequestWithItem:(id)arg0 representationTypes:(NSUInteger)arg1 ;
-(id)fileIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 contentType:(id)arg1 size:(struct CGSize )arg2 scale:(CGFloat)arg3 representationTypes:(NSUInteger)arg4 ;
-(id)initWithFPItem:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 representationTypes:(NSUInteger)arg3 ;
-(id)initWithFileAtURL:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 representationTypes:(NSUInteger)arg3 ;
-(id)initWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 representationTypes:(NSUInteger)arg2 ;
-(id)saveURL;
-(void)cancel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finish;
-(void)markDidBegin;
-(void)noteUpdateBlockHasBeenCalledForType:(NSInteger)arg0 ;
-(void)setSaveURL:(id)arg0 ;


@end


#endif