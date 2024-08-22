// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMBIOMEEVENT_H
#define EMBIOMEEVENT_H

@class NSString, NSDictionary;
@protocol EFLoggable, BMStoreData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EMBiomeEvent : NSObject <EFLoggable, BMStoreData, NSSecureCoding>



@property (readonly, nonatomic) unsigned int dataVersion; // ivar: _dataVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *eventName; // ivar: _eventName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *messageId; // ivar: _messageId
@property (readonly, copy, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)log;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventName:(id)arg0 messageId:(id)arg1 payload:(id)arg2 ;
-(id)json;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif