// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTDATAPROVIDERSERVICEXPCPROXY_H
#define GTDATAPROVIDERSERVICEXPCPROXY_H

@protocol GTDataProviderService, OS_os_log;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"

@interface GTDataProviderServiceXPCProxy : NSObject <GTDataProviderService>

 {
    GTServiceConnection *_connection;
    NSObject<OS_os_log> *_log;
}




-(BOOL)targetsDevice:(id)arg0 ;
-(NSUInteger)maxFragmentBytesForDevice:(id)arg0 ;
-(id)getData:(NSUInteger)arg0 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)uploadFragment:(id)arg0 forHandle:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif