// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TEMPTOKEN_H
#define _TEMPTOKEN_H

@class NSString, GEOGenericCombinations, NSArray;
@protocol GEOServerFormatToken, GEOTransitArtworkDataSource, GEOServerFormatTokenCountdownValue, GEOServerFormatTokenManeuverValue, GEOServerFormatTokenNumberData, GEOServerFormatTokenPriceValue, GEOServerFormatTokenUrlValue;

#import <Foundation/Foundation.h>


@interface _TempToken : NSObject <GEOServerFormatToken>



@property (readonly, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (retain, nonatomic) NSObject<GEOTransitArtworkDataSource> *artworkValue; // ivar: _artworkValue
@property (retain, nonatomic) NSObject<GEOServerFormatTokenCountdownValue> *countdownValue; // ivar: _countdownValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOGenericCombinations *genericCombinations; // ivar: _genericCombinations
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<GEOServerFormatTokenManeuverValue> *maneuverValue; // ivar: _maneuverValue
@property (retain, nonatomic) NSObject<GEOServerFormatTokenNumberData> *numberData; // ivar: _numberData
@property (nonatomic) float percentageValue; // ivar: _percentageValue
@property (retain, nonatomic) NSObject<GEOServerFormatTokenPriceValue> *priceValue; // ivar: _priceValue
@property (readonly, nonatomic) BOOL shouldScaleUnits; // ivar: _shouldScaleUnits
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *timeStampValues; // ivar: _timeStampValues
@property (retain, nonatomic) NSString *token; // ivar: _token
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSObject<GEOServerFormatTokenUrlValue> *urlValue; // ivar: _urlValue
@property (nonatomic) unsigned int value1; // ivar: _value1
@property (nonatomic) unsigned int value2; // ivar: _value2
@property (retain, nonatomic) NSArray *value3s; // ivar: _value3s
@property (nonatomic) int waypointIndex; // ivar: _waypointIndex


-(id)initWithCoder:(id)arg0 ;
-(id)initWithToken:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif