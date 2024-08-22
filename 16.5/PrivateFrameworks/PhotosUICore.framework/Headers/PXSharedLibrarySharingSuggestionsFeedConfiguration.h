// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONSFEEDCONFIGURATION_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONSFEEDCONFIGURATION_H



#import "PXFeedConfiguration.h"
#import "PXSharedLibrarySharingSuggestionsFeedActionPerformer.h"
#import "PXSharedLibrarySharingSuggestionsDataSourceManager.h"

@interface PXSharedLibrarySharingSuggestionsFeedConfiguration : PXFeedConfiguration

@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsFeedActionPerformer *actionPerformer;
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsDataSourceManager *suggestionsDataSourceManager;


-(BOOL)allowsPopOnEmptyBehavior;
-(BOOL)wantsEmbeddedScrollView;
-(BOOL)wantsMultilineGadgetTitle;
-(NSInteger)horizontalGadgetStyle;
-(NSUInteger)gadgetAccessoryButtonType;
-(NSUInteger)gadgetType;
-(id)createSeeAllViewController;
-(id)gadgetAccessoryButtonLocalizedTitle;
-(id)gadgetLocalizedTitle;
-(id)init;
-(id)initWithDataSourceManager:(id)arg0 ;
// -(id)initWithDataSourceManagerPromise:(id)arg0 specManagerPromise:(unk)arg1 itemLayoutFactory:(id)arg2  ;
-(id)localizedSubtitle;
-(id)objectReferenceForDestination:(id)arg0 ;
-(void)handleContentDismissed;
-(void)handleContentSeen;


@end


#endif