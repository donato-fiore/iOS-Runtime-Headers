// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CODISCOVERYRECORD_H
#define CODISCOVERYRECORD_H

@class NSString, RPCompanionLinkDevice, NSOrderedSet;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "COConstituent.h"

@interface CODiscoveryRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *IDSIdentifier; // ivar: _IDSIdentifier
@property (readonly, nonatomic) RPCompanionLinkDevice *companionLinkDevice; // ivar: _companionLinkDevice
@property (retain, nonatomic) COConstituent *constituent; // ivar: _constituent
@property (retain, nonatomic) NSOrderedSet *destinations; // ivar: _destinations
@property (readonly, nonatomic) NSString *rapportIdentifier; // ivar: _rapportIdentifier


+(BOOL)supportsSecureCoding;
+(id)_destinationForPeerAddress:(id)arg0 listeningPort:(unsigned short)arg1 ;
+(id)discoveryRecordWithElectionRequest:(id)arg0 ;
+(id)discoveryRecordWithNode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDiscoveryRecord:(id)arg0 ;
-(BOOL)shouldAdvertise;
-(NSUInteger)hash;
-(id)_initWithConstituent:(id)arg0 rapportIdentifier:(id)arg1 IDSIdentifier:(id)arg2 destinations:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDiscoveryRecord:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif