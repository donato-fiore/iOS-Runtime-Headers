// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DAESUBSCRIBEDCALENDARSUMMARY_H
#define DAESUBSCRIBEDCALENDARSUMMARY_H

@class NSString, NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAESubscribedCalendarSummary : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *color; // ivar: _color
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSString *notes; // ivar: _notes
@property (nonatomic) CGFloat refreshInterval; // ivar: _refreshInterval
@property (retain, nonatomic) NSString *subscriptionID; // ivar: _subscriptionID
@property (retain, nonatomic) NSURL *subscriptionURL; // ivar: _subscriptionURL
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif