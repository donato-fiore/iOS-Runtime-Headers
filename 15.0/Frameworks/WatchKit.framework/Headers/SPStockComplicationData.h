// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPSTOCKCOMPLICATIONDATA_H
#define SPSTOCKCOMPLICATIONDATA_H

@class NSString;
@protocol NSSecureCoding;


#import "SPComplicationData.h"

@interface SPStockComplicationData : SPComplicationData <NSSecureCoding>



@property (nonatomic) NSUInteger changeDirection; // ivar: _changeDirection
@property (retain, nonatomic) NSString *changeInPercentText; // ivar: _changeInPercentText
@property (retain, nonatomic) NSString *changeInPointsText; // ivar: _changeInPointsText
@property (retain, nonatomic) NSString *changeText; // ivar: _changeText
@property (retain, nonatomic) NSString *marketCapText; // ivar: _marketCapText
@property (retain, nonatomic) NSString *priceText; // ivar: _priceText
@property (retain, nonatomic) NSString *tickerSymbolText; // ivar: _tickerSymbolText


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif