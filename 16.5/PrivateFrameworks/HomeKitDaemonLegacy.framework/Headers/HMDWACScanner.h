// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDWACSCANNER_H
#define HMDWACSCANNER_H

@class CUWiFiScanner, NSString;
@protocol HMFLogging, HAPAirPlayAccessoryBrowserDelegate, HMDWACScanner, OS_dispatch_queue, HMDWACScannerDelegate;

#import <Foundation/Foundation.h>


@interface HMDWACScanner : NSObject <HMFLogging, HAPAirPlayAccessoryBrowserDelegate, HMDWACScanner>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CUWiFiScanner *_wifiScanner;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDWACScannerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)init;
-(void)backoff;
-(void)resume;
-(void)start;
-(void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)arg0 ;
-(void)stop;
-(void)wacBrowser:(id)arg0 didFindAirPlayDevice:(id)arg1 ;
-(void)wacBrowser:(id)arg0 didRemoveAirPlayDevice:(id)arg1 ;
-(void)wacBrowser:(id)arg0 didUpdateAirPlayDevice:(id)arg1 ;


@end


#endif