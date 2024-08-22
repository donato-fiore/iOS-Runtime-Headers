// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTORAGEDATAINTERFACE_H
#define STSTORAGEDATAINTERFACE_H


#import <Foundation/Foundation.h>

#import "STStorageAppsMonitor.h"

@interface STStorageDataInterface : NSObject

@property (retain) STStorageAppsMonitor *appsMonitor; // ivar: _appsMonitor


+(id)storageInfoDict_Remote;
-(id)appSizesDict;
-(id)apps;
-(id)appsOrderedByName;
-(id)appsOrderedBySize;
-(id)categorySizesDict;
-(id)init;
-(id)storageInfoDict;


@end


#endif