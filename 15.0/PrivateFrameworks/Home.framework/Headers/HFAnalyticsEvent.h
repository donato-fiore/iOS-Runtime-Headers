// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFANALYTICSEVENT_H
#define HFANALYTICSEVENT_H

@class NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface HFAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *payload;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithEventType:(NSUInteger)arg0 ;


@end


#endif