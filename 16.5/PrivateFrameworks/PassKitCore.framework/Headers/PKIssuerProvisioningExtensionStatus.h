// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKISSUERPROVISIONINGEXTENSIONSTATUS_H
#define PKISSUERPROVISIONINGEXTENSIONSTATUS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKIssuerProvisioningExtensionStatus : NSObject <NSSecureCoding>



@property (nonatomic) BOOL passEntriesAvailable; // ivar: _passEntriesAvailable
@property (nonatomic) BOOL remotePassEntriesAvailable; // ivar: _remotePassEntriesAvailable
@property (nonatomic) BOOL requiresAuthentication; // ivar: _requiresAuthentication


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif