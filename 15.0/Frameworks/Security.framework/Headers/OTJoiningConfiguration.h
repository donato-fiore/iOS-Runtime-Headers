// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OTJOININGCONFIGURATION_H
#define OTJOININGCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OTJoiningConfiguration : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *containerName; // ivar: _containerName
@property (retain, nonatomic) NSString *contextID; // ivar: _contextID
@property (nonatomic) NSUInteger epoch; // ivar: _epoch
@property (nonatomic) BOOL isInitiator; // ivar: _isInitiator
@property (retain, nonatomic) NSString *pairingUUID; // ivar: _pairingUUID
@property (retain, nonatomic) NSString *protocolType; // ivar: _protocolType
@property NSInteger timeout; // ivar: _timeout
@property (retain, nonatomic) NSString *uniqueClientID; // ivar: _uniqueClientID
@property (retain, nonatomic) NSString *uniqueDeviceID; // ivar: _uniqueDeviceID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtocolType:(id)arg0 uniqueDeviceID:(id)arg1 uniqueClientID:(id)arg2 pairingUUID:(id)arg3 containerName:(id)arg4 contextID:(id)arg5 epoch:(NSUInteger)arg6 isInitiator:(BOOL)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif