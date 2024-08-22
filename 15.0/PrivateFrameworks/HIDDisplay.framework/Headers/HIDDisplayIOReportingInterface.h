// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HIDDISPLAYIOREPORTINGINTERFACE_H
#define HIDDISPLAYIOREPORTINGINTERFACE_H

@class NSDictionary;
@protocol OS_dispatch_queue;


#import "HIDDisplayInterface.h"

@interface HIDDisplayIOReportingInterface : HIDDisplayInterface {
    NSDictionary *_usageElementMap;
    id *_dataHandler;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)setOutputData:(id)arg0 error:(*id)arg1 ;
-(BOOL)setupIOReporting;
-(id)getHIDDevices;
-(id)initWithContainerID:(id)arg0 ;
-(id)initWithService:(unsigned int)arg0 ;
-(void)activate;
-(void)cancel;
-(void)setCancelHandler:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)setInputDataHandler:(id)arg0 ;


@end


#endif