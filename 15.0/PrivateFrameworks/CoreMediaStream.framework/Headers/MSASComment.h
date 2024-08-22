// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSASCOMMENT_H
#define MSASCOMMENT_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSASComment : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *GUID; // ivar: _GUID
@property (nonatomic) int ID; // ivar: _ID
@property (retain, nonatomic) NSDate *clientTimestamp; // ivar: _clientTimestamp
@property (retain, nonatomic) NSString *content; // ivar: _content
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (nonatomic) BOOL isBatchComment; // ivar: _isBatchComment
@property (nonatomic) BOOL isCaption; // ivar: _isCaption
@property (nonatomic) BOOL isDeletable; // ivar: _isDeletable
@property (nonatomic) BOOL isLike; // ivar: _isLike
@property (nonatomic) BOOL isMine; // ivar: _isMine
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *personID; // ivar: _personID
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)MSASPCommentFromProtocolDictionary:(id)arg0 ;
+(id)comment;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif