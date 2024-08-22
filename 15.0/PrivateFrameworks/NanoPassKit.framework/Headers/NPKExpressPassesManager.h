// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKEXPRESSPASSESMANAGER_H
#define NPKEXPRESSPASSESMANAGER_H

@class NSArray, NSString, NSHashTable;
@protocol NPKPassesDataSource;

#import <Foundation/Foundation.h>


@interface NPKExpressPassesManager : NSObject <NPKPassesDataSource>



@property (retain, nonatomic) NSArray *currentPasses; // ivar: _currentPasses
@property (retain, nonatomic) NSArray *currentPaymentPasses; // ivar: _currentPaymentPasses
@property (retain, nonatomic) NSArray *currentSecureElementPasses; // ivar: _currentSecureElementPasses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


-(BOOL)shouldAllowMovingItemAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(id)expiredPasses;
-(id)init;
-(id)passForUniqueID:(id)arg0 ;
-(id)passes;
-(id)paymentPasses;
-(id)secureElementPasses;
-(void)enableRemoteUpdates;
-(void)movePassAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)reloadPasses;
-(void)reloadPassesWithCompletion:(id)arg0 ;
-(void)removePass:(id)arg0 ;
-(void)setDefaultPaymentPass:(id)arg0 ;
-(void)suppressRemoteUpdates;
-(void)unarchivePass:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateWithExpressPass:(id)arg0 siblingExpressPasses:(id)arg1 ;


@end


#endif