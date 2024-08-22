// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCREPORTINGDEVICEIDENTITYPROPERTIESLOADER_H
#define MPCREPORTINGDEVICEIDENTITYPROPERTIESLOADER_H

@class NSString;
@protocol MPCReportingIdentityPropertiesLoading, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPCReportingDeviceIdentityPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading>

 {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedLoader;
-(id)init;
-(void)loadReportingIdentityPropertiesWithCompletionHandler:(id)arg0 ;


@end


#endif