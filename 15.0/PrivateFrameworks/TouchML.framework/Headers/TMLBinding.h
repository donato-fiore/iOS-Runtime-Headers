// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLBINDING_H
#define TMLBINDING_H

@class NSString, NSMutableArray;
@protocol TMLValue;

#import <Foundation/Foundation.h>


@interface TMLBinding : NSObject <TMLValue>

 {
    NSString *_keyPath;
    NSMutableArray *_binders;
    int _bindCount;
    int _flags;
    id *_value;
    NSUInteger _valueType;
    BOOL _didAttachToTargetViaTMLObservable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *target; // ivar: _target


+(id)bindingForTarget:(id)arg0 withKeyPath:(id)arg1 ;
+(id)bindingForTarget:(id)arg0 withKeyPath:(id)arg1 valueType:(NSUInteger)arg2 ;
-(NSUInteger)valueType;
-(id)initWithTarget:(id)arg0 keyPath:(id)arg1 valueType:(NSUInteger)arg2 ;
-(id)value;
-(void)bind:(id)arg0 ;
-(void)dealloc;
-(void)observeTarget;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)tmlObserveValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)unbind:(id)arg0 ;
-(void)unobserveTarget;


@end


#endif