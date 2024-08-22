// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGEVENTSTREAMBASE_H
#define OSLOGEVENTSTREAMBASE_H

@class NSPredicate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OSLogEventStreamBase : NSObject

@property (copy, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (nonatomic) unsigned int invalidated; // ivar: _invalidated
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *streamHandler; // ivar: _streamHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target; // ivar: _target


-(id)init;
-(void)invalidate;
-(void)setEventHandler:(id)arg0 ;


@end


#endif