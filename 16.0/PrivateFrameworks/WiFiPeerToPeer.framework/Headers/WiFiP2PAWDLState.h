// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIP2PAWDLSTATE_H
#define WIFIP2PAWDLSTATE_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "WiFiMACAddress.h"
#import "WiFiChannel.h"

@interface WiFiP2PAWDLState : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSArray *channelSequence; // ivar: _channelSequence
@property (readonly, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) WiFiMACAddress *macAddress; // ivar: _macAddress
@property (readonly, nonatomic) WiFiChannel *peerMasterChannel; // ivar: _peerMasterChannel
@property (readonly, nonatomic) WiFiChannel *peerPrimaryPreferredChannel; // ivar: _peerPrimaryPreferredChannel
@property (readonly, nonatomic) WiFiChannel *peerSecondaryPreferredChannel; // ivar: _peerSecondaryPreferredChannel
@property (readonly, nonatomic) unsigned int substate; // ivar: _substate
@property (readonly, nonatomic) BOOL supportsSoloMode; // ivar: _supportsSoloMode


+(BOOL)supportsSecureCoding;
+(id)currentState;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterfaceName:(id)arg0 supportsSoloMode:(BOOL)arg1 channelSequence:(id)arg2 isEnabled:(BOOL)arg3 substate:(unsigned int)arg4 macAddress:(id)arg5 peerMasterChannel:(id)arg6 peerPrimaryPreferredChannel:(id)arg7 peerSecondaryPreferredChannel:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif