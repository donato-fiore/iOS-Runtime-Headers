// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPLAYMEDIAINTENT_H
#define INPLAYMEDIAINTENT_H

@class NSArray, NSString, NSDate, NSNumber;
@protocol INPlayMediaIntentExport;


#import "INIntent.h"
#import "INMediaItem.h"
#import "INMediaSearch.h"
#import "INPrivatePlayMediaIntentData.h"

@interface INPlayMediaIntent : INIntent <INPlayMediaIntentExport>



@property (copy, nonatomic) NSArray *alternativeResults;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (copy, nonatomic) NSArray *buckets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (readonly, copy, nonatomic) INMediaItem *mediaContainer;
@property (readonly, copy, nonatomic) NSArray *mediaItems;
@property (readonly, copy, nonatomic) INMediaSearch *mediaSearch;
@property (nonatomic) NSInteger parsecCategory;
@property (readonly, copy, nonatomic) NSNumber *playShuffled;
@property (readonly, nonatomic) NSInteger playbackQueueLocation;
@property (readonly, nonatomic) NSInteger playbackRepeatMode;
@property (readonly, copy, nonatomic) NSNumber *playbackSpeed;
@property (copy, nonatomic) INPrivatePlayMediaIntentData *privatePlayMediaIntentData;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (copy, nonatomic) NSString *recoID;
@property (readonly, copy, nonatomic) NSNumber *resumePlayback;
@property (readonly) Class superclass;


+(id)_ignoredParameters;
-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg0 context:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_keyCodableAttributes;
-(id)_metadata;
-(id)_spotlightContentType;
-(id)_titleWithLocalizer:(id)arg0 fromBundleURL:(id)arg1 ;
-(id)_typedBackingStore;
-(id)_validParameterCombinationsWithSchema:(id)arg0 ;
-(id)domain;
-(id)initWithMediaItems:(id)arg0 mediaContainer:(id)arg1 playShuffled:(id)arg2 playbackRepeatMode:(NSInteger)arg3 resumePlayback:(id)arg4 ;
-(id)initWithMediaItems:(id)arg0 mediaContainer:(id)arg1 playShuffled:(id)arg2 playbackRepeatMode:(NSInteger)arg3 resumePlayback:(id)arg4 playbackQueueLocation:(NSInteger)arg5 playbackSpeed:(id)arg6 mediaSearch:(id)arg7 ;
-(id)parametersByName;
-(id)verb;
-(struct ? )_intents_preferredScaledImageSize;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif