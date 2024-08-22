// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXMINSTRUMENT_H
#define MXMINSTRUMENT_H

@class NSArray, NSData, NSString, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MXMInstrument : NSObject

@property BOOL active;
@property *? currentIteration; // ivar: _currentIteration
@property (readonly) BOOL didQuiesce; // ivar: _didQuiesce
@property (readonly, nonatomic) NSArray *instrumentals; // ivar: _instrumentals
@property (readonly) NSObject<OS_dispatch_queue> *instrumentalsQueue; // ivar: _instrumentalsQueue
@property (readonly) NSData *perfMetricsPerfdata; // ivar: _perfMetricsPerfdata
@property (readonly) NSString *performanceTraceFileSandboxExtensionToken; // ivar: _performanceTraceFileSandboxExtensionToken
@property (readonly) NSURL *performanceTraceFileURL; // ivar: _performanceTraceFileURL


+(id)instrumentWithInstrumentals:(id)arg0 ;
+(void)load;
-(BOOL)startWithError:(*id)arg0 ;
-(id)_defaultValueWithOption:(id)arg0 ;
-(id)_makeInstrumentalsForIteration:(id)arg0 shouldCopy:(BOOL)arg1 ;
-(id)_transitionWithState:(NSUInteger)arg0 iteration:(struct ? *)arg1 instrumentals:(id)arg2 ;
-(id)_validOptionKeys;
-(id)_valueWithOption:(id)arg0 userOptions:(id)arg1 ;
-(id)initWithInstrumentals:(id)arg0 ;
-(id)measureAutomatically:(NSUInteger)arg0 block:(id)arg1 ;
-(id)measureAutomatically:(NSUInteger)arg0 options:(id)arg1 block:(id)arg2 ;
-(id)measureBlock:(id)arg0 ;
-(id)measureWithOptions:(id)arg0 block:(id)arg1 ;
-(id)stop;
-(id)stopWithError:(*id)arg0 ;
-(void)_makePerfDataFromMXMResults:(id)arg0 testName:(id)arg1 ;
-(void)_prepareIteration:(struct ? *)arg0 options:(id)arg1 instrumentals:(id)arg2 errors:(id)arg3 ;
-(void)_setupAndRunWithIteration:(struct ? *)arg0 spawnThread:(BOOL)arg1 attrs:(struct _opaque_pthread_attr_t *)arg2 pthread:(struct _opaque_pthread_t **)arg3 returnCode:(*NSUInteger)arg4 ;
-(void)dealloc;
-(void)start;


@end


#endif