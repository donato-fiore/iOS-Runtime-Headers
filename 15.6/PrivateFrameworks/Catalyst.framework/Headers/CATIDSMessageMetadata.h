// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATIDSMESSAGEMETADATA_H
#define CATIDSMESSAGEMETADATA_H

@class NSDictionary, NSUUID;
@protocol CATDictionaryCodable;

#import <Foundation/Foundation.h>


@interface CATIDSMessageMetadata : NSObject <CATDictionaryCodable>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSUUID *messageIdentifier; // ivar: _messageIdentifier
@property (readonly, nonatomic) NSInteger messageType; // ivar: _messageType
@property (readonly, nonatomic) NSUInteger messagingVersion; // ivar: _messagingVersion


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithMessageIdentifier:(id)arg0 messageType:(NSInteger)arg1 messagingVersion:(NSInteger)arg2 ;
-(id)initWithMessageType:(NSInteger)arg0 ;


@end


#endif