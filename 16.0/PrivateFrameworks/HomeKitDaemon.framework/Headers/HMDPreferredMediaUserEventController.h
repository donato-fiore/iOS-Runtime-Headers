// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPREFERREDMEDIAUSEREVENTCONTROLLER_H
#define HMDPREFERREDMEDIAUSEREVENTCONTROLLER_H

@class NSString;
@protocol HMDFetchedSettingsDriverDelegate, HMDPreferredMediaUserEventControllerDataSource, HMDFetchedSettingsDriver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDPreferredMediaUserEventController : NSObject <HMDFetchedSettingsDriverDelegate>



@property (readonly, weak) NSObject<HMDPreferredMediaUserEventControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMDFetchedSettingsDriver> *driver; // ivar: _driver
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(CGFloat)eventTimestamp;
-(id)eventSource;
-(id)initWithDataSource:(id)arg0 queue:(id)arg1 driver:(id)arg2 ;
-(void)_postUpdateEventsIfDifferent:(id)arg0 ;
-(void)driver:(id)arg0 didUpdatePrimaryUserInfo:(id)arg1 ;
-(void)driver:(id)arg0 didUpdateSettings:(id)arg1 ;
-(void)driverDidReload:(id)arg0 ;
-(void)updatePreferredMediaUserWithPrimaryUserInfo:(id)arg0 completion:(id)arg1 ;


@end


#endif