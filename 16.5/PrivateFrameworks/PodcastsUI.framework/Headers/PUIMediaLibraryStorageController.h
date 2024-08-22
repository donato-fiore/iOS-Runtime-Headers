// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMEDIALIBRARYSTORAGECONTROLLER_H
#define PUIMEDIALIBRARYSTORAGECONTROLLER_H


#import <Foundation/Foundation.h>


@interface PUIMediaLibraryStorageController : NSObject {
    ? _storageCleanupObservers;
    ? _globalAutomaticDownloadLimit;
    ? activeObserver;
    ? globalDownloadLimitObserver;
    ? downloadedAssetsAsPercentageOfTotalSpace;
    ? _ignoredAssetsAsPercentageOfTotalSpace;
    ? _shouldDisplayStorageCleanupTip;
    ? _shouldDisplayStorageCleanupTipPublisher;
}


@property (nonatomic) BOOL shouldDisplayStorageCleanupTip;


+(id)shared;
-(NSInteger)observeStorageCleanupChange:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)ignoreStorageCleanupPrompt;
-(void)mediaLibraryDidChange;
-(void)refreshDownloadedAssets;
-(void)removeStorageCleanupChangeObserverWith:(NSInteger)arg0 ;


@end


#endif