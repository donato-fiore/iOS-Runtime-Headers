// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BSDEFAULTOBSERVER_H
#define _BSDEFAULTOBSERVER_H

@class NSArray, NSString;
@protocol BSDefaultObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSAbstractDefaultDomain.h"

@interface _BSDefaultObserver : NSObject <BSDefaultObserver>

 {
    BSAbstractDefaultDomain *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_defaultsToObserve;
    id *_fireBlock;
    BOOL _invalidated;
    uint8_t _debounceCounter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif