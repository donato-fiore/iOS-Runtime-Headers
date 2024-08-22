// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COOBSERVER_H
#define COOBSERVER_H

@class NSString, NSOperationQueue;
@protocol COObservable;

#import <Foundation/Foundation.h>


@interface COObserver : NSObject

@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSObject<COObservable> *observable; // ivar: _observable
@property (readonly, nonatomic) NSOperationQueue *queue; // ivar: _queue


-(NSUInteger)hash;
// -(id)initForName:(id)arg0 onObservable:(id)arg1 handler:(id)arg2 queue:(unk)arg3  ;
-(void)dealloc;
-(void)notify:(id)arg0 ;


@end


#endif