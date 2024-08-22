// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKDOMEVENTDISPATCHER_H
#define IKDOMEVENTDISPATCHER_H


#import <Foundation/Foundation.h>


@interface IKDOMEventDispatcher : NSObject



+(id)sharedInstance;
-(BOOL)_runPhase:(NSInteger)arg0 event:(id)arg1 nodeEn:(id)arg2 ;
-(BOOL)dispatchEvent:(id)arg0 ;


@end


#endif