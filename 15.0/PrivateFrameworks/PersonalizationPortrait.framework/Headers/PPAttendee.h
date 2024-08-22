// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPATTENDEE_H
#define PPATTENDEE_H

@class NSString, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPAttendee : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (readonly, nonatomic) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned char status; // ivar: _status
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAttendee:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEKParticipant:(id)arg0 ;
-(id)initWithName:(id)arg0 emailAddress:(id)arg1 url:(id)arg2 isCurrentUser:(BOOL)arg3 status:(unsigned char)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif