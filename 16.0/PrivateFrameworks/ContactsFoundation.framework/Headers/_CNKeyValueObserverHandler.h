// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNKEYVALUEOBSERVERHANDLER_H
#define _CNKEYVALUEOBSERVERHANDLER_H

@class NSString;
@protocol CNObserver;

#import <Foundation/Foundation.h>


@interface _CNKeyValueObserverHandler : NSObject {
    id *_object;
    NSString *_keyPath;
    id<CNObserver> *_observer;
}




-(id)initWithObject:(id)arg0 keyPath:(id)arg1 observer:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObservingWithOptions:(NSUInteger)arg0 ;
-(void)stopObserving;


@end


#endif