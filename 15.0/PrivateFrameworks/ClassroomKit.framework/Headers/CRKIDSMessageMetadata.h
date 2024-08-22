// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKIDSMESSAGEMETADATA_H
#define CRKIDSMESSAGEMETADATA_H

@class NSDictionary, NSUUID;
@protocol CRKDictionaryCodable;

#import <Foundation/Foundation.h>


@interface CRKIDSMessageMetadata : NSObject <CRKDictionaryCodable>



@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSUUID *messageIdentifier; // ivar: _messageIdentifier
@property (readonly, nonatomic) NSInteger messageType; // ivar: _messageType
@property (readonly, nonatomic) NSInteger messagingVersion; // ivar: _messagingVersion


+(id)instanceWithDictionary:(id)arg0 ;
+(id)metadataWithMessageType:(NSInteger)arg0 ;
-(id)initWithMessageIdentifier:(id)arg0 messageType:(NSInteger)arg1 messagingVersion:(NSInteger)arg2 ;


@end


#endif