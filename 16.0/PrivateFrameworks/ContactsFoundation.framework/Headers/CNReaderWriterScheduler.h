// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNREADERWRITERSCHEDULER_H
#define CNREADERWRITERSCHEDULER_H

@class NSMutableArray, NSString;
@protocol CNReaderWriterScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CNReaderWriterScheduler : NSObject <CNReaderWriterScheduler>

 {
    BOOL _suspended;
}


@property (readonly, nonatomic) NSMutableArray *activeReaders; // ivar: _activeReaders
@property (readonly, nonatomic) NSMutableArray *activeWriters; // ivar: _activeWriters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *pendingReaders; // ivar: _pendingReaders
@property (readonly, nonatomic) NSMutableArray *pendingWriters; // ivar: _pendingWriters
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended;


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)performReaderBlock:(id)arg0 ;
-(id)performWriterBlock:(id)arg0 ;
-(void)activateReader:(id)arg0 ;
-(void)activateWriter:(id)arg0 ;
-(void)addReaderWithIdentifier:(id)arg0 ;
-(void)addWriterWithIdentifier:(id)arg0 ;
-(void)appendDescriptionToBuilder:(id)arg0 ;
-(void)performSynchronousReaderBlock:(id)arg0 ;
-(void)performSynchronousWriterBlock:(id)arg0 ;
-(void)removeReader:(id)arg0 ;
-(void)removeWriter:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif