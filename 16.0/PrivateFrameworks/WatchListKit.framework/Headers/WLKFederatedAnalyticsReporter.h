// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKFEDERATEDANALYTICSREPORTER_H
#define WLKFEDERATEDANALYTICSREPORTER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface WLKFederatedAnalyticsReporter : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


+(id)defaultFederatedAnalyticsReporter;
-(void)_invalidationHandler;
-(void)reportPunchout:(id)arg0 ;


@end


#endif