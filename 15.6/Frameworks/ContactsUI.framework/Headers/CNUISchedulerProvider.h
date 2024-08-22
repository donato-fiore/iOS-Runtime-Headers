// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUISCHEDULERPROVIDER_H
#define CNUISCHEDULERPROVIDER_H

@class NSString, CNSuspendableSchedulerDecorator;
@protocol CNSchedulerProvider, CNScheduler;

#import <Foundation/Foundation.h>


@interface CNUISchedulerProvider : NSObject <CNSchedulerProvider>



@property (readonly, nonatomic) NSObject<CNScheduler> *afterCACommitScheduler; // ivar: _afterCACommitScheduler
@property (readonly, nonatomic) NSObject<CNScheduler> *backgroundScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNScheduler> *immediateScheduler;
@property (readonly, nonatomic) NSObject<CNScheduler> *inlineScheduler;
@property (readonly, nonatomic) NSObject<CNScheduler> *mainThreadScheduler;
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *suspendableBackgroundScheduler; // ivar: _suspendableBackgroundScheduler


+(id)makeBackgroundScheduler;
-(id)backgroundSchedulerWithQualityOfService:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithSchedulerProvider:(id)arg0 ;
-(id)newReaderWriterSchedulerWithName:(id)arg0 ;
-(id)newSerialSchedulerWithName:(id)arg0 ;
-(id)newSynchronousSerialSchedulerWithName:(id)arg0 ;
-(void)resumeBackgroundScheduler;
-(void)suspendBackgroundScheduler;


@end


#endif