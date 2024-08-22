// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLREACTIVEVALUE_H
#define TMLREACTIVEVALUE_H

@class NSString, NSArray;
@protocol TMLBinder, TMLValue;

#import <Foundation/Foundation.h>


@interface TMLReactiveValue : NSObject <TMLBinder, TMLValue>

 {
    id *_targetWeak;
    id *_targetUnsafe;
    NSString *_keyPath;
    NSUInteger _valueType;
}


@property (readonly, nonatomic) NSInteger bindingOrder;
@property (readonly, nonatomic) NSArray *bindings; // ivar: _bindings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)valueForTarget:(id)arg0 withKeyPath:(id)arg1 ;
+(void)removeReactiveValuesForTarget:(id)arg0 ;
-(NSUInteger)valueType;
-(id)initWithBindings:(id)arg0 valueType:(NSUInteger)arg1 ;
-(id)value;
-(void)assignToTarget:(id)arg0 withKeyPath:(id)arg1 ;
-(void)bindingValueChanged:(id)arg0 ;
-(void)unassign;


@end


#endif