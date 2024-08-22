// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMUIACCOUNTVIEWMODELPROVIDER_H
#define RMUIACCOUNTVIEWMODELPROVIDER_H

@class NSMutableArray, RMObserverStore;

#import <Foundation/Foundation.h>


@interface RMUIAccountViewModelProvider : NSObject

@property (retain, nonatomic) NSMutableArray *accountViewModels; // ivar: _accountViewModels
@property (retain, nonatomic) RMObserverStore *observerStore; // ivar: _observerStore


-(id)_detailsForCalDAVDeclaration:(id)arg0 ;
-(id)_detailsForCardDAVDeclaration:(id)arg0 ;
-(id)_detailsForDeclaration:(id)arg0 ;
-(id)_detailsForExchangeDeclaration:(id)arg0 ;
-(id)_detailsForGoogleDeclaration:(id)arg0 ;
-(id)_detailsForLDAPDeclaration:(id)arg0 ;
-(id)_detailsForMailDeclaration:(id)arg0 ;
-(id)_detailsForSubscribedCalendarDeclaration:(id)arg0 ;
-(id)init;
-(void)_updateViewModelsWithDeclarations:(id)arg0 ;
-(void)loadAccountsFromConfigurationsWithCompletionHandler:(id)arg0 ;


@end


#endif