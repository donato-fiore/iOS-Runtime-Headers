// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUFINISHTASKASSERTIONMANAGER_H
#define MRUFINISHTASKASSERTIONMANAGER_H

@class MSVTimer, RBSAssertion, NSMapTable;

#import <Foundation/Foundation.h>


@interface MRUFinishTaskAssertionManager : NSObject

@property (retain, nonatomic) MSVTimer *autoInvalidationTimer; // ivar: _autoInvalidationTimer
@property (retain, nonatomic) RBSAssertion *taskAssertion; // ivar: _taskAssertion
@property (readonly, nonatomic) NSMapTable *tokenMap; // ivar: _tokenMap


+(id)sharedManager;
-(id)init;
-(void)acquireForTaskToken:(id)arg0 withReason:(id)arg1 invalidationHandler:(id)arg2 ;
-(void)dealloc;
-(void)releaseForTaskToken:(id)arg0 ;


@end


#endif