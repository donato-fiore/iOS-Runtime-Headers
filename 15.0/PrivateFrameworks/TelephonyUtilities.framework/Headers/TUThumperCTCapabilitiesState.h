// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUTHUMPERCTCAPABILITIESSTATE_H
#define TUTHUMPERCTCAPABILITIESSTATE_H

@class NSString, NSSet;
@protocol NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying;


#import "TUCTCapabilitiesState.h"

@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>



@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (nonatomic, getter=isApproved) BOOL approved; // ivar: _approved
@property (copy, nonatomic) NSSet *approvedSecondaryDeviceIDs; // ivar: _approvedSecondaryDeviceIDs
@property (nonatomic, getter=isAssociated) BOOL associated; // ivar: _associated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localDeviceID; // ivar: _localDeviceID
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDefaultPairedDevice; // ivar: _supportsDefaultPairedDevice


+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCapabilitiesState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapabilityInfo:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)publiclyAccessibleCopy;
-(id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif