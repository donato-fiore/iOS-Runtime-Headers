// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPFILEMETADATAPROVIDERSPECIALIZATION_H
#define LPFILEMETADATAPROVIDERSPECIALIZATION_H

@class NSURL, NSString;
@protocol LPMetadataProviderSpecializationDelegate, OS_dispatch_group;


#import "LPMetadataProviderSpecialization.h"
#import "LPImage.h"
#import "LPLinkMetadata.h"
#import "LPFileMetadata.h"

@interface LPFileMetadataProviderSpecialization : LPMetadataProviderSpecialization <LPMetadataProviderSpecializationDelegate>

 {
    BOOL _cancelled;
    NSURL *_temporaryFileURL;
    LPImage *_originalImage;
    LPImage *_quickLookThumbnail;
    LPImage *_smallQuickLookThumbnail;
    NSString *_MIMEType;
    NSString *_UTI;
    LPLinkMetadata *_metadata;
    LPFileMetadata *_fileMetadata;
    NSObject<OS_dispatch_group> *_fetchGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)specialization;
+(id)_thumbnailQueue;
+(id)specializedMetadataProviderForResourceWithContext:(id)arg0 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg0 ;
-(BOOL)shouldUseQuickLookForFileType;
-(void)cancel;
-(void)cleanUpTemporaryFile;
-(void)complete;
-(void)fetchIconAndThumbnailFromQuickLookForURL:(id)arg0 ;
-(void)fetchMetadataForReachableFile:(id)arg0 ;
-(void)fetchMetadataFromURL:(id)arg0 ;
-(void)generateFallbackMetadataForUnreachableFile:(id)arg0 ;
-(void)metadataProviderSpecialization:(id)arg0 didCompleteWithMetadata:(id)arg1 ;
-(void)metadataProviderSpecializationDidFail:(id)arg0 ;
-(void)requestQuickLookThumbnailForURL:(id)arg0 size:(struct CGSize )arg1 badgeType:(NSUInteger)arg2 image:(*id)arg3 ;
-(void)start;
-(void)updatePreliminaryMetadata;


@end


#endif