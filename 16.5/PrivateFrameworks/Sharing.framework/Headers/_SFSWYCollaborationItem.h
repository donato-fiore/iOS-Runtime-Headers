// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSWYCOLLABORATIONITEM_H
#define _SFSWYCOLLABORATIONITEM_H

@class NSString, NSNumber, NSUUID, NSItemProvider, LPLinkMetadata, NSError, NSArray;
@protocol SFCollaborationSWYItem;


#import "SFCollaborationItem.h"
#import "SFCollaborationCloudSharingResult.h"
#import "SFCollaborationMetadata.h"
#import "SFPendingCollaboration.h"
#import "SFCollaborationShareOptions.h"

@interface _SFSWYCollaborationItem : SFCollaborationItem <SFCollaborationSWYItem>



@property (readonly, nonatomic) id *activityItem;
@property (readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property (readonly, nonatomic) NSNumber *canAddPeople;
@property (retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL defaultCollaboration;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly, nonatomic) SFCollaborationMetadata *metadata;
@property (readonly, nonatomic) NSError *metadataLoadError;
@property (copy, nonatomic) NSArray *options;
@property (readonly, nonatomic) SFPendingCollaboration *pendingCollaboration; // ivar: _pendingCollaboration
@property (readonly, nonatomic) id *placeholderActivityItem;
@property (readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property (readonly, copy, nonatomic) NSArray *sendCopyItems;
@property (readonly, nonatomic) id *sendCopyRepresentation;
@property (copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


-(id)initWithItemProvider:(id)arg0 activityItem:(id)arg1 ;
-(void)_loadOptionsIfNeeded;


@end


#endif