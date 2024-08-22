// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DS_TKEYVALUEOBSERVERGLUE_H
#define DS_TKEYVALUEOBSERVERGLUE_H


#import <Foundation/Foundation.h>


@interface DS_TKeyValueObserverGlue : NSObject {
    function<void ()> _functor;
    function<void (NSDictionary<NSString *,NSObject *> *)> _functorWithChange;
    unordered_set<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> _observedObjects;
    TString _observedKeyPath;
}




-(id)initWithFunctor:(*void)arg0 observedObjects:(*void)arg1 observedKeyPath:(*void)arg2 ;
-(id)initWithFunctorWithChange:(*void)arg0 observedObjects:(*void)arg1 observedKeyPath:(*void)arg2 ;
-(void)initCommon:(*void)arg0 observedKeyPath:(*void)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif