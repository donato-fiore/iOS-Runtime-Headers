// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AACUSTODIANINVITATIONRESPONSECONTEXT_H
#define AACUSTODIANINVITATIONRESPONSECONTEXT_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AACustodianInvitationResponseContext : NSObject <NSSecureCoding>



@property (nonatomic, getter=isAccepted) BOOL accepted; // ivar: _accepted
@property (nonatomic, getter=isAutoAction) BOOL autoAction; // ivar: _autoAction
@property (copy, nonatomic) NSUUID *custodianID; // ivar: _custodianID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustodianID:(id)arg0 didAccept:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif