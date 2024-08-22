// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTURNBASEDEXCHANGEINTERNAL_H
#define GKTURNBASEDEXCHANGEINTERNAL_H

@class NSDate, NSData, NSString, NSDictionary, NSArray;


#import "GKInternalRepresentation.h"

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation

@property (retain, nonatomic) NSDate *completionDate; // ivar: _completionDate
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSString *exchangeID; // ivar: _exchangeID
@property (retain, nonatomic) NSDictionary *localizableMessage; // ivar: _localizableMessage
@property (retain, nonatomic) NSArray *recipientIndexes; // ivar: _recipientIndexes
@property (retain, nonatomic) NSArray *replies; // ivar: _replies
@property (retain, nonatomic) NSDate *sendDate; // ivar: _sendDate
@property (nonatomic) unsigned char senderIndex; // ivar: _senderIndex
@property (retain, nonatomic) NSString *statusString; // ivar: _statusString
@property (retain, nonatomic) NSDate *timeoutDate; // ivar: _timeoutDate


+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif