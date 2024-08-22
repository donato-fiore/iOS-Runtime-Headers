// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEVPN_H
#define NEVPN_H

@class NSArray;
@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NEVPNProtocol.h"

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>



@property (nonatomic, getter=isDisconnectOnDemandEnabled) BOOL disconnectOnDemandEnabled; // ivar: _disconnectOnDemandEnabled
@property (getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy) NSArray *exceptionApps; // ivar: _exceptionApps
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled; // ivar: _onDemandEnabled
@property (copy) NSArray *onDemandRules; // ivar: _onDemandRules
@property (nonatomic, getter=isOnDemandUserOverrideDisabled) BOOL onDemandUserOverrideDisabled; // ivar: _onDemandUserOverrideDisabled
@property (copy) NEVPNProtocol *protocol; // ivar: _protocol
@property NSInteger tunnelType; // ivar: _tunnelType


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif