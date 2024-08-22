// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGNAMEDENTITYEXTRACTIONPLUGIN_H
#define SGNAMEDENTITYEXTRACTIONPLUGIN_H

@class NSString;
@protocol FIAPPlugin, HVNewsConsumer, HVNotesConsumer, HVRemindersConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVInteractionConsumer, HVUserActivityConsumer;

#import <Foundation/Foundation.h>

#import "SGNamedEntityDissector.h"

@interface SGNamedEntityExtractionPlugin : NSObject <FIAPPlugin, HVNewsConsumer, HVNotesConsumer, HVRemindersConsumer, HVSafariConsumer, HVThirdPartyAppConsumer, HVInteractionConsumer, HVUserActivityConsumer>

 {
    SGNamedEntityDissector *_dissector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_harvestMapsIntent:(id)arg0 identifier:(id)arg1 ignored:(*BOOL)arg2 numberOfExtractons:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)_harvestPodcastsIntent:(id)arg0 identifier:(id)arg1 groupIdentifier:(id)arg2 ignored:(*BOOL)arg3 numberOfExtractons:(*NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)_processUserActivity:(id)arg0 extractionContainer:(id)arg1 rawTextOut:(*id)arg2 language:(id)arg3 ;
-(BOOL)_shouldAcceptSearchableItem:(id)arg0 ;
-(id)_consumeContentParts:(id)arg0 contentDataSource:(id)arg1 uniqueIdentifier:(id)arg2 domainIdentifier:(id)arg3 bundleIdentifier:(id)arg4 context:(id)arg5 ;
-(id)_entityContainersForContent:(id)arg0 contentDataSource:(id)arg1 isOutgoing:(BOOL)arg2 contactHandles:(id)arg3 uniqueIdentifier:(id)arg4 domainIdentifier:(id)arg5 bundleIdentifier:(id)arg6 ;
-(id)_entityContainersForContentItem:(id)arg0 ;
-(id)_entityContainersForUserAction:(id)arg0 searchableItem:(id)arg1 ;
-(id)_extractionCountForContainers:(id)arg0 ;
-(id)_extractionsFromEntityContainers:(id)arg0 ;
-(id)consumeInteractionWithContext:(id)arg0 ;
-(id)consumeNewsArticleViewsWithContext:(id)arg0 ;
-(id)consumeNotesContentWithContext:(id)arg0 ;
-(id)consumeRemindersContentWithContext:(id)arg0 ;
-(id)consumeSafariContentWithContext:(id)arg0 ;
-(id)consumeSearchableUserActivityWithContext:(id)arg0 ;
-(id)consumeThirdPartyAppContentWithContext:(id)arg0 ;
-(id)consumeUserActivityMetadataWithContext:(id)arg0 ;
-(id)consumerName;
-(id)deleteDataDerivedFromContentMatchingRequest:(id)arg0 ;
-(id)entityContainersForUserActivity:(id)arg0 documentId:(id)arg1 searchableItem:(id)arg2 ;
-(id)extractionsFromSearchableItem:(id)arg0 ;
-(id)extractionsFromUserAction:(id)arg0 searchableItem:(id)arg1 ;
-(id)init;
-(id)initWithNamedEntityDissector:(id)arg0 ;
-(id)processInteraction:(id)arg0 bundleIdentifier:(id)arg1 protectionClass:(id)arg2 ;
-(id)processSearchableItem:(id)arg0 ;
-(id)processUserAction:(id)arg0 searchableItem:(id)arg1 ;
-(void)_processCSSearchableItemLocationWithName:(id)arg0 thoroughfare:(id)arg1 city:(id)arg2 state:(id)arg3 country:(id)arg4 postalCode:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 extractionContainer:(id)arg8 ;
-(void)_writeAndFlushContainers:(id)arg0 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 domainIdentifiers:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 ;
-(void)processTextContentItem:(id)arg0 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg0 uniqueIdentifiers:(id)arg1 ;


@end


#endif