// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICPARTICIPANTSFILTERTYPESELECTION_H
#define ICPARTICIPANTSFILTERTYPESELECTION_H

@class NSManagedObjectContext, NSSet, NSArray, NSString;


#import "ICFilterTypeSelection.h"

@interface ICParticipantsFilterTypeSelection : ICFilterTypeSelection

@property (nonatomic) NSUInteger joinOperator; // ivar: _joinOperator
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (retain, nonatomic) NSSet *participantUserIDs; // ivar: _participantUserIDs
@property (readonly, nonatomic) NSArray *participants;
@property (nonatomic) NSUInteger selectionType; // ivar: _selectionType
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *summaryWithJoinOperatorMenu;
@property (readonly, nonatomic) NSArray *unresolvedParticipants;


+(id)keyPathsForValuesAffectingIsEmpty;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICParticipantsFilterTypeSelection:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithManagedObjectContext:(id)arg0 accountObjectID:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg0 accountObjectID:(id)arg1 selectionType:(NSUInteger)arg2 ;
-(id)initWithManagedObjectContext:(id)arg0 accountObjectID:(id)arg1 selectionType:(NSUInteger)arg2 joinOperator:(NSUInteger)arg3 ;
-(id)rawFilterValue;
-(void)addParticipantUserID:(id)arg0 ;
-(void)removeParticipantUserID:(id)arg0 ;


@end


#endif