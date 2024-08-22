// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDAPPMETRICSEVENT_H
#define ASDAPPMETRICSEVENT_H

@class NSNumber, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDAppMetricsEvent : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger eventSubtype; // ivar: _eventSubtype
@property (copy, nonatomic) NSNumber *eventTime; // ivar: _eventTime
@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (copy, nonatomic) NSDictionary *payload; // ivar: _payload
@property (nonatomic, getter=isPosted) BOOL posted; // ivar: _posted


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif