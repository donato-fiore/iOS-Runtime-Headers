// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXOBSERVERWRAPPER_H
#define AXOBSERVERWRAPPER_H

@class NSArray, NSRunLoop, AXElement;

#import <Foundation/Foundation.h>


@interface AXObserverWrapper : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) NSArray *notifications; // ivar: _notifications
@property (retain, nonatomic) *__AXObserver observer; // ivar: _observer
@property (retain, nonatomic) NSRunLoop *runloop; // ivar: _runloop
@property (retain, nonatomic) AXElement *systemElement; // ivar: _systemElement


// -(id)initWithSystemElement:(id)arg0 runloop:(id)arg1 notifications:(id)arg2 handler:(id)arg3 error:(unk)arg4  ;
-(void)dealloc;


@end


#endif