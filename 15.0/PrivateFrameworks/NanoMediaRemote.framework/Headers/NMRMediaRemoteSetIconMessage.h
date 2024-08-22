// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRMEDIAREMOTESETICONMESSAGE_H
#define NMRMEDIAREMOTESETICONMESSAGE_H

@class NSString, NSData, NSNumber, NSDate;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRMediaRemoteSetIconMessage.h"

@interface NMRMediaRemoteSetIconMessage : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRMediaRemoteSetIconMessage *_protobuf;
}


@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *icon;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSData *originalDigest;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) Class superclass;


+(id)messageWithIcon:(id)arg0 originalDigest:(id)arg1 bundleID:(id)arg2 originIdentifier:(id)arg3 ;
-(id)_initWithIcon:(id)arg0 originalDigest:(id)arg1 bundleID:(id)arg2 originIdentifier:(id)arg3 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobufData;


@end


#endif