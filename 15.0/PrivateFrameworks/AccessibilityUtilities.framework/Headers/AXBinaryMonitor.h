// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXBINARYMONITOR_H
#define AXBINARYMONITOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXBinaryMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *appExtensionHandlerMap; // ivar: _appExtensionHandlerMap
@property (retain, nonatomic) NSMutableDictionary *appHandlerMap; // ivar: _appHandlerMap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *binaryMonitorQueue; // ivar: _binaryMonitorQueue
@property (retain, nonatomic) NSMutableDictionary *bundleHandlerMap; // ivar: _bundleHandlerMap
@property (retain, nonatomic) NSMutableDictionary *dylibHandlerMap; // ivar: _dylibHandlerMap
@property (retain, nonatomic) NSMutableDictionary *frameworkHandlerMap; // ivar: _frameworkHandlerMap


+(id)sharedInstance;
+(void)initialize;
-(BOOL)_loadImageIsApp:(id)arg0 ;
-(BOOL)_loadImageIsAppExtension:(id)arg0 ;
-(BOOL)_loadImageIsBundle:(id)arg0 ;
-(BOOL)_loadImageIsDylib:(id)arg0 ;
-(BOOL)_loadImageIsFramework:(id)arg0 ;
-(id)_appExtensionNameForImage:(id)arg0 ;
-(id)_appNameForImage:(id)arg0 ;
-(id)_bundleNameAndType:(id)arg0 ;
-(id)_bundleNameForImage:(id)arg0 ;
-(id)_dylibNameForImage:(id)arg0 ;
-(id)_frameworkNameForImage:(id)arg0 ;
-(id)init;
// -(void)_addHandler:(id)arg0 withName:(unk)arg1 toMap:(id)arg2  ;
-(void)_applyHandlerBlocks:(id)arg0 handlerMap:(id)arg1 ;
-(void)_handleLoadedImagePath:(id)arg0 ;
// -(void)addHandler:(id)arg0 forApp:(unk)arg1  ;
// -(void)addHandler:(id)arg0 forAppExtension:(unk)arg1  ;
// -(void)addHandler:(id)arg0 forBundleID:(unk)arg1  ;
// -(void)addHandler:(id)arg0 forBundleName:(unk)arg1  ;
// -(void)addHandler:(id)arg0 forDylib:(unk)arg1  ;
// -(void)addHandler:(id)arg0 forFramework:(unk)arg1  ;
-(void)evaluateExistingBinaries;


@end


#endif