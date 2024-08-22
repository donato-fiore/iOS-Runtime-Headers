// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UVAGENTCONTROLSERVICEMONITOR_H
#define UVAGENTCONTROLSERVICEMONITOR_H

@class BSServiceConnectionEndpointMonitor, NSString;
@protocol BSServiceConnectionEndpointMonitorDelegate;

#import <Foundation/Foundation.h>

#import "_TtC17PreviewsInjection14UVControlAgent.h"

@interface UVAgentControlServiceMonitor : NSObject <BSServiceConnectionEndpointMonitorDelegate>

 {
    BSServiceConnectionEndpointMonitor *_endpointMonitor;
    _TtC17PreviewsInjection14UVControlAgent *_agent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)load;
-(id)init;
-(void)activate;
-(void)monitor:(id)arg0 didReceiveEndpoint:(id)arg1 ;
-(void)monitor:(id)arg0 willLoseEndpoint:(id)arg1 ;


@end


#endif