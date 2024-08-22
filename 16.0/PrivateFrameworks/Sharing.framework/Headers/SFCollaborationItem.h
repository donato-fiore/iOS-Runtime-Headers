// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCOLLABORATIONITEM_H
#define SFCOLLABORATIONITEM_H

@class NSString, NSUUID, NSItemProvider, LPLinkMetadata, NSArray;
@protocol SFCollaborationItem;

#import <Foundation/Foundation.h>

#import "SFChangePublisher.h"
#import "SFCollaborationCloudSharingResult.h"
#import "SFCollaborationMetadata.h"
#import "SFCollaborationShareOptions.h"

@interface SFCollaborationItem : NSObject <SFCollaborationItem>



@property (retain, nonatomic) id *activityItem; // ivar: _activityItem
@property (readonly, copy, nonatomic) NSString *additionalContentIdentifier;
@property (retain, nonatomic) SFChangePublisher *changePublisher; // ivar: _changePublisher
@property (retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult; // ivar: _cloudSharingResult
@property (readonly, copy, nonatomic) NSString *contentIdentifier; // ivar: _contentIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL defaultCollaboration; // ivar: _defaultCollaboration
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLoadingMetadata; // ivar: _isLoadingMetadata
@property (nonatomic) BOOL isLoadingOptions; // ivar: _isLoadingOptions
@property (retain, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (retain, nonatomic) SFCollaborationMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) NSArray *options; // ivar: _options
@property (retain, nonatomic) id *placeholderActivityItem; // ivar: _placeholderActivityItem
@property (copy, nonatomic) NSArray *sendCopyActivityItemValues; // ivar: _sendCopyActivityItemValues
@property (copy, nonatomic) NSArray *sendCopyActivityItems; // ivar: _sendCopyActivityItems
@property (readonly, copy, nonatomic) NSArray *sendCopyItemPlaceholderValues;
@property (readonly, copy, nonatomic) NSArray *sendCopyItems;
@property (copy, nonatomic) SFCollaborationShareOptions *shareOptions; // ivar: _shareOptions
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(id)collaborationItemForFileURL:(id)arg0 itemProvider:(id)arg1 activityItem:(id)arg2 defaultCollaboration:(BOOL)arg3 ;
+(id)collaborationItemForItemProvider:(id)arg0 activityItem:(id)arg1 ;
-(BOOL)_canShowOptions;
-(id)_defaultLoadingOptionsSummary;
-(id)createCollaborationFooterViewModel;
-(id)initWithItemProvider:(id)arg0 activityItem:(id)arg1 placeholderActivityItem:(id)arg2 defaultCollaboration:(BOOL)arg3 ;
-(void)_didLoadMetadata:(id)arg0 ;
-(void)_didLoadOptions:(id)arg0 ;
-(void)_loadMetadataIfNeeded;
-(void)_loadOptionsIfNeeded;
-(void)_startLoading;
-(void)_updateLoadingState;
-(void)registerChangeObserver:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;


@end


#endif