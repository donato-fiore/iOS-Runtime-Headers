// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLMOMENTSHAREPARTICIPANT_H
#define CPLMOMENTSHAREPARTICIPANT_H

@class NSString, NSPersonNameComponents;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLMomentShareParticipant : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *email; // ivar: _email
@property (nonatomic) BOOL hasiCloudAccount; // ivar: _hasiCloudAccount
@property (nonatomic) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (nonatomic) short status; // ivar: _status
@property (nonatomic) short type; // ivar: _type
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
+(id)momentShareParticipantsFromParticipants:(id)arg0 ;
+(id)shareParticipantsFromMomentShareParticipants:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)asShareParticipant;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShareParticipant:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif