// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMRMEDIAREMOTEGETICONMESSAGE_H
#define NMRMEDIAREMOTEGETICONMESSAGE_H

@class NSString, NSNumber, NSDate;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMRMediaRemoteGetIconMessage.h"

@interface NMRMediaRemoteGetIconMessage : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMRMediaRemoteGetIconMessage *_protobuf;
}


@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *height;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *width;


+(id)messageWithIconWidth:(CGFloat)arg0 height:(CGFloat)arg1 bundleID:(id)arg2 originIdentifier:(id)arg3 ;
-(id)_initWithIconWidth:(CGFloat)arg0 height:(CGFloat)arg1 bundleID:(id)arg2 originIdentifier:(id)arg3 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobufData;


@end


#endif