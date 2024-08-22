// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPSPOTLIGHTUSAGEPROPENSITY_H
#define _CPSPOTLIGHTUSAGEPROPENSITY_H

@class PBCodable, NSString, NSData;
@protocol _CPSpotlightUsagePropensity, NSSecureCoding;


#import "_CPEngagementShareRatio.h"
#import "_CPEngagementTriggerRatio.h"

@interface _CPSpotlightUsagePropensity : PBCodable <_CPSpotlightUsagePropensity, NSSecureCoding>



@property (nonatomic) float appLaunch; // ivar: _appLaunch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _CPEngagementShareRatio *engagementShareRatio; // ivar: _engagementShareRatio
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float onDeviceAddressBookData; // ivar: _onDeviceAddressBookData
@property (nonatomic) float onDeviceOtherPersonalData; // ivar: _onDeviceOtherPersonalData
@property (nonatomic) float other; // ivar: _other
@property (nonatomic) float parsec; // ivar: _parsec
@property (nonatomic) float parsecAppStore; // ivar: _parsecAppStore
@property (nonatomic) float parsecMaps; // ivar: _parsecMaps
@property (nonatomic) float parsecNews; // ivar: _parsecNews
@property (nonatomic) float parsecOther; // ivar: _parsecOther
@property (nonatomic) float parsecStocks; // ivar: _parsecStocks
@property (nonatomic) float parsecWeather; // ivar: _parsecWeather
@property (nonatomic) float parsecWeb; // ivar: _parsecWeb
@property (nonatomic) float parsecWiki; // ivar: _parsecWiki
@property (nonatomic) float punchout; // ivar: _punchout
@property (nonatomic) float querySuggestion; // ivar: _querySuggestion
@property (retain, nonatomic) _CPEngagementTriggerRatio *querySuggestionTriggerRatio; // ivar: _querySuggestionTriggerRatio
@property (nonatomic) float siriSuggestions; // ivar: _siriSuggestions
@property (readonly) Class superclass;
@property (nonatomic) float thirdPartyInAppContent; // ivar: _thirdPartyInAppContent
@property (retain, nonatomic) _CPEngagementTriggerRatio *topHitTriggerRatio; // ivar: _topHitTriggerRatio
@property (nonatomic) int totalEngagements; // ivar: _totalEngagements
@property (nonatomic) int totalTopHitEngagements; // ivar: _totalTopHitEngagements
@property (nonatomic) float webSuggestions; // ivar: _webSuggestions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif