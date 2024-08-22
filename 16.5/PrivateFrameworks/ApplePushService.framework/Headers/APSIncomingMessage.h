// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APSINCOMINGMESSAGE_H
#define APSINCOMINGMESSAGE_H

@class NSString, NSDate, NSData;


#import "APSMessage.h"

@interface APSIncomingMessage : APSMessage

@property (retain, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic, getter=wasFromStorage) BOOL fromStorage;
@property (nonatomic, getter=wasLastMessageFromStorage) BOOL lastMessageFromStorage;
@property (copy, nonatomic) NSData *perAppToken;
@property (nonatomic) NSInteger priority;
@property (nonatomic) unsigned int pushFlags;
@property (nonatomic) NSUInteger pushType;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSData *token;
@property (nonatomic, getter=isTracingEnabled) BOOL tracingEnabled;
@property (copy, nonatomic) NSData *tracingUUID;




@end


#endif