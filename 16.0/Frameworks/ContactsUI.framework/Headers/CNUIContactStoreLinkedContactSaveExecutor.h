// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICONTACTSTORELINKEDCONTACTSAVEEXECUTOR_H
#define CNUICONTACTSTORELINKEDCONTACTSAVEEXECUTOR_H

@class NSString;
@protocol CNUIContactSaveExecutor;

#import <Foundation/Foundation.h>


@interface CNUIContactStoreLinkedContactSaveExecutor : NSObject <CNUIContactSaveExecutor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)executeSaveWithConfiguration:(id)arg0 saveDelegate:(id)arg1 ;
-(id)saveLinkedContactChanges:(id)arg0 mutableContact:(id)arg1 contactStore:(id)arg2 editingLinkedContacts:(id)arg3 ignoresParentalRestrictions:(BOOL)arg4 saveWasAuthorized:(BOOL)arg5 issuedSaveRequestIdentifiers:(id)arg6 ;


@end


#endif