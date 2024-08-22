// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFFPSHARECOLLABORATIONITEM_H
#define _SFFPSHARECOLLABORATIONITEM_H

@class NSString, NSNumber, NSURL, NSUUID, NSItemProvider, LPLinkMetadata, NSError, NSArray;
@protocol SFCollaborationFileURLItem;


#import "SFCollaborationItem.h"
#import "SFCollaborationCloudSharingResult.h"
#import "SFCollaborationMetadata.h"
#import "SFCollaborationShareOptions.h"

@interface _SFFPShareCollaborationItem : SFCollaborationItem <SFCollaborationFileURLItem>



@property (readonly, nonatomic) id *activityItem;
@property (readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property (readonly, nonatomic) NSNumber *canAddPeople;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL defaultCollaboration;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) BOOL hasSeparateSendCopyRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL isCollaborativeURL;
@property (readonly, nonatomic) BOOL isInSharedFolder; // ivar: _isInSharedFolder
@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) BOOL isLocalStorage; // ivar: _isLocalStorage
@property (readonly, nonatomic) BOOL isShared; // ivar: _isShared
@property (readonly, nonatomic) BOOL isThirdPartyFileProviderBacked; // ivar: _isThirdPartyFileProviderBacked
@property (readonly, nonatomic) BOOL isiCloudDrive; // ivar: _isiCloudDrive
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (copy, nonatomic) NSURL *managedFileURL; // ivar: _managedFileURL
@property (readonly, nonatomic) SFCollaborationMetadata *metadata;
@property (readonly, nonatomic) NSError *metadataLoadError;
@property (copy, nonatomic) NSArray *options;
@property (readonly, nonatomic) id *placeholderActivityItem;
@property (readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property (readonly, copy, nonatomic) NSArray *sendCopyItems;
@property (readonly, nonatomic) id *sendCopyRepresentation;
@property (retain, nonatomic) NSURL *sendCopyRepresentationURL; // ivar: _sendCopyRepresentationURL
@property (copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


-(id)_defaultLoadingOptionsSummary;
-(id)initWithFileURL:(id)arg0 itemProvider:(id)arg1 activityItem:(id)arg2 defaultCollaboration:(BOOL)arg3 managedFileURL:(id)arg4 ;
-(void)_loadMetadataIfNeeded;
-(void)_loadSendCopyRepresentationIfNeeded;
-(void)loadCopyRepresentationURLWithCompletionHandler:(id)arg0 ;


@end


#endif