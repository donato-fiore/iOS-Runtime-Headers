// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFCKSHARECOLLABORATIONITEM_H
#define _SFCKSHARECOLLABORATIONITEM_H

@class NSString, NSNumber, CKContainerSetupInfo, NSUUID, NSItemProvider, LPLinkMetadata, NSError, NSArray;
@protocol SFCollaborationCKShareItem;


#import "SFCollaborationItem.h"
#import "SFCollaborationCloudSharingResult.h"
#import "SFCollaborationMetadata.h"
#import "SFCollaborationShareOptions.h"

@interface _SFCKShareCollaborationItem : SFCollaborationItem <SFCollaborationCKShareItem>



@property (readonly, nonatomic) id *activityItem;
@property (readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property (readonly, nonatomic) NSNumber *canAddPeople;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo; // ivar: _containerSetupInfo
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL defaultCollaboration;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLoadingContainerSetupInfo; // ivar: _isLoadingContainerSetupInfo
@property (readonly, nonatomic) BOOL isServiceManatee; // ivar: _isServiceManatee
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, nonatomic) SFCollaborationMetadata *metadata;
@property (readonly, nonatomic) NSError *metadataLoadError;
@property (copy, nonatomic) NSArray *options;
@property (readonly, nonatomic) id *placeholderActivityItem;
@property (retain, nonatomic) LPLinkMetadata *postSharelinkMetadata; // ivar: _postSharelinkMetadata
@property (readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property (readonly, copy, nonatomic) NSArray *sendCopyItems;
@property (readonly, nonatomic) id *sendCopyRepresentation;
@property (copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


-(BOOL)_canShowOptions;
-(id)_defaultLoadingOptionsSummary;
-(id)initWithItemProvider:(id)arg0 activityItem:(id)arg1 ;
-(void)_didLoadContainerSetupInfo:(id)arg0 ;
-(void)_loadCKContainerSetupInfoIfNeeded;
-(void)_startLoading;


@end


#endif