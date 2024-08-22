// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRSENDCOMMANDRESULTMESSAGE_H
#define NMRSENDCOMMANDRESULTMESSAGE_H

@class NSString, NSArray, NSNumber, NSDate;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRSendCommandResultMessageProtobuf.h"

@interface NMRSendCommandResultMessage : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRSendCommandResultMessageProtobuf *_protobuf;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int errorCode;
@property (readonly, nonatomic) NSArray *handlerReturnStatuses;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) Class superclass;


+(id)messageWithErrorCode:(unsigned int)arg0 handlerReturnStatuses:(id)arg1 originIdentifier:(id)arg2 ;
-(id)_initWithErrorCode:(unsigned int)arg0 handlerReturnStatuses:(id)arg1 originIdentifier:(id)arg2 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobufData;


@end


#endif