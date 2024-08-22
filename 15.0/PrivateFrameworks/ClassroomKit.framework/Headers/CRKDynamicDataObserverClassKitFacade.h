// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKDYNAMICDATAOBSERVERCLASSKITFACADE_H
#define CRKDYNAMICDATAOBSERVERCLASSKITFACADE_H

@class NSMutableArray;


#import "CRKClassKitFacadeDecoratorBase.h"
#import "CRKClassKitCurrentUserProvider.h"

@interface CRKDynamicDataObserverClassKitFacade : CRKClassKitFacadeDecoratorBase

@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider; // ivar: _currentUserProvider
@property (readonly, nonatomic) NSMutableArray *dataObservers; // ivar: _dataObservers
@property (nonatomic) BOOL dataObserversAreRegistered; // ivar: _dataObserversAreRegistered
@property (readonly, nonatomic) NSInteger expectedUserRole; // ivar: _expectedUserRole


+(id)dynamicDataObserverFacadeWithClassKitFacade:(id)arg0 expectedUserRole:(NSInteger)arg1 ;
-(id)initWithClassKitFacade:(id)arg0 expectedUserRole:(NSInteger)arg1 ;
-(void)addDataObserver:(id)arg0 ;
-(void)dealloc;
-(void)deregisterDataObserver:(id)arg0 ;
-(void)deregisterDataObservers;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerDataObserver:(id)arg0 ;
-(void)registerDataObservers;
-(void)removeDataObserver:(id)arg0 ;
-(void)startObservingCurrentUser;
-(void)stopObservingCurrentUser;
-(void)updateCurrentUserState;


@end


#endif