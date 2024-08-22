// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUWIFISCANNER_H
#define CUWIFISCANNER_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUWiFiScanner : NSObject {
    BOOL _activateCalled;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _scanning;
    NSObject<OS_dispatch_source> *_scanTimer;
    BOOL _suspended;
    *LogCategory _ucat;
}


@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) unsigned int scanFlags; // ivar: _scanFlags
@property (copy, nonatomic) NSString *ssid; // ivar: _ssid


-(id)init;
-(void)_cleanup;
-(void)_invalidated;
-(void)_scanWiFiFinished:(id)arg0 status:(int)arg1 ;
-(void)_scanWiFiProcessResult:(id)arg0 ;
-(void)_scanWiFiStart;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)suspend;


@end


#endif