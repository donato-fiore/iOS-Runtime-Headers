// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBGRIMALDIMODULE_H
#define CBGRIMALDIMODULE_H

@class NSMutableDictionary, NSDictionary, NSSet, NSNumber, NSString;
@protocol CBContainerModuleProtocol, OS_dispatch_queue, OS_dispatch_source;


#import "CBModule.h"

@interface CBGrimaldiModule : CBModule <CBContainerModuleProtocol>

 {
    NSObject<OS_dispatch_queue> *_rLuxTimerQueue;
    APDSLuxInfo _rLuxInfo;
    NSMutableDictionary *_currentRLuxOutputDict;
    NSDictionary *_lastRLuxOutputDict;
    NSMutableDictionary *_overriddenInput;
    BOOL _overriding;
    NSObject<OS_dispatch_source> *_timer;
    NSSet *_validKeys;
    NSNumber *_lastLux;
    CGFloat _correctionFactor;
    int _currentNumSamples;
    BOOL _sampleOnce;
    BOOL _sampleMultiple;
    BOOL _started;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadAPDS;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)copyParam:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)copyReliableLux;
-(id)initWithQueue:(id)arg0 ;
-(int)getNextNumberOfSamplesFromNewLux:(float)arg0 ;
-(void)CBAPDSGetLux;
-(void)clearOutput;
-(void)dealloc;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)registerNotificationBlock:(id)arg0 ;
-(void)sendNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)setGrimaldiLux;
-(void)start;
-(void)startSingleSample;
-(void)startWithFrequency:(float)arg0 ;
-(void)startWithFrequency:(float)arg0 singleSample:(BOOL)arg1 ;
-(void)stop;
-(void)unregisterNotificationBlock;


@end


#endif