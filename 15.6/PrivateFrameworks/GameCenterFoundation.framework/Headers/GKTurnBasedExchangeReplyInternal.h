// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKTURNBASEDEXCHANGEREPLYINTERNAL_H
#define GKTURNBASEDEXCHANGEREPLYINTERNAL_H

@class NSData, NSDictionary, NSDate;


#import "GKInternalRepresentation.h"

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation

@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSDictionary *localizableMessage; // ivar: _localizableMessage
@property (nonatomic) unsigned char recipientIndex; // ivar: _recipientIndex
@property (retain, nonatomic) NSDate *replyDate; // ivar: _replyDate


+(id)secureCodedPropertyKeys;


@end


#endif