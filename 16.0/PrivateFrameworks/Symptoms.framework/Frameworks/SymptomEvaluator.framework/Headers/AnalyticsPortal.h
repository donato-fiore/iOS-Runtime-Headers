// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANALYTICSPORTAL_H
#define ANALYTICSPORTAL_H

@class NSXPCListener;

#import <Foundation/Foundation.h>

#import "ServiceImpl.h"

@interface AnalyticsPortal : NSObject {
    NSXPCListener *listener;
    ServiceImpl *si;
}




+(id)sharedInstance;
+(void)clientTransactionsRelease;
+(void)setListeningPort:(char *)arg0 queue:(id)arg1 ;
+(void)shutdown;
-(void)clientTransactionsRelease;
-(void)setListeningPort:(char *)arg0 queue:(id)arg1 ;
-(void)shutdown;


@end


#endif