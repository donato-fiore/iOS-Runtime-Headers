// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPUBLISHINGSUBJECT_H
#define CNPUBLISHINGSUBJECT_H

@class NSString, NSMutableArray;
@protocol CNObserver, CNCancelable;


#import "CNObservable.h"
#import "CNObservableContractEnforcement.h"

@interface CNPublishingSubject : CNObservable <CNObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNObservableContractEnforcement *enforcement; // ivar: _enforcement
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CNObservable *observable; // ivar: _observable
@property (readonly, nonatomic) NSMutableArray *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CNCancelable> *upstreamToken; // ivar: _upstreamToken


-(id)_allObservers;
-(id)init;
-(id)initWithObservable:(id)arg0 ;
-(id)subscribe:(id)arg0 ;
-(void)_addObserver:(id)arg0 ;
-(void)_removeObserver:(id)arg0 ;
-(void)_subscribeToObservableIfNecessary;
-(void)observerDidComplete;
-(void)observerDidFailWithError:(id)arg0 ;
-(void)observerDidReceiveResult:(id)arg0 ;


@end


#endif