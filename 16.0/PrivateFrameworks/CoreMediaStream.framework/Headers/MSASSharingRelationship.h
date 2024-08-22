// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSASSHARINGRELATIONSHIP_H
#define MSASSHARINGRELATIONSHIP_H

@class NSString, NSArray, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSASSharingRelationship : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) NSString *albumGUID; // ivar: _albumGUID
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSArray *emails; // ivar: _emails
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (nonatomic) BOOL isMine; // ivar: _isMine
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *personID; // ivar: _personID
@property (retain, nonatomic) NSArray *phones; // ivar: _phones
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) NSDate *subscriptionDate; // ivar: _subscriptionDate


+(BOOL)supportsSecureCoding;
+(id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSharingRelationship:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif