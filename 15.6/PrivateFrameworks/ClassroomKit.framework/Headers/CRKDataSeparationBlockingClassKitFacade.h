// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKDATASEPARATIONBLOCKINGCLASSKITFACADE_H
#define CRKDATASEPARATIONBLOCKINGCLASSKITFACADE_H



#import "CRKClassKitFacadeDecoratorBase.h"
#import "CRKClassKitCurrentUserProvider.h"

@interface CRKDataSeparationBlockingClassKitFacade : CRKClassKitFacadeDecoratorBase

@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider; // ivar: _currentUserProvider
@property (nonatomic) NSInteger modifiedAccountState; // ivar: _modifiedAccountState


+(id)keyPathsForValuesAffectingAccountState;
+(id)observedKeyPathsOnCurrentUserProvider;
-(NSInteger)accountState;
-(NSInteger)nextAccountState;
-(id)initWithClassKitFacade:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObserving;
-(void)stopObserving;
-(void)updateAccountState;


@end


#endif