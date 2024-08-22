// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTWAITFORKVOCHANGEOPERATION_H
#define DMTWAITFORKVOCHANGEOPERATION_H

@class CATOperation, NSString;

#import <Foundation/Foundation.h>


@interface DMTWaitForKVOChangeOperation : CATOperation

@property (readonly, nonatomic) NSObject *expectedValue; // ivar: _expectedValue
@property (retain, nonatomic) NSObject *initialValue; // ivar: _initialValue
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, nonatomic) NSObject *observedObject; // ivar: _observedObject
@property (nonatomic, getter=isObserving) BOOL observing; // ivar: _observing
@property (readonly, nonatomic) BOOL requireExpectedValue; // ivar: _requireExpectedValue


-(BOOL)isAsynchronous;
-(id)initWithObservedObject:(id)arg0 keyPath:(id)arg1 expectedValue:(id)arg2 requireExpectedValue:(BOOL)arg3 ;
-(void)beginObserving;
-(void)cancel;
-(void)compareExpectedValueWithChangedValue:(id)arg0 ;
-(void)endObservingIfNeeded;
-(void)endOperationAndTearDownWithError:(id)arg0 resultObject:(id)arg1 ;
-(void)handleKVOChangeWithValueOfKeyPath:(id)arg0 ;
-(void)main;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif