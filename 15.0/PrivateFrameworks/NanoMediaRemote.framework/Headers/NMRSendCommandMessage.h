// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRSENDCOMMANDMESSAGE_H
#define NMRSENDCOMMANDMESSAGE_H

@class NSString, NSDictionary, NSNumber, NSDate;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRSendCommandMessageProtobuf.h"

@interface NMRSendCommandMessage : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRSendCommandMessageProtobuf *_protobuf;
}


@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned int command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) Class superclass;


+(id)messageWithCommand:(unsigned int)arg0 bundleID:(id)arg1 options:(id)arg2 originIdentifier:(id)arg3 ;
-(id)initWithCommand:(unsigned int)arg0 bundleID:(id)arg1 options:(id)arg2 originIdentifier:(id)arg3 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobufData;


@end


#endif