// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHAREDAPPLETSUBCREDENTIALMETADATA_H
#define PKSHAREDAPPLETSUBCREDENTIALMETADATA_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKAppletSubcredentialEntitlement.h"

@interface PKSharedAppletSubcredentialMetadata : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // ivar: _entitlement
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (nonatomic, getter=isLocalDevice) BOOL localDevice; // ivar: _localDevice
@property (copy, nonatomic) NSString *recipientHandle; // ivar: _recipientHandle
@property (copy, nonatomic) NSString *recipientIdentifier; // ivar: _recipientIdentifier
@property (nonatomic, getter=isRevoked) BOOL revoked; // ivar: _revoked
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier; // ivar: _sharingSessionIdentifier


+(BOOL)supportsSecureCoding;
+(id)metadataWithSharingRequest:(id)arg0 andInvitationReceipt:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif