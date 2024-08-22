// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPSTOCKLISTCOMPLICATIONDATA_H
#define SPSTOCKLISTCOMPLICATIONDATA_H

@class NSArray;
@protocol NSSecureCoding;


#import "SPComplicationData.h"

@interface SPStockListComplicationData : SPComplicationData <NSSecureCoding>



@property (retain, nonatomic) NSArray *stockList; // ivar: _stockList


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif