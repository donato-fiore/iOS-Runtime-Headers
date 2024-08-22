// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFFPSHARECOLLABORATIONITEM_H
#define _SFFPSHARECOLLABORATIONITEM_H

@class NSString, NSURL, NSUUID, NSItemProvider, LPLinkMetadata, NSArray;
@protocol SFCollaborationFileURLItem;


#import "SFCollaborationItem.h"
#import "SFCollaborationCloudSharingResult.h"
#import "SFCollaborationMetadata.h"
#import "SFCollaborationShareOptions.h"

@interface _SFFPShareCollaborationItem : SFCollaborationItem <SFCollaborationFileURLItem>



@property (readonly, nonatomic) id *activityItem;
@property (readonly, copy, nonatomic) NSString *additionalContentIdentifier;
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
@property (readonly, nonatomic) SFCollaborationMetadata *metadata;
@property (copy, nonatomic) NSArray *options;
@property (readonly, nonatomic) id *placeholderActivityItem;
@property (readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property (readonly, copy, nonatomic) NSArray *sendCopyItems;
@property (retain, nonatomic) NSURL *sendCopyRepresentationURL; // ivar: _sendCopyRepresentationURL
@property (copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


-(id)_defaultLoadingOptionsSummary;
-(id)initWithFileURL:(id)arg0 itemProvider:(id)arg1 activityItem:(id)arg2 defaultCollaboration:(BOOL)arg3 ;
-(void)_loadMetadataIfNeeded;
-(void)loadCopyRepresentationURLWithCompletionHandler:(id)arg0 ;


@end


#endif