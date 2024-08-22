// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10CONTACTSUI33CONTACTLISTMERGEUNIFYACTIONHELPER_H
#define _TTC10CONTACTSUI33CONTACTLISTMERGEUNIFYACTIONHELPER_H


#import <Foundation/Foundation.h>


@interface _TtC10ContactsUI33ContactListMergeUnifyActionHelper : NSObject {
    ? contactStore;
    ? contactItems;
    ? mergeResult;
}




+(id)descriptorForRequiredKeys;
-(BOOL)applyMergeResultToSaveRequest:(id)arg0 ;
-(BOOL)applyUndoTo:(id)arg0 and:(id)arg1 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(void)mergeContacts:(id)arg0 withContainerIdentifiers:(id)arg1 withContactIDToParentGroupsDict:(id)arg2 ;


@end


#endif