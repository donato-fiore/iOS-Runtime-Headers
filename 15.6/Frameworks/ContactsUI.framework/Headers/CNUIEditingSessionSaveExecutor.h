// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIEDITINGSESSIONSAVEEXECUTOR_H
#define CNUIEDITINGSESSIONSAVEEXECUTOR_H

@class NSString, CNUICoreContactEditingSession;
@protocol CNUIContactSaveExecutor;

#import <Foundation/Foundation.h>


@interface CNUIEditingSessionSaveExecutor : NSObject <CNUIContactSaveExecutor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNUICoreContactEditingSession *editingSession; // ivar: _editingSession
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)executeSaveWithConfiguration:(id)arg0 saveDelegate:(id)arg1 ;
-(id)init;
-(id)initWithEditingSession:(id)arg0 ;


@end


#endif