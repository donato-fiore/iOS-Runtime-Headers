// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


-(BOOL)performSaveForMutableContact:(id)arg0 group:(id)arg1 container:(id)arg2 saveConfiguration:(id)arg3 issuedRequestIdentifiers:(id)arg4 ;
-(id)executeSaveWithConfiguration:(id)arg0 saveDelegate:(id)arg1 ;


@end


#endif