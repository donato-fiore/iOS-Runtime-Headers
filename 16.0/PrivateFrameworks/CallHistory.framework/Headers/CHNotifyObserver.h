// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHNOTIFYOBSERVER_H
#define CHNOTIFYOBSERVER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHNotifyObserver : NSObject

@property (readonly, copy, nonatomic) id *callback; // ivar: _callback
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) int token; // ivar: _token


-(id)initWithName:(id)arg0 queue:(id)arg1 callback:(id)arg2 ;
-(void)dealloc;


@end


#endif