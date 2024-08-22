// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFETCHEDVALUEOBSERVABLE_H
#define FCFETCHEDVALUEOBSERVABLE_H

@class NSError, NFUnfairLock, NSHashTable;
@protocol FCFetchedValueManager, NFCopying;

#import <Foundation/Foundation.h>


@interface FCFetchedValueObservable : NSObject

@property (readonly, copy, nonatomic) id *equalityTest; // ivar: _equalityTest
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NFUnfairLock *lock; // ivar: _lock
@property (readonly, weak, nonatomic) NSObject<FCFetchedValueManager> *manager; // ivar: _manager
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (copy, nonatomic) NSObject<NFCopying> *value; // ivar: _value


-(id)init;
-(id)initWithManager:(id)arg0 initialValue:(id)arg1 equalityTest:(id)arg2 ;
-(id)valueWithError:(*id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)handleError:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif