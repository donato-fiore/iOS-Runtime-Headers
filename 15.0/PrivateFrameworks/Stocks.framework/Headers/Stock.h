// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STOCK_H
#define STOCK_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "StockDataSource.h"
#import "Exchange.h"

@interface Stock : NSObject {
    StockChartData" _chartDataArray;
}


@property (retain, nonatomic) NSString *averageVolume; // ivar: _averageVolume
@property (retain, nonatomic) NSString *change; // ivar: _change
@property (retain, nonatomic) NSString *companyName; // ivar: _companyName
@property (retain, nonatomic) NSString *currency; // ivar: _currency
@property (retain, nonatomic) StockDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSString *dividendYield; // ivar: _dividendYield
@property (retain, nonatomic) Exchange *exchange; // ivar: _exchange
@property (readonly, nonatomic) NSString *formattedChange;
@property (readonly, nonatomic) NSString *formattedChangePercent;
@property (readonly, nonatomic) NSString *formattedPrice;
@property (retain, nonatomic) NSString *high; // ivar: _high
@property (retain, nonatomic) NSURL *infoURL; // ivar: _infoURL
@property (retain, nonatomic) NSString *low; // ivar: _low
@property (readonly, nonatomic) NSString *marketStatusDescription;
@property (retain, nonatomic) NSString *marketcap; // ivar: _marketcap
@property (retain, nonatomic) NSString *open; // ivar: _open
@property (retain, nonatomic) NSString *peRatio; // ivar: _peRatio
@property (retain, nonatomic) NSString *price; // ivar: _price
@property (readonly, nonatomic) unsigned int pricePrecision; // ivar: _pricePrecision
@property (retain, nonatomic) NSString *shortCompanyName; // ivar: _shortCompanyName
@property (retain, nonatomic) NSString *symbol; // ivar: _symbol
@property (retain, nonatomic) NSString *symbolType; // ivar: _symbolType
@property (nonatomic) CGFloat timeMetadataLastUpdated; // ivar: _timeMetadataLastUpdated
@property (nonatomic) CGFloat timeQuoteLastUpdated; // ivar: _timeQuoteLastUpdated
@property (nonatomic, getter=isTransient) BOOL transient; // ivar: _transient
@property (retain, nonatomic) NSString *volume; // ivar: _volume
@property (retain, nonatomic) NSString *yearHigh; // ivar: _yearHigh
@property (retain, nonatomic) NSString *yearLow; // ivar: _yearLow


+(id)BlankValueString;
+(id)_potentiallyAbsentKeys;
+(id)listNameOverridesBySymbol;
+(id)localizedMagnitudeAbbreviatedStringWithString:(id)arg0 ;
+(id)localizedMagnitudeAbbreviatedStringWithString:(id)arg0 fractionDigits:(unsigned int)arg1 ;
+(id)postfixCharacterForMagnitude:(unsigned int)arg0 unitMagnitude:(*unsigned int)arg1 ;
+(id)symbolForURL:(id)arg0 ;
+(id)urlForStock:(id)arg0 ;
+(id)urlForStockSymbol:(id)arg0 ;
-(BOOL)doesMetadataNeedUpdate;
-(BOOL)doesQuoteNeedUpdate;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIndex;
-(BOOL)isMetadataStale;
-(BOOL)isQuoteStale;
-(BOOL)marketIsOpen;
-(BOOL)shouldUseCompanyNameAsListName:(NSUInteger)arg0 ;
-(CGFloat)_updateInterval;
-(NSUInteger)hash;
-(id)archiveDictionary;
-(id)chartDataForInterval:(NSInteger)arg0 ;
-(id)description;
-(id)formattedChangePercent:(BOOL)arg0 ;
-(id)formattedPriceDroppingFractionDigitsIfLengthExceeds:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)listName;
-(id)listNameOverride;
-(id)listNameWithMaxIndexNameLength:(NSUInteger)arg0 ;
-(void)_updatePricePrecision;
-(void)dealloc;
-(void)populateFromDictionary:(id)arg0 ;
-(void)setChartData:(id)arg0 forInterval:(NSInteger)arg1 ;
-(void)updateMetadataWithDictionary:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)updateQuoteWithDictionary:(id)arg0 forTime:(CGFloat)arg1 ;


@end


#endif