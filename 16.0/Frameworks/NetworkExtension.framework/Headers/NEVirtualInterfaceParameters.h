// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEVIRTUALINTERFACEPARAMETERS_H
#define NEVIRTUALINTERFACEPARAMETERS_H

@class NSFileHandle, NSData, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NEVirtualInterfaceParameters : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSFileHandle *controlSocket; // ivar: _controlSocket
@property (readonly) NSData *ethernetAddress; // ivar: _ethernetAddress
@property (readonly) NSUInteger maxPendingPackets; // ivar: _maxPendingPackets
@property (readonly) NSNumber *mtu; // ivar: _mtu
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) NSInteger type; // ivar: _type
@property (nonatomic) *void userEthernetController; // ivar: _userEthernetController


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 maxPendingPackets:(NSUInteger)arg1 ethernetAddress:(id)arg2 mtu:(id)arg3 ;
-(id)initWithVirtualInterface:(struct NEVirtualInterface_s *)arg0 ;
-(struct NEVirtualInterface_s *)createVirtualInterfaceWithQueue:(id)arg0 clientInfo:(*void)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif