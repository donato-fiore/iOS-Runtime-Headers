// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GETCONTACTINTENT_H
#define GETCONTACTINTENT_H

@class INIntent, NSString, NSNumber, NSArray;



@interface GetContactIntent : INIntent

@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *contactRelation;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, retain) NSNumber *isMe;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *middleName;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSArray *siriMatches;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif