// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFSAFARIDATASHARINGCONTROLLER_H
#define _SFSAFARIDATASHARINGCONTROLLER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _SFSafariDataSharingController : NSObject {
    NSObject<OS_dispatch_queue> *_dataSharingQueue;
    NSMutableArray *_appBundlesWithSeparateData;
}




+(id)sharedController;
-(id)init;
-(id)systemDataContainerURLWithAppBundleID:(id)arg0 ;
-(void)_loadAppBundlesWithSeparateDataIfNeeded;
-(void)checkInAppBundleIDIfNeeded:(id)arg0 ;
-(void)clearAllWebsitesData;


@end


#endif