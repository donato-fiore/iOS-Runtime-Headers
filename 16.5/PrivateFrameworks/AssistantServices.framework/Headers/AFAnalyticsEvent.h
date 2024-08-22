// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFANALYTICSEVENT_H
#define AFANALYTICSEVENT_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *assistantId; // ivar: _assistantId
@property (readonly, copy, nonatomic) NSData *contextData; // ivar: _contextData
@property (readonly, nonatomic) NSInteger contextDataType; // ivar: _contextDataType
@property (readonly, nonatomic) NSUInteger deliveryStream; // ivar: _deliveryStream
@property (copy, nonatomic) NSString *speechId; // ivar: _speechId
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)eventsReferenceTime;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateStamp;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeliveryStream:(NSUInteger)arg0 type:(NSInteger)arg1 timestamp:(NSUInteger)arg2 contextDataType:(NSInteger)arg3 contextData:(id)arg4 ;
-(id)legacyTypeName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif