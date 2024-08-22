// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARSHAREEOROWNER_H
#define EKCALENDARSHAREEOROWNER_H

@class NSURL, NSString;
@protocol EKCalendarShareeOrOwner;

#import <Foundation/Foundation.h>


@interface EKCalendarShareeOrOwner : NSObject <EKCalendarShareeOrOwner>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing; // ivar: _isCurrentUserForSharing
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly) Class superclass;


+(id)ownerForEKCalendar:(id)arg0 ;
+(id)shareeWithEKSharee:(id)arg0 forCalendar:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif