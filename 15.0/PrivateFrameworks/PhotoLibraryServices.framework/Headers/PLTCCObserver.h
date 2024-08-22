// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTCCOBSERVER_H
#define PLTCCOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryBundleController.h"

@interface PLTCCObserver : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}




-(id)_systemPhotoLibrary;
-(id)initWithLibraryBundleController:(id)arg0 ;
-(void)_handleTCCEvent:(NSUInteger)arg0 auth_record:(id)arg1 ;
-(void)registerAsTCCObserver;


@end


#endif