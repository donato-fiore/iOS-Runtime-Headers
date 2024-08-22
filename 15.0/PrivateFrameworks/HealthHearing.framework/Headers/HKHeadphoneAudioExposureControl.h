// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEADPHONEAUDIOEXPOSURECONTROL_H
#define HKHEADPHONEAUDIOEXPOSURECONTROL_H

@class HKProxyProvider, NSString;
@protocol _HKXPCExportable, HKHeadphoneAudioExposureControlClient;

#import <Foundation/Foundation.h>


@interface HKHeadphoneAudioExposureControl : NSObject <_HKXPCExportable, HKHeadphoneAudioExposureControlClient>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)fetchDoseLimitInfoWithCompletion:(id)arg0 ;
-(void)fetchInfoWithCompletion:(id)arg0 ;
-(void)insertQuantityWithExposure:(CGFloat)arg0 duration:(CGFloat)arg1 startDate:(id)arg2 includesNotificationSample:(BOOL)arg3 synced:(BOOL)arg4 completion:(id)arg5 ;
-(void)overrideDoseLimit:(id)arg0 completion:(id)arg1 ;
-(void)rebuildWithCompletion:(id)arg0 ;


@end


#endif