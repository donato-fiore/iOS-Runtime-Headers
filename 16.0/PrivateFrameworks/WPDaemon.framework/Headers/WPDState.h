// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPDSTATE_H
#define WPDSTATE_H

@class NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WPDState : NSObject

@property (retain) NSMutableSet *cbManagers; // ivar: _cbManagers
@property (weak) NSObject<OS_dispatch_queue> *cbQueue; // ivar: _cbQueue
@property (retain) NSMutableDictionary *cbStates; // ivar: _cbStates
@property BOOL initialUpdate; // ivar: _initialUpdate
@property (weak) id *notification; // ivar: _notification
@property BOOL restricted; // ivar: _restricted
@property NSInteger state; // ivar: _state


+(NSInteger)getWPStateFromCBManagerState:(NSInteger)arg0 ;
-(id)description;
-(id)initWithQueue:(id)arg0 ;
-(void)coalesceState:(*NSInteger)arg0 Restricted:(*BOOL)arg1 UpdateCache:(BOOL)arg2 ;
-(void)dealloc;
-(void)registerManager:(id)arg0 ;
-(void)updateWithCompletion:(id)arg0 ;
-(void)updateWithManager:(id)arg0 Completion:(id)arg1 ;


@end


#endif