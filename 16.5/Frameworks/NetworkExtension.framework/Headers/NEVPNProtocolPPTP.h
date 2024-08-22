// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEVPNPROTOCOLPPTP_H
#define NEVPNPROTOCOLPPTP_H



#import "NEVPNProtocolPPP.h"

@interface NEVPNProtocolPPTP : NEVPNProtocolPPP

@property NSInteger encryptionLevel; // ivar: _encryptionLevel


+(BOOL)supportsSecureCoding;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct __SCNetworkInterface *)createInterface;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif