// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUICONTACTSTORESAVEEXECUTOR_H
#define CNUICONTACTSTORESAVEEXECUTOR_H

@class NSString;
@protocol CNUIContactSaveExecutor;

#import <Foundation/Foundation.h>


@interface CNUIContactStoreSaveExecutor : NSObject <CNUIContactSaveExecutor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleContainerContextForSaveConfiguration:(id)arg0 contactToSave:(id)arg1 saveDelegate:(id)arg2 issuedRequestIdentifiers:(id)arg3 additionalLinkedContacts:(id)arg4 ;
-(BOOL)performSaveForMutableContact:(id)arg0 group:(id)arg1 container:(id)arg2 saveConfiguration:(id)arg3 issuedRequestIdentifiers:(id)arg4 ;
-(BOOL)saveShadowContactForSaveConfiguration:(id)arg0 ;
-(id)executeSaveWithConfiguration:(id)arg0 saveDelegate:(id)arg1 ;
-(id)saveLinkedContactsWithSaveConfiguration:(id)arg0 contactToSave:(id)arg1 additionalLinkedContacts:(id)arg2 issuedRequestIdentifiers:(id)arg3 saveDelegate:(id)arg4 ;
-(id)validatedContactForSaveConfiguration:(id)arg0 ;
-(void)handleGroupContextForSaveConfiguration:(id)arg0 contactToSave:(id)arg1 issuedRequestIdentifiers:(id)arg2 saveDelegate:(id)arg3 ;


@end


#endif