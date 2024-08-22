// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGASQUERYPROXY_H
#define WFGASQUERYPROXY_H

@class NSString;
@protocol WFWiFiGasProxy;

#import <Foundation/Foundation.h>


@interface WFGasQueryProxy : NSObject <WFWiFiGasProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *__WiFiDeviceClient device; // ivar: _device
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_processGasResults:(id)arg0 error:(int)arg1 ;
-(void)gasQueryForRecords:(id)arg0 request:(id)arg1 handler:(id)arg2 ;


@end


#endif