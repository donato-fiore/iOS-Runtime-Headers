// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSESSION_H
#define CPSESSION_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPSession : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *createdByAccountID; // ivar: _createdByAccountID
@property (retain, nonatomic) NSDictionary *members; // ivar: _members
@property (readonly, nonatomic) NSString *receivedFromAccountID; // ivar: _receivedFromAccountID
@property (readonly, retain, nonatomic) NSString *sessionID; // ivar: _sessionID


+(BOOL)supportsSecureCoding;
+(id)memberStateToString:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_idsMembersExcludingSelf:(id)arg0 withState:(unsigned char)arg1 ;
-(id)acceptedIDSMembersExcludingSelf:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 createdBy:(id)arg1 memberState:(id)arg2 receivedFrom:(id)arg3 ;
-(id)initWithSessionID:(id)arg0 createdByAccountID:(id)arg1 ;
-(id)initWithSessionID:(id)arg0 createdByAccountID:(id)arg1 receivedFromAccountID:(id)arg2 ;
-(id)invitedIDSMembersExcludingSelf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMember:(id)arg0 state:(unsigned char)arg1 ;


@end


#endif