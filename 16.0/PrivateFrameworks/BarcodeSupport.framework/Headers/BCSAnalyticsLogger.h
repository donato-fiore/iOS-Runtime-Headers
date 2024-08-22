// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSANALYTICSLOGGER_H
#define BCSANALYTICSLOGGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BCSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedLogger;
-(id)_eventPayloadForAction:(id)arg0 ;
-(id)_initWithQueue:(id)arg0 ;
-(id)_stringForCodeType:(NSInteger)arg0 ;
-(id)_stringForDataType:(NSInteger)arg0 ;
-(void)_sendEventLazyWithName:(id)arg0 payload:(id)arg1 ;
-(void)didActivateNFCReader;
-(void)didScanNFCTagOfType:(NSInteger)arg0 ;
-(void)logBarcodeActivatedEventForAction:(id)arg0 ;
-(void)logBarcodeDetectedEventForAction:(id)arg0 fromBundleID:(id)arg1 ;
-(void)logBarcodeDetectedEventForAction:(id)arg0 startTime:(NSUInteger)arg1 ;
-(void)logBarcodePreviewedEventForContentType:(NSInteger)arg0 ;


@end


#endif