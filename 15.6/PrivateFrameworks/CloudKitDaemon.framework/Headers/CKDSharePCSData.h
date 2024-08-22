// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDSHAREPCSDATA_H
#define CKDSHAREPCSDATA_H

@class NSData, NSString, CKRecordID;
@protocol NSSecureCoding, NSCopying;


#import "CKDPCSData.h"

@interface CKDSharePCSData : CKDPCSData <NSSecureCoding, NSCopying>



@property (nonatomic) *_OpaquePCSShareProtection invitedPCS;
@property (nonatomic) *_OpaquePCSShareProtection myParticipantPCS; // ivar: _myParticipantPCS
@property (copy, nonatomic) NSData *myParticipantPCSData; // ivar: _myParticipantPCSData
@property (nonatomic) NSInteger myParticipantPermission; // ivar: _myParticipantPermission
@property (nonatomic) NSInteger myParticipantRole; // ivar: _myParticipantRole
@property (nonatomic) *_OpaquePCSShareProtection preKeyRollInvitedPCS; // ivar: _preKeyRollInvitedPCS
@property (nonatomic) *_OpaquePCSShareProtection publicPCS; // ivar: _publicPCS
@property (copy, nonatomic) NSData *publicPCSData; // ivar: _publicPCSData
@property (copy, nonatomic) NSString *publicPCSEtag; // ivar: _publicPCSEtag
@property (nonatomic) NSInteger publicPermission; // ivar: _publicPermission
@property (nonatomic) NSUInteger serviceType; // ivar: _serviceType
@property (retain, nonatomic) NSString *shareEtag; // ivar: _shareEtag
@property (retain, nonatomic) CKRecordID *shareID; // ivar: _shareID


+(BOOL)supportsSecureCoding;
+(id)dataWithShare:(id)arg0 serviceType:(NSUInteger)arg1 ;
+(id)dataWithShareID:(id)arg0 pcsData:(id)arg1 ;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShareID:(id)arg0 pcsData:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif