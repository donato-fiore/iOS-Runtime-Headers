// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPHOENIXANALYTICSEVENT_H
#define AXPHOENIXANALYTICSEVENT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface AXPhoenixAnalyticsEvent : NSObject

@property (retain, nonatomic) NSDictionary *eventInfo; // ivar: _eventInfo
@property (nonatomic) NSInteger eventType; // ivar: _eventType


+(BOOL)supportsSecureCoding;
-(id)_jsonData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(NSInteger)arg0 eventInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif