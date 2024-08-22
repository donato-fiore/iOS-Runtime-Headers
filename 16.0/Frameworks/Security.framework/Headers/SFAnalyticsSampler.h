// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFANALYTICSSAMPLER_H
#define SFANALYTICSSAMPLER_H

@class NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SFAnalyticsSampler : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    id *_block;
    int _notificationToken;
    Class _clientClass;
    BOOL _activeTimer;
}


@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL oncePerReport; // ivar: _oncePerReport
@property (nonatomic) CGFloat samplingInterval; // ivar: _samplingInterval


// -(id)initWithName:(id)arg0 interval:(CGFloat)arg1 block:(id)arg2 clientClass:(unk)arg3  ;
-(id)sampleNow;
-(void)dealloc;
-(void)newTimer;
-(void)pauseSampling;
-(void)resumeSampling;
-(void)setupOnceTimer;
-(void)setupPeriodicTimer;


@end


#endif