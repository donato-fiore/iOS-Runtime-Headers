// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDWACBROWSER_H
#define HMDWACBROWSER_H

@class NSMutableDictionary, HMFMessageDispatcher, NSString;
@protocol HMDWACScannerDelegate, HMFLogging, OS_dispatch_queue, HMDWACScanner, HMDWACBrowserDelegate;

#import <Foundation/Foundation.h>


@interface HMDWACBrowser : NSObject <HMDWACScannerDelegate, HMFLogging>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id<HMDWACScanner> *_wacScanner;
    NSMutableDictionary *_unassociatedAccessories;
    HMFMessageDispatcher *_messageDispatcher;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDWACBrowserDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL scanIsActive; // ivar: _scanIsActive
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithWACScanner:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)clearBackoff;
-(void)requestBackoff;
-(void)scanner:(id)arg0 didAddDevice:(id)arg1 ;
-(void)scanner:(id)arg0 didError:(id)arg1 ;
-(void)scanner:(id)arg0 didRemoveDevice:(id)arg1 ;
-(void)scanner:(id)arg0 didUpdateDevice:(id)arg1 ;
-(void)scannerDidStop:(id)arg0 ;
-(void)startBrowsingForAccessories;
-(void)startBrowsingForAirPlayWACAccessoriesWithBrowser:(id)arg0 ;
-(void)stopBrowsingForAccessories;


@end


#endif