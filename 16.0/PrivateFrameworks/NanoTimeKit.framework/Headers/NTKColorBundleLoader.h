// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOLORBUNDLELOADER_H
#define NTKCOLORBUNDLELOADER_H

@class NSURL, NSArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKBundleLoader.h"

@interface NTKColorBundleLoader : NSObject

@property (retain, nonatomic) NTKBundleLoader *bundleLoader; // ivar: _bundleLoader
@property (retain, nonatomic) NSObject<OS_dispatch_source> *colorBundleSource; // ivar: _colorBundleSource
@property (retain, nonatomic) NSURL *colorBundlesDirectory; // ivar: _colorBundlesDirectory
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSArray *sortedBundles; // ivar: _sortedBundles


+(id)sharedInstance;
-(id)init;
-(id)loadColorBundles;
-(id)sortedBundles:(id)arg0 ;
-(void)_startMonitoringColorBundlesDirectoryIfNeeded;


@end


#endif