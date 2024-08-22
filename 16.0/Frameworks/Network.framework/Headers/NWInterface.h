// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWINTERFACE_H
#define NWINTERFACE_H

@class NSString;
@protocol NWPrettyDescription, NSSecureCoding, NSCopying, OS_nw_interface;

#import <Foundation/Foundation.h>

#import "NWInterface.h"

@interface NWInterface : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSObject<OS_nw_interface> *cInterface;
@property (readonly, nonatomic, getter=isConstrained) BOOL constrained;
@property (readonly, nonatomic) NWInterface *delegateInterface;
@property (readonly, nonatomic, getter=isExpensive) BOOL expensive;
@property (readonly, nonatomic) NSUInteger generation;
@property (readonly, nonatomic) BOOL hasDNS;
@property (readonly, nonatomic) BOOL hasNAT64;
@property (readonly, nonatomic) NSUInteger interfaceIndex;
@property (readonly, nonatomic) NSString *interfaceName;
@property (retain) NSObject<OS_nw_interface> *internalInterface; // ivar: _internalInterface
@property (readonly, nonatomic, getter=isIPv4Routable) BOOL ipv4Routable;
@property (readonly, nonatomic, getter=isIPv6Routable) BOOL ipv6Routable;
@property (readonly, nonatomic) NSInteger mtu;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) NSInteger subtype;
@property (readonly, nonatomic) BOOL supportsMulticast;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) NSString *typeString;


+(BOOL)supportsSecureCoding;
+(id)descriptionForSubtype:(NSInteger)arg0 ;
+(id)descriptionForType:(NSInteger)arg0 ;
+(id)interfaceWithProtocolBufferData:(id)arg0 ;
-(BOOL)isDeepEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isShallowEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyLocalAddressForDefaultIPv4;
-(id)copyLocalAddressForDefaultIPv6;
-(id)copyLocalAddressForRemoteAddress:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createProtocolBufferObject;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterface:(id)arg0 ;
-(id)initWithInterfaceIndex:(NSUInteger)arg0 ;
-(id)initWithInterfaceIndex:(NSUInteger)arg0 interfaceName:(id)arg1 ;
-(id)initWithInterfaceName:(id)arg0 ;
-(id)ipv4Broadcast;
-(id)ipv4Netmask;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif