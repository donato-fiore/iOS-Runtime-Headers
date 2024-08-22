// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRDEVICESETUPBROWSER_H
#define TRDEVICESETUPBROWSER_H

@class NSString;
@protocol TRTransferBrowserDelegate, TRDeviceSetupBrowserDelegate;

#import <Foundation/Foundation.h>

#import "TRDeviceSetupPeripheral.h"
#import "TRTransferBrowser.h"

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TRDeviceSetupBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TRDeviceSetupPeripheral *peripheral; // ivar: _peripheral
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (retain, nonatomic) TRTransferBrowser *transferBrowser; // ivar: _transferBrowser


-(id)init;
-(void)browser:(id)arg0 didReceiveData:(id)arg1 replyHandler:(id)arg2 ;
-(void)browser:(id)arg0 didStartTransferWithSendDataHandler:(id)arg1 ;
-(void)browserDidChangeState:(id)arg0 ;
-(void)browserDidDisconnect:(id)arg0 ;
-(void)defer;
-(void)start;
-(void)stop;


@end


#endif