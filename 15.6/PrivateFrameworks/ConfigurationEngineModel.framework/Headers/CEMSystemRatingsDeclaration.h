// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSYSTEMRATINGSDECLARATION_H
#define CEMSYSTEMRATINGSDECLARATION_H

@class NSString, NSNumber;
@protocol CEMRegisteredTypeProtocol;


#import "CEMConfigurationBase.h"

@interface CEMSystemRatingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *payloadAllowExplicitContent; // ivar: _payloadAllowExplicitContent
@property (copy, nonatomic) NSNumber *payloadAllowShowingUndownloadedMovies; // ivar: _payloadAllowShowingUndownloadedMovies
@property (copy, nonatomic) NSNumber *payloadAllowShowingUndownloadedTV; // ivar: _payloadAllowShowingUndownloadedTV
@property (copy, nonatomic) NSNumber *payloadRatingApps; // ivar: _payloadRatingApps
@property (copy, nonatomic) NSNumber *payloadRatingMovies; // ivar: _payloadRatingMovies
@property (copy, nonatomic) NSString *payloadRatingRegion; // ivar: _payloadRatingRegion
@property (copy, nonatomic) NSNumber *payloadRatingTVShows; // ivar: _payloadRatingTVShows
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 withRatingRegion:(id)arg1 withRatingApps:(id)arg2 withRatingMovies:(id)arg3 withRatingTVShows:(id)arg4 withAllowExplicitContent:(id)arg5 withAllowShowingUndownloadedTV:(id)arg6 withAllowShowingUndownloadedMovies:(id)arg7 ;
+(id)profileType;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(id)assetReferences;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;
-(int)activationLevel;


@end


#endif