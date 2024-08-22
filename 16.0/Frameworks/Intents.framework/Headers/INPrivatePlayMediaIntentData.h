// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INPRIVATEPLAYMEDIAINTENTDATA_H
#define INPRIVATEPLAYMEDIAINTENTDATA_H

@class NSString, NSNumber, NSArray;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INPrivateMediaIntentData.h"

@interface INPrivatePlayMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *alternativeProviderBundleIdentifier; // ivar: _alternativeProviderBundleIdentifier
@property (readonly, copy, nonatomic) NSString *ampPAFDataSetID; // ivar: _ampPAFDataSetID
@property (readonly, copy, nonatomic) NSNumber *appInferred; // ivar: _appInferred
@property (readonly, copy, nonatomic) NSNumber *appSelectionEnabled; // ivar: _appSelectionEnabled
@property (readonly, copy, nonatomic) NSNumber *appSelectionSignalsEnabled; // ivar: _appSelectionSignalsEnabled
@property (readonly, copy, nonatomic) NSNumber *appSelectionSignalsFrequencyDenominator; // ivar: _appSelectionSignalsFrequencyDenominator
@property (readonly, copy, nonatomic) NSArray *audioSearchResults; // ivar: _audioSearchResults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *entityConfidenceSignalsEnabled; // ivar: _entityConfidenceSignalsEnabled
@property (readonly, copy, nonatomic) NSNumber *entityConfidenceSignalsFrequencyDenominatorInternal; // ivar: _entityConfidenceSignalsFrequencyDenominatorInternal
@property (readonly, copy, nonatomic) NSNumber *entityConfidenceSignalsFrequencyDenominatorProd; // ivar: _entityConfidenceSignalsFrequencyDenominatorProd
@property (readonly, copy, nonatomic) NSNumber *entityConfidenceSignalsMaxItemsToDisambiguate; // ivar: _entityConfidenceSignalsMaxItemsToDisambiguate
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *immediatelyStartPlayback; // ivar: _immediatelyStartPlayback
@property (readonly, copy, nonatomic) NSArray *internalSignals; // ivar: _internalSignals
@property (readonly, copy, nonatomic) NSNumber *isAmbiguousPlay; // ivar: _isAmbiguousPlay
@property (readonly, copy, nonatomic) NSNumber *isPersonalizedRequest; // ivar: _isPersonalizedRequest
@property (copy, nonatomic) INPrivateMediaIntentData *privateMediaIntentData; // ivar: _privateMediaIntentData
@property (readonly, copy, nonatomic) NSNumber *shouldSuppressCommonWholeHouseAudioRoutes; // ivar: _shouldSuppressCommonWholeHouseAudioRoutes
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithAppSelectionEnabled:(id)arg0 appInferred:(id)arg1 audioSearchResults:(id)arg2 ;
-(id)initWithAppSelectionEnabled:(id)arg0 appInferred:(id)arg1 audioSearchResults:(id)arg2 privateMediaIntentData:(id)arg3 ;
-(id)initWithAppSelectionEnabled:(id)arg0 appInferred:(id)arg1 audioSearchResults:(id)arg2 privateMediaIntentData:(id)arg3 appSelectionSignalsEnabled:(id)arg4 appSelectionSignalsFrequencyDenominator:(id)arg5 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg6 ;
-(id)initWithAppSelectionEnabled:(id)arg0 appInferred:(id)arg1 audioSearchResults:(id)arg2 privateMediaIntentData:(id)arg3 appSelectionSignalsEnabled:(id)arg4 appSelectionSignalsFrequencyDenominator:(id)arg5 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg6 immediatelyStartPlayback:(id)arg7 ;
-(id)initWithAppSelectionEnabled:(id)arg0 appInferred:(id)arg1 audioSearchResults:(id)arg2 privateMediaIntentData:(id)arg3 appSelectionSignalsEnabled:(id)arg4 appSelectionSignalsFrequencyDenominator:(id)arg5 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg6 immediatelyStartPlayback:(id)arg7 isAmbiguousPlay:(id)arg8 ;
-(id)initWithAppSelectionEnabled:(id)arg0 appInferred:(id)arg1 audioSearchResults:(id)arg2 privateMediaIntentData:(id)arg3 appSelectionSignalsEnabled:(id)arg4 appSelectionSignalsFrequencyDenominator:(id)arg5 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg6 immediatelyStartPlayback:(id)arg7 isAmbiguousPlay:(id)arg8 isPersonalizedRequest:(id)arg9 ;
-(id)initWithAppSelectionEnabled:(id)arg0 appInferred:(id)arg1 audioSearchResults:(id)arg2 privateMediaIntentData:(id)arg3 appSelectionSignalsEnabled:(id)arg4 appSelectionSignalsFrequencyDenominator:(id)arg5 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg6 immediatelyStartPlayback:(id)arg7 isAmbiguousPlay:(id)arg8 isPersonalizedRequest:(id)arg9 internalSignals:(id)arg10 entityConfidenceSignalsEnabled:(id)arg11 entityConfidenceSignalsFrequencyDenominatorInternal:(id)arg12 entityConfidenceSignalsFrequencyDenominatorProd:(id)arg13 entityConfidenceSignalsMaxItemsToDisambiguate:(id)arg14 ;
-(id)initWithAppSelectionEnabled:(id)arg0 appInferred:(id)arg1 audioSearchResults:(id)arg2 privateMediaIntentData:(id)arg3 appSelectionSignalsEnabled:(id)arg4 appSelectionSignalsFrequencyDenominator:(id)arg5 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg6 immediatelyStartPlayback:(id)arg7 isAmbiguousPlay:(id)arg8 isPersonalizedRequest:(id)arg9 internalSignals:(id)arg10 entityConfidenceSignalsEnabled:(id)arg11 entityConfidenceSignalsFrequencyDenominatorInternal:(id)arg12 entityConfidenceSignalsFrequencyDenominatorProd:(id)arg13 entityConfidenceSignalsMaxItemsToDisambiguate:(id)arg14 alternativeProviderBundleIdentifier:(id)arg15 ;
-(id)initWithAppSelectionEnabled:(id)arg0 appInferred:(id)arg1 audioSearchResults:(id)arg2 privateMediaIntentData:(id)arg3 appSelectionSignalsEnabled:(id)arg4 appSelectionSignalsFrequencyDenominator:(id)arg5 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg6 immediatelyStartPlayback:(id)arg7 isAmbiguousPlay:(id)arg8 isPersonalizedRequest:(id)arg9 internalSignals:(id)arg10 entityConfidenceSignalsEnabled:(id)arg11 entityConfidenceSignalsFrequencyDenominatorInternal:(id)arg12 entityConfidenceSignalsFrequencyDenominatorProd:(id)arg13 entityConfidenceSignalsMaxItemsToDisambiguate:(id)arg14 alternativeProviderBundleIdentifier:(id)arg15 ampPAFDataSetID:(id)arg16 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif