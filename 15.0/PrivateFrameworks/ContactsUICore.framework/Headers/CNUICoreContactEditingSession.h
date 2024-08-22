// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUICORECONTACTEDITINGSESSION_H
#define CNUICORECONTACTEDITINGSESSION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CNUICoreContactScratchpad.h"

@interface CNUICoreContactEditingSession : NSObject

@property (readonly, nonatomic) NSArray *addedContacts;
@property (retain, nonatomic) CNUICoreContactScratchpad *contactsAdded; // ivar: _contactsAdded
@property (retain, nonatomic) CNUICoreContactScratchpad *contactsRemoved; // ivar: _contactsRemoved
@property (retain, nonatomic) CNUICoreContactScratchpad *contactsUpdated; // ivar: _contactsUpdated
@property (readonly, nonatomic) BOOL inProgress;
@property (readonly, nonatomic) NSArray *removedContacts;
@property (readonly, nonatomic) NSArray *updatedContacts;


+(BOOL)isEdiingStateOfContactValid:(NSInteger)arg0 ;
-(BOOL)containsAddedContactMatchingContact:(id)arg0 ;
-(BOOL)containsRemovedContactMatchingContact:(id)arg0 ;
-(BOOL)containsUpdatedContactMatchingContact:(id)arg0 ;
-(BOOL)isContactUnseen:(id)arg0 ;
-(BOOL)wasContactAdded:(id)arg0 ;
-(BOOL)wasContactRemoved:(id)arg0 ;
-(BOOL)wasContactUpdated:(id)arg0 ;
-(NSInteger)editingStateOfContact:(id)arg0 ;
-(id)addedContactsMatchingContacts:(id)arg0 ;
-(id)applyChangesToContacts:(id)arg0 ;
-(id)description;
-(id)generateSaveRequest;
-(id)init;
-(id)removedContactsMatchingContacts:(id)arg0 ;
-(id)updatedContactsMatchingContacts:(id)arg0 ;
-(void)addContacts:(id)arg0 ;
-(void)removeContacts:(id)arg0 ;
-(void)updateContacts:(id)arg0 ;
-(void)verifyConsistencyOfEditingSessionForContact:(id)arg0 ;


@end


#endif