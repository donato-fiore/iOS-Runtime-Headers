// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSHOWSTOCKOVERVIEWREQUEST_H
#define STSHOWSTOCKOVERVIEWREQUEST_H

@class AFSiriRequest, NSString, NSNumber;



@interface STShowStockOverviewRequest : AFSiriRequest {
    NSString *_name;
    NSString *_symbol;
    NSString *_exchange;
    NSNumber *_price;
    NSNumber *_high;
    NSNumber *_low;
    NSNumber *_change;
    NSNumber *_changePercent;
    NSString *_chartData;
}




+(BOOL)supportsSecureCoding;
-(id)_initWithName:(id)arg0 symbol:(id)arg1 exchange:(id)arg2 price:(id)arg3 high:(id)arg4 low:(id)arg5 change:(id)arg6 changePercent:(id)arg7 chartData:(id)arg8 ;
-(id)change;
-(id)changePercent;
-(id)chartData;
-(id)createResponse;
-(id)exchange;
-(id)high;
-(id)initWithCoder:(id)arg0 ;
-(id)low;
-(id)name;
-(id)price;
-(id)symbol;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif