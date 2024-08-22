// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (nonatomic) BOOL paperHasEnhancedCanvas;
@property (nonatomic) BOOL paperHasNewInks2022;


+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
+(id)paperBundleURLForAttachmentIdentifier:(id)arg0 inAccount:(id)arg1 ;
-(BOOL)canConvertToHTMLForSharing;
-(BOOL)hasPreviews;
-(BOOL)isIncludedInGenericAttachmentCount;
-(BOOL)preferLocalPreviewImages;
-(BOOL)previewsSupportMultipleAppearances;
-(BOOL)providesStandaloneTitleForNote;
-(BOOL)restorePaperBundleFromArchiveURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldShowInContentInfoText;
-(BOOL)shouldSyncPreviewImageToCloud:(id)arg0 ;
-(BOOL)showThumbnailInNoteList;
-(id)additionalIndexableTextContentInNote;
-(id)archivePaperBundleToDiskWithError:(*id)arg0 ;
-(id)attributesForSharingHTMLWithTagName:(*id)arg0 textContent:(*id)arg1 ;
-(id)correctedHardlinkURLFileExtensionForExtension:(id)arg0 ;
-(id)searchableTextContentInNote;
-(id)standaloneTitleForNote;
-(void)addMergeableDataToCloudKitRecord:(id)arg0 approach:(NSInteger)arg1 mergeableFieldState:(id)arg2 ;
-(void)fixupMetadataAndMinimumSupportedNotesVersion;
-(void)updateMinimumSupportedVersionIfNeededWithCompletionHandler:(id)arg0 ;


@end


#endif