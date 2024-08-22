// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRMEDIAREMOTESETARTWORKMESSAGE_H
#define NMRMEDIAREMOTESETARTWORKMESSAGE_H

@class NSString, NSData, NSNumber, NSDate;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRMediaRemoteSetArtworkMessage.h"

@interface NMRMediaRemoteSetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRMediaRemoteSetArtworkMessage *_protobuf;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jpegArtwork;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSData *originalDigest;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) Class superclass;


+(id)messageWithJPEGArtwork:(id)arg0 originalDigest:(id)arg1 originIdentifier:(id)arg2 ;
-(id)_initWithJPEGArtwork:(id)arg0 originalDigest:(id)arg1 originIdentifier:(id)arg2 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobufData;


@end


#endif