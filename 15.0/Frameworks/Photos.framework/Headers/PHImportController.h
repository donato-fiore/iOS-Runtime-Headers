// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHIMPORTCONTROLLER_H
#define PHIMPORTCONTROLLER_H

@class NSString, ICDeviceBrowser, NSMutableDictionary, NSHashTable;
@protocol ICDeviceBrowserDelegate;

#import <Foundation/Foundation.h>


@interface PHImportController : NSObject <ICDeviceBrowserDelegate>

 {
    os_unfair_lock_s _sourceListLock;
    os_unfair_lock_s _importInProgressLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICDeviceBrowser *deviceBrowser; // ivar: _deviceBrowser
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL importInProgress; // ivar: _importInProgress
@property (retain, nonatomic) NSMutableDictionary *importSources; // ivar: _importSources
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) id *processInfoActivityToken; // ivar: _processInfoActivityToken
@property (readonly) Class superclass;


+(BOOL)isDeviceVolumeAtURL:(id)arg0 ;
+(BOOL)isValidFolderAtURL:(id)arg0 ;
+(id)sharedInstance;
+(void)dispatchApply:(NSUInteger)arg0 withConcurrencyLimit:(NSUInteger)arg1 canceler:(id)arg2 ofBlock:(id)arg3 ;
-(BOOL)sourceIsConnected:(id)arg0 ;
-(id)filterDuplicates:(id)arg0 onSource:(id)arg1 library:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(id)importUrls:(id)arg0 intoLibrary:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3 performanceDelegate:(id)arg4 atEnd:(id)arg5 ;
-(id)importUrls:(id)arg0 withOptions:(id)arg1 delegate:(id)arg2 atEnd:(id)arg3 ;
-(id)init;
-(id)supportedTypes;
-(void)_addImportSource:(id)arg0 ;
-(void)_notifyOfFailureToAddImportSource:(id)arg0 exceptions:(id)arg1 ;
-(void)_removeImportSourceWithUUID:(id)arg0 ;
-(void)accessSourceList:(id)arg0 ;
-(void)addImportControllerObserver:(id)arg0 ;
-(void)addImportSourceForUrls:(id)arg0 ;
-(void)deviceBrowser:(id)arg0 didAddDevice:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)deviceBrowser:(id)arg0 didRemoveDevice:(id)arg1 moreGoing:(BOOL)arg2 ;
-(void)enableDeviceImport;
-(void)importAssets:(id)arg0 fromImportSource:(id)arg1 intoLibrary:(id)arg2 withOptions:(id)arg3 progress:(*id)arg4 delegate:(id)arg5 performanceDelegate:(id)arg6 atEnd:(id)arg7 ;
-(void)importAssets:(id)arg0 fromImportSource:(id)arg1 intoLibraryAtURL:(id)arg2 withOptions:(id)arg3 progress:(*id)arg4 delegate:(id)arg5 performanceDelegate:(id)arg6 atEnd:(id)arg7 ;
-(void)importAssets:(id)arg0 fromImportSource:(id)arg1 withOptions:(id)arg2 progress:(*id)arg3 delegate:(id)arg4 atEnd:(id)arg5 ;
-(void)importEnding;
-(void)importStarting;
-(void)removeImportSource:(id)arg0 ;


@end


#endif