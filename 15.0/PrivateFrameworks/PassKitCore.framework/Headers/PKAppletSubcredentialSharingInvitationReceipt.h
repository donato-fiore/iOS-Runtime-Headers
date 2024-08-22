// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLETSUBCREDENTIALSHARINGINVITATIONRECEIPT_H
#define PKAPPLETSUBCREDENTIALSHARINGINVITATIONRECEIPT_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKSharedAppletSubcredentialMetadata.h"

@interface PKAppletSubcredentialSharingInvitationReceipt : NSObject <NSSecureCoding>



@property (nonatomic, getter=isForWatch) BOOL forWatch; // ivar: _forWatch
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKSharedAppletSubcredentialMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *recipientIdentifier; // ivar: _recipientIdentifier
@property (nonatomic) BOOL requiresAuthentication; // ivar: _requiresAuthentication
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier; // ivar: _sharingSessionIdentifier
@property (nonatomic) NSUInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInvitationReceipt:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvitationData:(id)arg0 recipientIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif