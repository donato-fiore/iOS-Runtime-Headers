// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPARTICIPANTTOCONTACTMATCHER_H
#define EKPARTICIPANTTOCONTACTMATCHER_H

@class NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface EKParticipantToContactMatcher : NSObject

@property (retain, nonatomic) NSSet *contactCompanyNames; // ivar: _contactCompanyNames
@property (retain, nonatomic) NSSet *contactEmailAddresses; // ivar: _contactEmailAddresses
@property (retain, nonatomic) NSSet *contactNameComponents; // ivar: _contactNameComponents
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts


+(id)_allParticipantsOnItem:(id)arg0 ;
+(id)_nameComponentsForContact:(id)arg0 reverse:(BOOL)arg1 ;
+(id)_nameComponentsWithGivenName:(id)arg0 familyName:(id)arg1 ;
-(BOOL)anyContactMatchesAnyParticipant:(id)arg0 ;
-(BOOL)anyContactMatchesAnyParticipantFromItem:(id)arg0 ;
-(BOOL)anyContactMatchesParticipant:(id)arg0 ;
-(id)initWithContacts:(id)arg0 ;
-(id)matchingParticipantsFromItem:(id)arg0 ;
-(id)matchingParticipantsFromParticipants:(id)arg0 ;
-(void)_cacheContactData;


@end


#endif