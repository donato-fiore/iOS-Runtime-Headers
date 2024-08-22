// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIANALYTICSXPCMESSAGEENVELOPE_H
#define SIRIANALYTICSXPCMESSAGEENVELOPE_H

@class NSData, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsXPCMessageEnvelope : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *messageBody; // ivar: _messageBody
@property (readonly, nonatomic) NSInteger messageType; // ivar: _messageType
@property (readonly, copy, nonatomic) NSUUID *streamUUID; // ivar: _streamUUID
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(NSUInteger)arg0 streamUUID:(id)arg1 messageType:(NSInteger)arg2 messageBody:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif