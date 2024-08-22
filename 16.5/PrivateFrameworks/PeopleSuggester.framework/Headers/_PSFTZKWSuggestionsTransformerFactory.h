// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSFTZKWSUGGESTIONSTRANSFORMERFACTORY_H
#define _PSFTZKWSUGGESTIONSTRANSFORMERFACTORY_H

@class _CDInteractionStore;

#import <Foundation/Foundation.h>

#import "_PSContactCache.h"

@interface _PSFTZKWSuggestionsTransformerFactory : NSObject {
    _PSContactCache *_contactCache;
}


@property (readonly, copy, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore


+(id)getCraftedIdentfierForSuggestion:(id)arg0 ;
+(id)getResultsFromTransformers:(id)arg0 suggestions:(id)arg1 ;
-(BOOL)isEligibleRecipient:(id)arg0 ;
-(id)annotateWithTrialExperimentIdentifiers:(SEL)arg0 rolloutIdentifiers:(id)arg1 ;
-(id)deduplicateWithMaxSuggestions:(SEL)arg0 ;
-(id)deduplicateWithSeedRecipients:(SEL)arg0 ;
-(id)filterIDSReachable:(SEL)arg0 ;
-(id)formatWithBundleIdsForGroupMatching:(SEL)arg0 ;
-(id)formatWithSuggestion:(id)arg0 bundleIdsForGroupMatching:(id)arg1 checkForMessagesGroupIdentifier:(BOOL)arg2 ;
-(id)init;
-(id)initWithInteractionStore:(id)arg0 ;
-(id)mapRecipientsToContactsWithUnmapped:(SEL)arg0 ;


@end


#endif