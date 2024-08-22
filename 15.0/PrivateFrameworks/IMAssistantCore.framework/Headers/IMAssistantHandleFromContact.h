// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMASSISTANTHANDLEFROMCONTACT_H
#define IMASSISTANTHANDLEFROMCONTACT_H

@class NSString, CNContact, CNLabeledValue;

#import <Foundation/Foundation.h>


@interface IMAssistantHandleFromContact : NSObject

@property (readonly, nonatomic) NSString *businessID; // ivar: _businessID
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSString *displayID; // ivar: _displayID
@property (readonly, nonatomic) NSString *handleID;
@property (readonly, nonatomic) NSInteger handleType; // ivar: _handleType
@property (readonly, nonatomic) CNLabeledValue *labeledEmailAddress; // ivar: _labeledEmailAddress
@property (readonly, nonatomic) CNLabeledValue *labeledPhoneNumber; // ivar: _labeledPhoneNumber
@property (readonly, nonatomic) NSString *personHandleLabel;
@property (readonly, nonatomic) NSInteger personHandleType;


-(BOOL)matchesHandleID:(id)arg0 ;
-(BOOL)matchesIMHandle:(id)arg0 ;
-(id)_initWithPhoneNumber:(id)arg0 emailAddress:(id)arg1 businessID:(id)arg2 handleType:(NSInteger)arg3 contact:(id)arg4 ;
-(id)description;
-(id)initWithBusinessID:(id)arg0 ;
-(id)initWithCNLabeledEmailAddress:(id)arg0 contact:(id)arg1 ;
-(id)initWithCNLabeledPhoneNumber:(id)arg0 contact:(id)arg1 ;


@end


#endif