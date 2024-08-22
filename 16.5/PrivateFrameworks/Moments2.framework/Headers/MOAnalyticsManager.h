// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOANALYTICSMANAGER_H
#define MOANALYTICSMANAGER_H

@class NSXPCConnection;
@protocol MOAnalyticsManagerXPCProtocol;

#import <Foundation/Foundation.h>


@interface MOAnalyticsManager : NSObject {
    NSXPCConnection *connection;
    id<MOAnalyticsManagerXPCProtocol> *proxy;
}




+(id)defaultManager;
-(id)context;
-(id)init;
-(void)fetchPhotoAnalyticsMetricsWithHandler:(id)arg0 ;


@end


#endif