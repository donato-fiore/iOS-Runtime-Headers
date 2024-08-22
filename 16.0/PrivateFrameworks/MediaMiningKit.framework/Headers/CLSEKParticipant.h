// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSEKPARTICIPANT_H
#define CLSEKPARTICIPANT_H

@class NSURL, NSString;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface CLSEKParticipant : NSObject <NSCoding>



@property (readonly) NSURL *URL; // ivar: _URL
@property (readonly) NSString *emailAddress; // ivar: _emailAddress
@property (readonly) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSInteger participantStatus; // ivar: _participantStatus
@property (readonly) NSInteger participantType; // ivar: _participantType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEKParticipant:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif