// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATIDSMESSAGEPAYLOAD_H
#define CATIDSMESSAGEPAYLOAD_H

@class NSDictionary;
@protocol CATDictionaryCodable, CATIDSMessage;

#import <Foundation/Foundation.h>

#import "CATIDSMessageMetadata.h"

@interface CATIDSMessagePayload : NSObject <CATDictionaryCodable>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSObject<CATIDSMessage> *message; // ivar: _message
@property (readonly, nonatomic) CATIDSMessageMetadata *metadata; // ivar: _metadata


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 message:(id)arg1 ;


@end


#endif