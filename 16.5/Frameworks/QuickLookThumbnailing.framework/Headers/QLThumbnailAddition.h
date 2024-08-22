// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLTHUMBNAILADDITION_H
#define QLTHUMBNAILADDITION_H

@class GSAddition, NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "QLThumbnailVersion.h"

@interface QLThumbnailAddition : NSObject {
    GSAddition *_addition;
    QLThumbnailVersion *_thumbnailVersion;
}


@property (readonly) NSUInteger additionSize;
@property (retain) NSURL *additionURL; // ivar: _additionURL
@property NSInteger additionURLSandboxToken; // ivar: _additionURLSandboxToken
@property (readonly) GSAddition *genStoreAddition;
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property (retain) NSDictionary *thumbnailDataDictionary; // ivar: _thumbnailDataDictionary
@property (readonly) QLThumbnailVersion *thumbnailVersion;


+(BOOL)_removeAdditionsOnURLDirectly:(id)arg0 error:(*id)arg1 ;
+(BOOL)_removeAdditionsOnURLUsingDaemon:(id)arg0 error:(*id)arg1 ;
+(BOOL)_removedAdditionsOnURL:(id)arg0 ;
+(BOOL)_removedAdditionsOnURLUsingDaemon:(id)arg0 ;
+(BOOL)associateImage:(struct CGImage *)arg0 metadata:(id)arg1 automaticallyGenerated:(BOOL)arg2 withURL:(id)arg3 error:(*id)arg4 ;
+(BOOL)associateThumbnailImagesDictionary:(id)arg0 serializedQuickLookMetadata:(id)arg1 withDocumentAtURL:(id)arg2 error:(*id)arg3 ;
+(BOOL)associateThumbnailImagesDictionary:(id)arg0 serializedQuickLookMetadata:(id)arg1 withImmutableDocument:(BOOL)arg2 atURL:(id)arg3 error:(*id)arg4 ;
+(BOOL)associateThumbnailsForDocumentAtURL:(id)arg0 withDocumentAtURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)associateThumbnailsForDocumentAtURL:(id)arg0 withImmutableDocument:(BOOL)arg1 atURL:(id)arg2 error:(*id)arg3 ;
+(BOOL)hasThumbnailOnImmutableDocumentAtURL:(id)arg0 ;
+(BOOL)imageContainsAlpha:(struct CGImage *)arg0 ;
+(BOOL)imageContainsAlphaForOtherImages:(struct CGImage *)arg0 ;
+(BOOL)makeAdditionFromStagingURL:(id)arg0 metadata:(id)arg1 inStorage:(id)arg2 error:(*id)arg3 ;
+(BOOL)removeAdditionsOnURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeExtendedAttributeNamed:(char *)arg0 flags:(NSUInteger)arg1 onFileDescriptor:(int)arg2 error:(*id)arg3 ;
+(BOOL)removeThumbnailsStoredInExtendedAttributesOnURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)setPropertyList:(id)arg0 forExtendedAttributeNamed:(char *)arg1 flags:(NSUInteger)arg2 onFileDescriptor:(int)arg3 error:(*id)arg4 ;
+(BOOL)setThumbnailsDictionary:(id)arg0 forURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)shouldUseXattrsToStoreThumbnailsOnURL:(id)arg0 ;
+(BOOL)storeThumbnailDataDictionary:(id)arg0 metadata:(id)arg1 asExtendedAttributeOnURL:(id)arg2 error:(*id)arg3 ;
+(NSUInteger)sizeOfAdditionsPresentOnURL:(id)arg0 ;
+(id)additionCreationInfo;
+(id)imageNameFor1024ThumbnailAtURL:(id)arg0 metadataDictionary:(id)arg1 ;
+(id)imageNameFor1024ThumbnailData:(id)arg0 metadataDictionary:(id)arg1 ;
+(id)imageNameFor1024ThumbnailInMetadataDictionary:(id)arg0 ;
+(id)imageNameForThumbnailInImageSource:(struct CGImageSource *)arg0 ;
+(id)metadataForGeneratedThumbnailForURL:(id)arg0 maximumDimension:(CGFloat)arg1 ;
+(id)plistInExtendedAttributeNamed:(char *)arg0 flags:(NSUInteger)arg1 onFileDescriptor:(int)arg2 error:(*id)arg3 ;
+(id)thumbnailsDictionaryForURL:(id)arg0 error:(*id)arg1 ;
+(void)_hitAdditionsOnURL:(id)arg0 size:(NSUInteger)arg1 completionHandler:(id)arg2 ;
+(void)adjustFileProtectionForThumbnail:(id)arg0 fromOriginalDocument:(id)arg1 ;
+(void)downloadOrGenerateThumbnailAtTaggedURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)downloadOrGenerateThumbnailAtURL:(id)arg0 ;
+(void)downloadOrGenerateThumbnailAtURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)fpfsDownloadOrGenerateThumbnailAtTaggedURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)generateThumbnailIfPossibleAtLogicalURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)noteCloudDocsDownloadedFileAtURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)preFPFSDownloadOrGenerateThumbnailAtTaggedURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)preFPFSDownloadThumbnailAtTaggedURL:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_initWithAdditionsPresentOnURLDirectly:(id)arg0 error:(*id)arg1 ;
-(BOOL)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg0 error:(*id)arg1 ;
-(BOOL)_initWithXattrsPresentOnURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldBeInvalidatedByThumbnailVersion:(id)arg0 ;
-(id)allImageURLs;
-(id)initWithAdditionsPresentOnURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithAdditionsPresentOnURL:(id)arg0 includingExtendedAttributes:(BOOL)arg1 error:(*id)arg2 ;
-(id)thumbnailDataForKey:(id)arg0 ;
-(id)thumbnailURLForKey:(id)arg0 ;
-(id)thumbnailsDictionaryWithError:(*id)arg0 ;
-(struct CGImage *)thumbnailWithMaximumDimension:(CGFloat)arg0 contentRect:(struct CGRect *)arg1 properties:(*id)arg2 ;
-(void)dealloc;


@end


#endif