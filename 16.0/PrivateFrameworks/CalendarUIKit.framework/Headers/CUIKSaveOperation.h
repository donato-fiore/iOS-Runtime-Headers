// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKSAVEOPERATION_H
#define CUIKSAVEOPERATION_H

@class NSDictionary, NSArray;


#import "CUIKUserOperation.h"

@interface CUIKSaveOperation : CUIKUserOperation

@property (retain) NSDictionary *objectsRequiringAlteredSpan; // ivar: _objectsRequiringAlteredSpan
@property (retain) NSArray *previousObjects; // ivar: _previousObjects
@property (retain) NSArray *previousSliceInfo; // ivar: _previousSliceInfo


+(id)alarmsAddedActionName:(id)arg0 ;
+(id)alarmsModifiedActionName:(id)arg0 ;
+(id)alarmsRemovedActionName:(id)arg0 ;
+(id)attachmentsAddedActionName:(id)arg0 ;
+(id)attachmentsModifiedActionName:(id)arg0 ;
+(id)attachmentsRemovedActionName:(id)arg0 ;
+(id)attendeesAddedActionName:(id)arg0 ;
+(id)attendeesModifiedActionName:(id)arg0 ;
+(id)attendeesRemovedActionName:(id)arg0 ;
+(id)changedAllDayActionNameWithCurrentEvent:(id)arg0 previousEvent:(id)arg1 ;
+(id)changedAvailablityActionName:(id)arg0 ;
+(id)changedCalendarActionName:(id)arg0 ;
+(id)changedColorOfCalendar:(id)arg0 ;
+(id)changedLocationActionNameWithCurrentEvent:(id)arg0 previousEvent:(id)arg1 ;
+(id)changedNotesActionName:(id)arg0 ;
+(id)changedParticipationStatusActionName:(id)arg0 ;
+(id)changedPrivacyActionName:(id)arg0 ;
+(id)changedRecurrenceRuleActionNameWithCurrentEvent:(id)arg0 previousEvent:(id)arg1 ;
+(id)changedResponseCommentActionName:(id)arg0 ;
+(id)changedTimeActionName:(id)arg0 ;
+(id)changedTimeZoneActionName:(id)arg0 ;
+(id)changedTitleActionName:(id)arg0 ;
+(id)changedTitleOfCalendar:(id)arg0 ;
+(id)changedTravelTimeActionNameWithCurrentEvent:(id)arg0 previousEvent:(id)arg1 ;
+(id)changedURLActionName:(id)arg0 ;
+(id)genericEventChangedActionName:(id)arg0 ;
+(id)multipleEventsChangedActionName;
+(id)shareesAddedActionName:(id)arg0 ;
+(id)shareesModifiedActionName:(id)arg0 ;
+(id)shareesRemovedActionName:(id)arg0 ;
-(BOOL)_executeWithUndoDelegate:(id)arg0 error:(*id)arg1 ;
-(Class)_inverseOperationClass;
-(NSInteger)_spanForObject:(id)arg0 ;
-(id)_actionName;
-(id)_inverseOperation;
-(id)_invertedNonSliceObjects;
-(id)_objectsForInverse;
-(id)_objectsRequiringAlteredSpan:(id)arg0 ;
-(void)_storePreviousObjects;
-(void)_storePreviousState;


@end


#endif