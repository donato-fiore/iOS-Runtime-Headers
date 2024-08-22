// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTSETMYCARDACTION_H
#define CNCONTACTLISTSETMYCARDACTION_H

@class CNContact;


#import "CNContactListUndoableAction.h"

@interface CNContactListSetMyCardAction : CNContactListUndoableAction

@property (retain, nonatomic) CNContact *originalMeContact; // ivar: _originalMeContact


+(id)log;
-(id)initWithContact:(id)arg0 configuration:(id)arg1 ;
-(id)updatedMeContact;
-(void)fetchOriginalMeContact;
-(void)performAction;
-(void)performUndoAction;
-(void)updateMeContact:(id)arg0 ;


@end


#endif