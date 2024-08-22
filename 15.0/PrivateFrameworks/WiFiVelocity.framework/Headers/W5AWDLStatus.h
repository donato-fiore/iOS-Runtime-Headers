// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef W5AWDLSTATUS_H
#define W5AWDLSTATUS_H

@class NSData, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5AWDLStatus : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger airDropDiscoverableMode; // ivar: _airDropDiscoverableMode
@property (copy, nonatomic) NSData *awdlElectionParameters; // ivar: _awdlElectionParameters
@property (copy, nonatomic) NSData *awdlMasterChannel; // ivar: _awdlMasterChannel
@property (copy, nonatomic) NSData *awdlOpMode; // ivar: _awdlOpMode
@property (copy, nonatomic) NSData *awdlPeerDatabase; // ivar: _awdlPeerDatabase
@property (copy, nonatomic) NSData *awdlSecondaryMasterChannel; // ivar: _awdlSecondaryMasterChannel
@property (copy, nonatomic) NSData *awdlSidecarDiagnostics; // ivar: _awdlSidecarDiagnostics
@property (copy, nonatomic) NSData *awdlStrategy; // ivar: _awdlStrategy
@property (copy, nonatomic) NSData *awdlSyncChannelSequence; // ivar: _awdlSyncChannelSequence
@property (copy, nonatomic) NSData *awdlSyncEnabled; // ivar: _awdlSyncEnabled
@property (copy, nonatomic) NSData *awdlSyncParameters; // ivar: _awdlSyncParameters
@property (copy, nonatomic) NSData *awdlSyncState; // ivar: _awdlSyncState
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (copy, nonatomic) NSArray *ipv6Addresses; // ivar: _ipv6Addresses
@property (nonatomic) BOOL isAWDLRealTimeMode; // ivar: _isAWDLRealTimeMode
@property (nonatomic) BOOL power; // ivar: _power


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAWDLStatus:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif