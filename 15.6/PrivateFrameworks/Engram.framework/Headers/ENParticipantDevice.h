// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENPARTICIPANTDEVICE_H
#define ENPARTICIPANTDEVICE_H

@class NSData;
@protocol NSSecureCoding, ENCypher, ENDevicePublicKey;

#import <Foundation/Foundation.h>


@interface ENParticipantDevice : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<ENCypher> *cypher; // ivar: _cypher
@property (readonly, nonatomic) NSObject<ENDevicePublicKey> *devicePublicKey; // ivar: _devicePublicKey
@property (readonly, nonatomic) NSData *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevicePublicKey:(id)arg0 cypher:(id)arg1 identifier:(id)arg2 ;
-(id)signAndConcealData:(id)arg0 withSender:(id)arg1 cypherIdentifier:(*id)arg2 error:(*id)arg3 ;
-(id)verifyAndRevealData:(id)arg0 withReceipient:(id)arg1 cypherIdentifier:(id)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif