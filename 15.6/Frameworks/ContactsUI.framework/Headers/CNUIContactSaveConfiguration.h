// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUICONTACTSAVECONFIGURATION_H
#define CNUICONTACTSAVECONFIGURATION_H

@class CNContact, CNContactStore, NSMutableArray, CNMutableContact, CNContainer, CNGroup;

#import <Foundation/Foundation.h>

#import "CNUIContainerContext.h"

@interface CNUIContactSaveConfiguration : NSObject

@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) CNUIContainerContext *containerContext; // ivar: _containerContext
@property (readonly, nonatomic) NSMutableArray *editingLinkedContacts; // ivar: _editingLinkedContacts
@property (readonly, nonatomic) BOOL ignoresParentalRestrictions; // ivar: _ignoresParentalRestrictions
@property (readonly, nonatomic) CNMutableContact *mutableContact; // ivar: _mutableContact
@property (readonly, nonatomic) CNContainer *parentContainer; // ivar: _parentContainer
@property (readonly, nonatomic) CNGroup *parentGroup; // ivar: _parentGroup
@property (readonly, nonatomic) BOOL saveWasAuthorized; // ivar: _saveWasAuthorized
@property (readonly, nonatomic) CNMutableContact *shadowCopyOfReadonlyContact; // ivar: _shadowCopyOfReadonlyContact


-(id)copyWithEditingLinkedContacts:(id)arg0 ;
-(id)initWithContact:(id)arg0 mutableContact:(id)arg1 shadowCopyOfReadonlyContact:(id)arg2 editingLinkedContacts:(id)arg3 contactStore:(id)arg4 parentGroup:(id)arg5 parentContainer:(id)arg6 containerContext:(id)arg7 ignoresParentalRestrictions:(BOOL)arg8 saveWasAuthorized:(BOOL)arg9 ;


@end


#endif