// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWIDGETMETRICSSERVER_H
#define SBSWIDGETMETRICSSERVER_H

@class BSServiceConnection, NSString;
@protocol SBSWidgetMetricsProviding;

#import <Foundation/Foundation.h>


@interface SBSWidgetMetricsServer : NSObject <SBSWidgetMetricsProviding>

 {
    BSServiceConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)checkOutServerInstance;
+(void)returnServerInstance:(id)arg0 ;
-(id)_init;
-(id)init;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg0 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg0 displayContext:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)systemMetricsForWidget:(id)arg0 ;
-(void)_createConnection;
-(void)dealloc;


@end


#endif