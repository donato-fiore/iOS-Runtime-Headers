// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMRORIGININFO_H
#define NMRORIGININFO_H

@class NSString, NSData;
@protocol NMRMediaRemoteProtobufCodable;

#import <Foundation/Foundation.h>

#import "_NMROriginProtobuf.h"

@interface NMROriginInfo : NSObject <NMRMediaRemoteProtobufCodable>

 {
    _NMROriginProtobuf *_protobuf;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *deviceInfoData;
@property (retain, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) int uniqueIdentifier;


-(id)init;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithProtobufData:(id)arg0 ;
-(id)protobuf;
-(id)protobufData;


@end


#endif