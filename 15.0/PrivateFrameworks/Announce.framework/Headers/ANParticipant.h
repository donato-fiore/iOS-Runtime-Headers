// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANPARTICIPANT_H
#define ANPARTICIPANT_H

@class NSString, NSDictionary;
@protocol ANCompanionMessage, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ANParticipant : NSObject <ANCompanionMessage, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *homeKitID; // ivar: _homeKitID
@property (retain, nonatomic) NSString *homeKitUserID; // ivar: _homeKitUserID
@property (retain, nonatomic) NSString *idsID; // ivar: _idsID
@property (readonly, nonatomic) NSDictionary *info;
@property (nonatomic) BOOL isAccessory; // ivar: _isAccessory
@property (nonatomic) BOOL isEndpoint; // ivar: _isEndpoint
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *rapportID; // ivar: _rapportID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *userID; // ivar: _userID


+(BOOL)supportsSecureCoding;
+(id)participantsFromUsersInHome:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copy;
-(id)initWithAccessory:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithSender:(id)arg0 ;
-(id)initWithUser:(id)arg0 ;
-(id)initWithUser:(id)arg0 andAccessory:(id)arg1 ;
-(id)message;
-(id)messageForCompanion;
-(void)clearIdentifiers;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateWithAccessory:(id)arg0 ;
-(void)populateWithDevice:(id)arg0 ;
-(void)populateWithUser:(id)arg0 ;
-(void)populateWithUser:(id)arg0 andAccessory:(id)arg1 ;


@end


#endif