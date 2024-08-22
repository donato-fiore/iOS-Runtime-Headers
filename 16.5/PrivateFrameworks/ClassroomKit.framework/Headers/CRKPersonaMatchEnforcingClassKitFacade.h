// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKPERSONAMATCHENFORCINGCLASSKITFACADE_H
#define CRKPERSONAMATCHENFORCINGCLASSKITFACADE_H



#import "CRKClassKitFacadeDecoratorBase.h"
#import "CRKClassKitCurrentUserProvider.h"

@interface CRKPersonaMatchEnforcingClassKitFacade : CRKClassKitFacadeDecoratorBase

@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider; // ivar: _currentUserProvider
@property (nonatomic) NSInteger modifiedAccountState; // ivar: _modifiedAccountState


+(id)keyPathsForValuesAffectingAccountState;
-(BOOL)isPersonaEligible;
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