// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASFASTSYNCMESSAGEDATA_H
#define ICASFASTSYNCMESSAGEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASFastSyncMessageData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *avgMessageSizeInBytes; // ivar: _avgMessageSizeInBytes
@property (readonly, nonatomic) NSNumber *countOfMessagesReceived; // ivar: _countOfMessagesReceived
@property (readonly, nonatomic) NSNumber *countOfMessagesSent; // ivar: _countOfMessagesSent
@property (readonly, nonatomic) NSNumber *maxMessageSizeInBytes; // ivar: _maxMessageSizeInBytes


+(id)dataName;
-(id)initWithCountOfMessagesSent:(id)arg0 countOfMessagesReceived:(id)arg1 avgMessageSizeInBytes:(id)arg2 maxMessageSizeInBytes:(id)arg3 ;
-(id)toDict;


@end


#endif