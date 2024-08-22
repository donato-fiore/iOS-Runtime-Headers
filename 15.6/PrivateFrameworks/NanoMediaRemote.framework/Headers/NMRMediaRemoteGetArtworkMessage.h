// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRMEDIAREMOTEGETARTWORKMESSAGE_H
#define NMRMEDIAREMOTEGETARTWORKMESSAGE_H

@class NSString, NSNumber, NSDate;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRMediaRemoteGetArtworkMessage.h"

@interface NMRMediaRemoteGetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRMediaRemoteGetArtworkMessage *_protobuf;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) Class superclass;


+(id)messageWithOriginIdentifier:(id)arg0 ;
-(id)_initWithOriginIdentifier:(id)arg0 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobufData;


@end


#endif