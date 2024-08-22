// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPSAFARIUSAGEPROPENSITY_H
#define _CPSAFARIUSAGEPROPENSITY_H

@class PBCodable, NSString, NSData;
@protocol _CPSafariUsagePropensity, NSSecureCoding;


#import "_CPEngagementShareRatio.h"
#import "_CPEngagementTriggerRatio.h"

@interface _CPSafariUsagePropensity : PBCodable <_CPSafariUsagePropensity, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _CPEngagementShareRatio *engagementShareRatio; // ivar: _engagementShareRatio
@property (nonatomic) float goToSite; // ivar: _goToSite
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float localGoto; // ivar: _localGoto
@property (nonatomic) float localTap; // ivar: _localTap
@property (nonatomic) float other; // ivar: _other
@property (nonatomic) float parsecAppStore; // ivar: _parsecAppStore
@property (nonatomic) float parsecGoto; // ivar: _parsecGoto
@property (nonatomic) float parsecMaps; // ivar: _parsecMaps
@property (nonatomic) float parsecNews; // ivar: _parsecNews
@property (nonatomic) float parsecOther; // ivar: _parsecOther
@property (nonatomic) float parsecStocks; // ivar: _parsecStocks
@property (nonatomic) float parsecTap; // ivar: _parsecTap
@property (nonatomic) float parsecWeather; // ivar: _parsecWeather
@property (nonatomic) float parsecWeb; // ivar: _parsecWeb
@property (nonatomic) float parsecWiki; // ivar: _parsecWiki
@property (readonly) Class superclass;
@property (nonatomic) float thirdPartyCompletionOrRecentSearch; // ivar: _thirdPartyCompletionOrRecentSearch
@property (nonatomic) float thirdPartyGoto; // ivar: _thirdPartyGoto
@property (nonatomic) float thirdPartyTap; // ivar: _thirdPartyTap
@property (retain, nonatomic) _CPEngagementTriggerRatio *topHitTriggerRatio; // ivar: _topHitTriggerRatio
@property (nonatomic) int totalEngagements; // ivar: _totalEngagements
@property (nonatomic) int totalTopHitEngagements; // ivar: _totalTopHitEngagements


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif