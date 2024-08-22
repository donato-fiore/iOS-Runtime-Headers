// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATSHARINGMESSAGE_H
#define CATSHARINGMESSAGE_H

@class NSDictionary;
@protocol CATDictionaryCodable;

#import <Foundation/Foundation.h>


@interface CATSharingMessage : NSObject <CATDictionaryCodable>



@property (readonly, copy, nonatomic) NSDictionary *contentDictionaryValue; // ivar: _contentDictionaryValue
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSInteger messageType; // ivar: _messageType


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithContentMessage:(id)arg0 ;
-(id)initWithMessageType:(NSInteger)arg0 contentDictionary:(id)arg1 ;


@end


#endif