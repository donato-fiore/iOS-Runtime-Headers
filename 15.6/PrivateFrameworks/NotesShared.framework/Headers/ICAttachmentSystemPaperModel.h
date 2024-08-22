// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICATTACHMENTSYSTEMPAPERMODEL_H
#define ICATTACHMENTSYSTEMPAPERMODEL_H

@class NSURL;


#import "ICAttachmentModel.h"
#import "ICAccount.h"

@interface ICAttachmentSystemPaperModel : ICAttachmentModel

@property (readonly, nonatomic) ICAccount *account;
@property (nonatomic) BOOL hasDeepLink;
@property (readonly, nonatomic) NSURL *paperBundleAssetsSubdirectoryURL;
@property (readonly, nonatomic) NSURL *paperBundleDatabaseSubdirectoryURL;
@property (readonly, nonatomic) NSURL *paperBundleURL;
@property (readonly, nonatomic) NSURL *paperCoherenceContextURL;
@property (nonatomic) CGRect paperContentBoundsHint;


+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
+(id)paperBundleURLForAttachmentIdentifier:(id)arg0 inAccount:(id)arg1 ;
-(BOOL)canConvertToHTMLForSharing;
-(BOOL)hasPreviews;
-(BOOL)preferLocalPreviewImages;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)providesStandaloneTitleForNote;
-(BOOL)restorePaperBundleDatabaseSubdirectoryFromArchiveURL:(id)arg0 ;
-(BOOL)restorePaperBundleFromArchiveURL:(id)arg0 ;
-(BOOL)shouldShowInContentInfoText;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg0 ;
-(BOOL)showThumbnailInNoteList;
-(BOOL)writePaperBundleAssetsFromURLs:(id)arg0 ;
-(id)additionalIndexableTextContentInNote;
-(id)allPaperBundleAssetURLs;
-(id)archivePaperBundleDatabaseSubdirectoryToDisk;
-(id)archivePaperBundleToDisk;
-(id)attributesForSharingHTMLWithTagName:(*id)arg0 textContent:(*id)arg1 ;
-(id)correctedHardlinkURLFileExtensionForExtension:(id)arg0 ;
-(id)searchableTextContentInNote;
-(id)standaloneTitleForNote;


@end


#endif