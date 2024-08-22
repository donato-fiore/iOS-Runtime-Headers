// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SESPEERIDENTITY_H
#define SESPEERIDENTITY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SESPeerIdentity : NSObject

@property (readonly) NSData *peerData; // ivar: _peerData
@property (readonly) NSData *peerIdentifier; // ivar: _peerIdentifier


+(id)withOTPeerIdentity:(id)arg0 ;
+(id)withPeerIdentifier:(id)arg0 peerData:(id)arg1 ;
-(id)asOTPeerIdentity;


@end


#endif