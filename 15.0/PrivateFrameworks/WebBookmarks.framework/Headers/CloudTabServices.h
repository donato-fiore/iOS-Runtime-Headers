// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLOUDTABSERVICES_H
#define CLOUDTABSERVICES_H


#import <Foundation/Foundation.h>


@interface CloudTabServices : NSObject



+(id)_serverConnection;
+(void)clearAllCloudTabDevices;
+(void)clearTabsForCurrentDevice;
+(void)didToggleCloudTabs:(BOOL)arg0 ;
+(void)didToggleCloudTabs:(BOOL)arg0 terminateAfterUpdating:(BOOL)arg1 ;


@end


#endif