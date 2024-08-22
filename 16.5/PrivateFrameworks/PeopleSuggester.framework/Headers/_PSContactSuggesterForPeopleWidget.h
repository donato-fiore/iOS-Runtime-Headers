// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSCONTACTSUGGESTERFORPEOPLEWIDGET_H
#define _PSCONTACTSUGGESTERFORPEOPLEWIDGET_H

@class _PASLock, NSMutableSet;

#import <Foundation/Foundation.h>


@interface _PSContactSuggesterForPeopleWidget : NSObject

@property (retain, nonatomic) _PASLock *candidateContacts; // ivar: _candidateContacts
@property (retain, nonatomic) NSMutableSet *nonpriorityFamilyMembers; // ivar: _nonpriorityFamilyMembers
@property (retain, nonatomic) NSMutableSet *priorityFamilyMembers; // ivar: _priorityFamilyMembers


-(id)allEmailAndPhoneNumberHandlesForContact:(id)arg0 ;
-(id)contactKeysToFetch;
-(id)contactSuggestionsWithMaxSuggestions:(NSInteger)arg0 excludeContactsWithIdentifiers:(id)arg1 ;
-(id)familyMemberContactHandles;
-(id)familyRecommendedContacts;
-(id)favoritedContacts;
-(id)iCloudFamilyMembers;
-(id)init;
-(id)interactionBasedRecommendedContacts;
-(void)processFamilyMember:(id)arg0 toFillContactArray:(id)arg1 ;


@end


#endif