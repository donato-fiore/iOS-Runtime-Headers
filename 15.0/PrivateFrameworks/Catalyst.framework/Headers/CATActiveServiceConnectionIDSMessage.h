// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATACTIVESERVICECONNECTIONIDSMESSAGE_H
#define CATACTIVESERVICECONNECTIONIDSMESSAGE_H

@class NSUUID, NSDictionary, NSNumber;
@protocol CATIDSMessage, CATActiveIDSServiceConnectionMessageContent;

#import <Foundation/Foundation.h>


@interface CATActiveServiceConnectionIDSMessage : NSObject <CATIDSMessage>



@property (readonly, nonatomic) NSUUID *connectionIdentifier; // ivar: _connectionIdentifier
@property (readonly, nonatomic) NSObject<CATActiveIDSServiceConnectionMessageContent> *content; // ivar: _content
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSInteger messageType;
@property (readonly, nonatomic) NSNumber *receivedSequenceNumber; // ivar: _receivedSequenceNumber


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithConnectionIdentifier:(id)arg0 receivedSequenceNumber:(id)arg1 content:(id)arg2 ;


@end


#endif