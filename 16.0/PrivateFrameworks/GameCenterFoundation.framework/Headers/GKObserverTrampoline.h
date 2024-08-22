// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKOBSERVERTRAMPOLINE_H
#define GKOBSERVERTRAMPOLINE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface GKObserverTrampoline : NSObject {
    id *_observee;
    NSString *_keyPath;
    id *_block;
    int _cancellationPredicate;
    NSUInteger _options;
}


@property (readonly) id *token;


-(id)initObservingObject:(id)arg0 keyPath:(id)arg1 options:(NSUInteger)arg2 block:(id)arg3 ;
-(void)cancelObservation;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObserving;


@end


#endif