// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTACTIVITYTRACETAPLOCALDELEGATE_H
#define DTACTIVITYTRACETAPLOCALDELEGATE_H

@class XRMobileAgentDock, NSString;
@protocol DTOSLogLoaderDelegate, DTTapLocalDelegate, OS_dispatch_source, DVTDeviceGlobalStatusIndicator;

#import <Foundation/Foundation.h>

#import "DTTapLocal.h"
#import "DTActivityTraceTapConfig.h"
#import "DTOSLogLoader.h"
#import "DTActivityTraceTapLocalShuttle.h"

@interface DTActivityTraceTapLocalDelegate : NSObject <DTOSLogLoaderDelegate, DTTapLocalDelegate>

 {
    DTTapLocal *_tap;
    DTActivityTraceTapConfig *_config;
    DTOSLogLoader *_loaderStop;
    XRMobileAgentDock *_dock;
    DTActivityTraceTapLocalShuttle *_shuttle;
    NSObject<OS_dispatch_source> *_harLoggingTimer;
    int _harLoggingNotificationToken;
    id<DVTDeviceGlobalStatusIndicator> *_recordingStatusIndicator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canFetchWhileArchiving;
-(id)initWithConfig:(id)arg0 ;
-(id)validateConfig;
-(void)_handleHARExternalNotificationChange;
-(void)_handleStopOfHARRecordingCausedByUser;
-(void)_setupHARDisabledByExternalClientNotifications;
-(void)_tearDownHARDisabledNotifications;
-(void)dealloc;
-(void)fetchDataForReason:(NSUInteger)arg0 block:(id)arg1 ;
-(void)initializeHARTimer;
-(void)logLoaderNeedsFetchNow:(id)arg0 ;
-(void)pause;
-(void)setTap:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)tearDownHARTimer;
-(void)unpause;
-(void)updateHARLogPrefsWithIsEnabled:(BOOL)arg0 ;


@end


#endif