// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSOBSERVER_H
#define LSOBSERVER_H

@class NSOperationQueue, NSString;
@protocol LSObserverDelegate, NSObject;

#import <Foundation/Foundation.h>


@interface LSObserver : NSObject {
    id<LSObserverDelegate> *_delegate;
    NSOperationQueue *_queue;
    id<NSObject> *_changeObserver;
    BOOL _observing;
}


@property (weak) NSObject<LSObserverDelegate> *delegate;
@property (copy) NSString *name; // ivar: _name
@property (retain) NSOperationQueue *queue;


+(void)initialize;
-(id)debugDescription;
-(id)description;
-(void)_configureCallbacks;
-(void)_tearDownCallbacks;
-(void)dealloc;
-(void)startObserving;
-(void)stopObserving;


@end


#endif