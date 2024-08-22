// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIINVITEECONTEXTMENUDATA_H
#define EKUIINVITEECONTEXTMENUDATA_H

@class NSArray, UIContextMenuInteraction, CNContactOrbActionsController, NSString, UIMenu;
@protocol CNContactOrbActionsControllerDelegate;

#import <Foundation/Foundation.h>


@interface EKUIInviteeContextMenuData : NSObject <CNContactOrbActionsControllerDelegate>

 {
    NSArray *_calendarMenuStartItems;
    NSArray *_calendarMenuEndItems;
    UIContextMenuInteraction *_interaction;
    CNContactOrbActionsController *_contactActionsController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIMenu *menu; // ivar: _menu
@property (readonly) Class superclass;


-(id)_buildCombinedCalendarAndContactsMenu;
-(id)_contactsMenu;
-(id)initWithDefaultActionsForSection:(id)arg0 indexPath:(id)arg1 participant:(id)arg2 interaction:(id)arg3 participantSetRole:(id)arg4 ;
-(void)_setupCalendarMenuForSection:(id)arg0 indexPath:(id)arg1 participant:(id)arg2 participantSetRole:(id)arg3 ;
-(void)_setupContactsOrbActionControllerForParticipant:(id)arg0 ;
-(void)contactOrbActionsController:(id)arg0 didUpdateWithMenu:(id)arg1 ;


@end


#endif