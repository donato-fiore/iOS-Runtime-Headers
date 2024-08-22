// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKOBJECT_H
#define PKOBJECT_H

@class NSString, NSData, NSDate, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKContent.h"
#import "PKDisplayTraitCollection.h"
#import "PKDataAccessor.h"
#import "PKDisplayProfile.h"

@interface PKObject : NSObject <NSCopying, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    PKContent *_content;
    PKImageSet" _imageSets;
    PKDisplayTraitCollection *_preferredDisplayTraits;
}


@property (copy, nonatomic) NSString *authenticationToken; // ivar: _authenticationToken
@property (retain, nonatomic) PKDataAccessor *dataAccessor; // ivar: _dataAccessor
@property (retain, nonatomic) PKDisplayProfile *displayProfile; // ivar: _displayProfile
@property (readonly, nonatomic) BOOL initializedViaInitWithCoder; // ivar: _initializedViaInitWithCoder
@property (copy, nonatomic) NSData *manifestHash; // ivar: _manifestHash
@property (retain, nonatomic) PKDisplayTraitCollection *preferredDisplayTraits;
@property (nonatomic) CGFloat preferredImageScale; // ivar: _preferredImageScale
@property (retain, nonatomic) NSString *preferredImageSuffix; // ivar: _preferredImageSuffix
@property (nonatomic) NSUInteger settings; // ivar: _settings
@property (nonatomic) NSInteger shareCount; // ivar: _shareCount
@property (copy, nonatomic) NSDate *signingDate; // ivar: _signingDate
@property (copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID
@property (copy, nonatomic) NSURL *webServiceURL; // ivar: _webServiceURL


+(BOOL)isValidObjectWithFileDataAccessor:(id)arg0 warnings:(*id)arg1 error:(*id)arg2 signingDate:(*id)arg3 passDictionary:(id)arg4 ;
+(BOOL)supportsSecureCoding;
+(Class)classForDictionary:(id)arg0 bundle:(id)arg1 ;
+(Class)resolvingClass;
+(NSUInteger)defaultSettings;
+(id)_createWithFileDataAccessor:(id)arg0 validate:(BOOL)arg1 warnings:(*id)arg2 error:(*id)arg3 ;
+(id)createWithData:(id)arg0 warnings:(*id)arg1 error:(*id)arg2 ;
+(id)createWithFileDataAccessor:(id)arg0 warnings:(*id)arg1 error:(*id)arg2 ;
+(id)createWithFileURL:(id)arg0 warnings:(*id)arg1 error:(*id)arg2 ;
+(id)createWithValidatedFileDataAccessor:(id)arg0 ;
+(id)dataTypeIdentifier;
+(id)fetchSigningDateForObjectWithFileDataAccessor:(id)arg0 passDictionary:(id)arg1 ;
-(BOOL)isContentLoaded;
-(BOOL)isImageSetLoaded:(NSInteger)arg0 ;
-(BOOL)isImageSetType:(NSInteger)arg0 equalToImageSetTypeFromObject:(id)arg1 ;
-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg0 ;
-(id)archiveData;
-(id)content;
-(id)contentLoadedIfNeeded;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataForBundleResourceNamed:(id)arg0 withExtension:(id)arg1 ;
-(id)dataForBundleResources:(id)arg0 ;
-(id)imageSetLoadedIfNeeded:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(id)initWithFileURL:(id)arg0 error:(*id)arg1 ;
-(id)localizedString:(id)arg0 ;
-(id)modificationDate;
-(id)passLocalizedStringForKey:(id)arg0 ;
-(id)serializedFileWrapper;
-(void)_lock_flushLoadedImageSets;
-(void)dealloc;
-(void)downloadRemoteAssetsForSEIDS:(id)arg0 completion:(id)arg1 ;
-(void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)arg0 seids:(id)arg1 completion:(id)arg2 ;
-(void)downloadRemoteAssetsWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flushFormattedFieldValues;
-(void)flushLoadedContent;
-(void)flushLoadedImageSets;
-(void)loadCachedImageSet:(NSInteger)arg0 ;
-(void)loadContentAsyncWithCompletion:(id)arg0 ;
-(void)loadContentSync;
-(void)loadImageSetAsync:(NSInteger)arg0 preheat:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)loadImageSetSync:(NSInteger)arg0 preheat:(BOOL)arg1 ;
-(void)noteShared;
-(void)reloadDisplayProfileOfType:(NSInteger)arg0 ;
-(void)requestUpdateWithCompletion:(id)arg0 ;
-(void)revocationStatusWithCompletion:(id)arg0 ;
-(void)setContent:(id)arg0 ;
-(void)setImageSet:(id)arg0 forImageSetType:(NSInteger)arg1 ;
-(void)setMissingImageSetsFromObject:(id)arg0 ;


@end


#endif