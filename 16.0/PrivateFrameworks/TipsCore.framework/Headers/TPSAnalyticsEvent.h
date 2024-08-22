// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENT_H
#define TPSANALYTICSEVENT_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TPSAnalyticsDataProvider.h"

@interface TPSAnalyticsEvent : NSObject <NSSecureCoding>



@property (weak, nonatomic) TPSAnalyticsDataProvider *dataProvider; // ivar: _dataProvider
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *deliveryInfoVersion; // ivar: _deliveryInfoVersion


+(BOOL)supportsSecureCoding;
-(id)_discoverabilityStream;
-(id)analyticsEventRepresentation;
-(id)duetEvent;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)log;
-(void)persistKeys;


@end


#endif