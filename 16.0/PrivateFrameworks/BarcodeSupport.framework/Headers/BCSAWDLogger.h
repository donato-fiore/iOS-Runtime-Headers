// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSAWDLOGGER_H
#define BCSAWDLOGGER_H


#import <Foundation/Foundation.h>


@interface BCSAWDLogger : NSObject



+(id)sharedLogger;
-(id)barcodeDetectedEventForAction:(id)arg0 ;
-(int)_awdBarcodeClientType;
-(int)_awdBarcodeDataTypeFromAction:(id)arg0 ;
-(int)_awdBarcodePreferredAppLinkOpenStrategyFromURLAction:(id)arg0 ;
-(int)_awdBarcodeSourceTypeForAction:(id)arg0 ;
-(int)_awdBarcodeURLTypeFromURLAction:(id)arg0 ;
-(int)_awdInvalidBarcodeDataTypeFromInvalidData:(id)arg0 ;
-(void)logBarcodeActivatedEventForAction:(id)arg0 ;
-(void)logBarcodeDetectedEvent:(id)arg0 startTime:(NSUInteger)arg1 ;
-(void)logBarcodeDetectedEventForAction:(id)arg0 startTime:(NSUInteger)arg1 ;
-(void)logBarcodePreviewedEventForContentType:(NSInteger)arg0 ;


@end


#endif