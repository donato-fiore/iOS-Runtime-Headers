// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVIRTUALREADERWRITERSCHEDULER_H
#define CNVIRTUALREADERWRITERSCHEDULER_H

@class NSString;
@protocol CNReaderWriterScheduler;

#import <Foundation/Foundation.h>

#import "CNSuspendableSchedulerDecorator.h"

@interface CNVirtualReaderWriterScheduler : NSObject <CNReaderWriterScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


-(id)init;
-(id)initWithScheduler:(id)arg0 ;
-(id)performReaderBlock:(id)arg0 ;
-(id)performWriterBlock:(id)arg0 ;
-(void)performSynchronousReaderBlock:(id)arg0 ;
-(void)performSynchronousWriterBlock:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif