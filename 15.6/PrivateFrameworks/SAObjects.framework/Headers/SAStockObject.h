// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTOCKOBJECT_H
#define SASTOCKOBJECT_H

@class NSNumber, NSString, NSArray;


#import "SADomainObject.h"

@interface SAStockObject : SADomainObject

@property (copy, nonatomic) NSNumber *averageDailyVolume;
@property (copy, nonatomic) NSNumber *change;
@property (copy, nonatomic) NSNumber *changePercent;
@property (copy, nonatomic) NSString *chartData;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSString *displayStyle;
@property (copy, nonatomic) NSNumber *dividendYield;
@property (copy, nonatomic) NSNumber *earningsPerShare;
@property (copy, nonatomic) NSString *exchange;
@property (copy, nonatomic) NSNumber *fiftyTwoWeekHigh;
@property (copy, nonatomic) NSNumber *fiftyTwoWeekLow;
@property (copy, nonatomic) NSNumber *high;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSNumber *low;
@property (copy, nonatomic) NSString *marketCap;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *open;
@property (copy, nonatomic) NSNumber *peRatio;
@property (copy, nonatomic) NSNumber *prevClose;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *realTimeChange;
@property (copy, nonatomic) NSNumber *realTimeChangePercent;
@property (copy, nonatomic) NSNumber *realTimePrice;
@property (copy, nonatomic) NSNumber *realTimeTS;
@property (copy, nonatomic) NSArray *requests;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSArray *stockNews;
@property (copy, nonatomic) NSString *symbol;
@property (copy, nonatomic) NSNumber *timeStamp;
@property (copy, nonatomic) NSNumber *volume;
@property (copy, nonatomic) NSString *yearRange;


+(id)object;
+(id)objectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif