// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTODCFFILEGROUP_H
#define PLPHOTODCFFILEGROUP_H

@class NSString, NSMutableSet, NSDate;


#import "PLPhotoDCFObject.h"
#import "PLPhotoDCFDirectory.h"

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject {
    id *_delegate;
    PLPhotoDCFDirectory *_directory;
    NSString *_directoryPath;
    NSString *_prebakedThumbnailPath;
    NSString *_videoFileExtension;
    NSMutableSet *_extensions;
    NSDate *_date;
    NSString *_preferredExtension;
    NSUInteger _hash;
    BOOL _hashComputed;
    BOOL _addedExtensions;
    BOOL _writeIsPending;
}




+(id)allMetadataFileExtensions;
-(BOOL)hasObsoleteFiles;
-(BOOL)hasPrebakedLandscapeScrubberThumbnails;
-(BOOL)hasPrebakedPortraitScrubberThumbnails;
-(BOOL)hasPrebakedThumbnail;
-(BOOL)hasPrebakedWildcatThumbnails;
-(BOOL)hasThumbnail;
-(BOOL)hasVideoFile;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)isWritePending;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)date;
-(id)delegate;
-(id)description;
-(id)directory;
-(id)extensions;
-(id)imageSourceTypeHint;
-(id)initWithName:(id)arg0 number:(int)arg1 directory:(id)arg2 ;
-(id)lowResolutionFilename;
-(id)pathForContainingDirectory;
-(id)pathForFullSizeImage;
-(id)pathForGroupWithoutExtension;
-(id)pathForLowResolutionFile;
-(id)pathForMetadata;
-(id)pathForMetadataWithGroupName;
-(id)pathForPrebakedLandscapeScrubberThumbnails;
-(id)pathForPrebakedPortraitScrubberThumbnails;
-(id)pathForPrebakedThumbnail;
-(id)pathForPrebakedWildcatThumbnailsFile;
-(id)pathForThumbnailFile;
-(id)pathForTrimmedVideoFile;
-(id)pathForVideoFile;
-(id)pathForVideoPreviewFile;
-(id)prebakedLandscapeScrubberThumbnailsFilename;
-(id)prebakedPortraitScrubberThumbnailsFilename;
-(id)prebakedThumbnailFilename;
-(id)prebakedWildcatThumbnailsFilename;
-(id)thumbnailFilename;
-(id)videoPreviewFilename;
-(void)addExtension:(id)arg0 ;
-(void)addExtensionsFromMetadataDirectory;
-(void)createMetadataDirectoryIfNecessary;
-(void)deleteFiles;
-(void)deleteObsoleteFiles;
-(void)forceAddExtensionsFromMetadataDirectory;
-(void)setDate:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setWriteIsPending:(BOOL)arg0 ;


@end


#endif