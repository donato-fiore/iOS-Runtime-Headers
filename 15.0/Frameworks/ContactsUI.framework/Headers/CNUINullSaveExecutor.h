// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUINULLSAVEEXECUTOR_H
#define CNUINULLSAVEEXECUTOR_H

@class NSString;
@protocol CNUIContactSaveExecutor;

#import <Foundation/Foundation.h>


@interface CNUINullSaveExecutor : NSObject <CNUIContactSaveExecutor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)executeSaveWithConfiguration:(id)arg0 saveDelegate:(id)arg1 ;


@end


#endif