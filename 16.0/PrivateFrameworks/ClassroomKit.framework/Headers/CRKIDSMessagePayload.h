// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKIDSMESSAGEPAYLOAD_H
#define CRKIDSMESSAGEPAYLOAD_H

@class NSDictionary;
@protocol CRKDictionaryCodable;

#import <Foundation/Foundation.h>

#import "CRKIDSMessageMetadata.h"

@interface CRKIDSMessagePayload : NSObject <CRKDictionaryCodable>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, copy, nonatomic) NSDictionary *messageContent; // ivar: _messageContent
@property (readonly, nonatomic) CRKIDSMessageMetadata *messageMetadata; // ivar: _messageMetadata


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithMessageContent:(id)arg0 messageMetadata:(id)arg1 ;


@end


#endif