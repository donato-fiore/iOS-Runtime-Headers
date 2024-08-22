// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSEXPRESSIONEVALUATOR_H
#define VSEXPRESSIONEVALUATOR_H

@class NSString, NSExpression, NSArray, NSDictionary;
@protocol VSObservanceDelegate;

#import <Foundation/Foundation.h>


@interface VSExpressionEvaluator : NSObject <VSObservanceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSExpression *expression; // ivar: _expression
@property (nonatomic) BOOL hasDeterminedValue; // ivar: _hasDeterminedValue
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMonitoringForChanges) BOOL monitoringForChanges; // ivar: _monitoringForChanges
@property (nonatomic) id *object; // ivar: _object
@property (copy, nonatomic) NSArray *observers; // ivar: _observers
@property (copy, nonatomic) NSDictionary *substitutionVariables; // ivar: _substitutionVariables
@property (readonly) Class superclass;
@property (retain, nonatomic) id *value; // ivar: _value


+(BOOL)automaticallyNotifiesObserversOfValue;
-(id)_observersForExpression:(id)arg0 ;
-(id)_observersForPredicate:(id)arg0 ;
-(void)_startMonitoringForChanges;
-(void)_stopMonitoringForChanges;
-(void)_updateComputedResult:(id)arg0 ;
-(void)_updateComputedResultIfNeeded;
-(void)dealloc;
-(void)observeChange:(id)arg0 forObservance:(id)arg1 ;


@end


#endif