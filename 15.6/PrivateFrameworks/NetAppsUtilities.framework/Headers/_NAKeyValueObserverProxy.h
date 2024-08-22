// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NAKEYVALUEOBSERVERPROXY_H
#define _NAKEYVALUEOBSERVERPROXY_H

@class NAObserverProxy, NSString;



@interface _NAKeyValueObserverProxy : NAObserverProxy {
    BOOL _isObserving;
}


@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, weak, nonatomic) id *observedObject; // ivar: _observedObject
@property (readonly, copy, nonatomic) id *observerBlock; // ivar: _observerBlock


-(id)initWithWeakObserver:(id)arg0 observedObject:(id)arg1 keyPath:(id)arg2 options:(NSUInteger)arg3 observerBlock:(id)arg4 ;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif