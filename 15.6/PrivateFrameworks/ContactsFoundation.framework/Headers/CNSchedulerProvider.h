// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNSCHEDULERPROVIDER_H
#define CNSCHEDULERPROVIDER_H

@class NSString;
@protocol CNSchedulerProvider, CNScheduler;

#import <Foundation/Foundation.h>


@interface CNSchedulerProvider : NSObject <CNSchedulerProvider>



@property (readonly, nonatomic) NSObject<CNScheduler> *backgroundScheduler; // ivar: _backgroundScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNScheduler> *immediateScheduler; // ivar: _immediateScheduler
@property (readonly, nonatomic) NSObject<CNScheduler> *inlineScheduler; // ivar: _inlineScheduler
@property (readonly, nonatomic) NSObject<CNScheduler> *mainThreadScheduler; // ivar: _mainThreadScheduler
@property (readonly, copy, nonatomic) id *readerWriterSchedulerProvider; // ivar: _readerWriterSchedulerProvider
@property (readonly, copy, nonatomic) id *serialSchedulerProvider; // ivar: _serialSchedulerProvider
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) id *synchronousSerialSchedulerProvider; // ivar: _synchronousSerialSchedulerProvider


+(id)defaultProvider;
+(id)makeDefaultProvider;
+(id)providerWithBackgroundConcurrencyLimit:(NSInteger)arg0 ;
-(id)backgroundSchedulerWithQualityOfService:(NSUInteger)arg0 ;
// -(id)initWithBackgroundScheduler:(id)arg0 mainThreadScheduler:(id)arg1 immediateScheduler:(id)arg2 serialSchedulerProvider:(id)arg3 synchronousSerialSchedulerProvider:(unk)arg4 readerWriterSchedulerProvider:(id)arg5  ;
// -(id)initWithBackgroundScheduler:(id)arg0 mainThreadScheduler:(id)arg1 inlineScheduler:(id)arg2 immediateScheduler:(id)arg3 serialSchedulerProvider:(id)arg4 synchronousSerialSchedulerProvider:(unk)arg5 readerWriterSchedulerProvider:(id)arg6  ;
-(id)newReaderWriterSchedulerWithName:(id)arg0 ;
-(id)newSerialSchedulerWithName:(id)arg0 ;
-(id)newSynchronousSerialSchedulerWithName:(id)arg0 ;


@end


#endif