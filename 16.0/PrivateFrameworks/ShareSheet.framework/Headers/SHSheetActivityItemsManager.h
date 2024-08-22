// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETACTIVITYITEMSMANAGER_H
#define SHSHEETACTIVITYITEMSMANAGER_H

@class NSArray;
@protocol SHSheetActivityItemsManagerCollaborationDelegate, SHSheetActivityItemsManagerDelegate;

#import <Foundation/Foundation.h>

#import "UIActivityViewController.h"
#import "SHSheetActivityItemsResult.h"

@interface SHSheetActivityItemsManager : NSObject

@property (readonly, copy, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (readonly, weak, nonatomic) UIActivityViewController *activityViewController; // ivar: _activityViewController
@property (retain, nonatomic) SHSheetActivityItemsResult *cacheResult; // ivar: _cacheResult
@property (weak, nonatomic) NSObject<SHSheetActivityItemsManagerCollaborationDelegate> *collaborationDelegate; // ivar: _collaborationDelegate
@property (weak, nonatomic) NSObject<SHSheetActivityItemsManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (copy, nonatomic) NSArray *linkMetadataValues; // ivar: _linkMetadataValues
@property (copy, nonatomic) NSArray *urlRequests; // ivar: _urlRequests


+(id)placeholderActivityItemValuesForActivityItem:(id)arg0 activityViewController:(id)arg1 ;
-(BOOL)_supportsWebpagesForActivity:(id)arg0 ;
-(NSInteger)_requestAttachmentURLItemDataForActivityItem:(id)arg0 activity:(id)arg1 ;
-(id)_requestInitialSocialTextForActivityItem:(id)arg0 activity:(id)arg1 ;
-(id)_requestItemsForActivityItem:(id)arg0 activity:(id)arg1 ;
-(id)_requestSubjectForActivityItem:(id)arg0 activity:(id)arg1 ;
-(id)_requestThumbnailForActivityItem:(id)arg0 activity:(id)arg1 ;
-(id)_resolveActivityItemsForActivity:(id)arg0 ;
-(id)_resolvePlaceholderActivityItems;
-(id)activityItemURLValuesForActivity:(id)arg0 ;
-(id)activityItemValuesForActivity:(id)arg0 ;
-(id)initWithActivityItems:(id)arg0 activityViewController:(id)arg1 delegate:(id)arg2 collaborationDelegate:(id)arg3 ;
-(id)initialSocialTextForActivity:(id)arg0 ;
-(id)placeholderActivityItemValuesForActivityItem:(id)arg0 activityViewController:(id)arg1 ;
-(id)securityScopedURLsForActivity:(id)arg0 ;
-(id)subjectForActivity:(id)arg0 ;
-(id)suggestedImageDataFromActivityItem:(id)arg0 ;
-(void)_configureContentManagedForActivityItemValue:(id)arg0 outURLs:(id)arg1 outScopedURLs:(id)arg2 ;
-(void)_didLoadGroupActivityMetadata:(id)arg0 ;
-(void)_loadGroupActivityMetadataIfNeeded;
-(void)_updateCacheResultForActivity:(id)arg0 ;
-(void)_updateIsContentManagedForURLs;
-(void)_updateLinkMetadataValues;
-(void)_updateURLRequests;
-(void)enumerateBackgroundOperationsForActivity:(id)arg0 enumerator:(id)arg1 ;
-(void)invalidateCache;
-(void)loadItemProvidersForRequest:(id)arg0 activity:(id)arg1 completion:(id)arg2 ;


@end


#endif