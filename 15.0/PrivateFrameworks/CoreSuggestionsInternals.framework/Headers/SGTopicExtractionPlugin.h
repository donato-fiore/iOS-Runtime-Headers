// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGTOPICEXTRACTIONPLUGIN_H
#define SGTOPICEXTRACTIONPLUGIN_H

@class NSString;
@protocol FIAPPlugin, HVNewsConsumer, HVNotesConsumer, HVRemindersConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVInteractionConsumer;

#import <Foundation/Foundation.h>

#import "SGTopicDissector.h"

@interface SGTopicExtractionPlugin : NSObject <FIAPPlugin, HVNewsConsumer, HVNotesConsumer, HVRemindersConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVInteractionConsumer>

 {
    SGTopicDissector *_dissector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_harvestPodcastsIntent:(id)arg0 identifier:(id)arg1 groupIdentifier:(id)arg2 ignored:(*BOOL)arg3 numberOfExtractons:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)_interestedInTitle:(id)arg0 content:(id)arg1 isReaderText:(BOOL)arg2 uniqueIdentifier:(id)arg3 bundleIdentifier:(id)arg4 ;
-(BOOL)_shouldDeferProcessingSearchableItem:(id)arg0 ;
-(BOOL)interestedInSearchableItem:(id)arg0 ;
-(id)_consumeContentParts:(id)arg0 contentDataSource:(id)arg1 uniqueIdentifier:(id)arg2 domainIdentifier:(id)arg3 bundleIdentifier:(id)arg4 context:(id)arg5 ;
-(id)_topicContainersForText:(id)arg0 isPlainText:(BOOL)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 contactHandles:(id)arg5 weight:(CGFloat)arg6 isOutgoing:(BOOL)arg7 ;
-(id)consumeInteractionWithContext:(id)arg0 ;
-(id)consumeNewsArticleViewsWithContext:(id)arg0 ;
-(id)consumeNotesContentWithContext:(id)arg0 ;
-(id)consumeRemindersContentWithContext:(id)arg0 ;
-(id)consumeSafariContentWithContext:(id)arg0 ;
-(id)consumeThirdPartyAppContentWithContext:(id)arg0 ;
-(id)consumerName;
-(id)deleteDataDerivedFromContentMatchingRequest:(id)arg0 ;
-(id)extractionsFromSearchableItem:(id)arg0 ;
-(id)extractionsFromText:(id)arg0 bundleId:(id)arg1 ;
-(id)init;
-(id)initWithTopicDissector:(id)arg0 ;
-(id)processInteraction:(id)arg0 bundleIdentifier:(id)arg1 protectionClass:(id)arg2 ;
-(id)processSearchableItem:(id)arg0 ;
-(id)setup;
-(void)_writeAndFlushContainers:(id)arg0 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 domainIdentifiers:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 ;
-(void)extractAndDonateTopicsForText:(id)arg0 isPlainText:(BOOL)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 contactHandles:(id)arg5 weight:(CGFloat)arg6 isOutgoing:(BOOL)arg7 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 ;


@end


#endif