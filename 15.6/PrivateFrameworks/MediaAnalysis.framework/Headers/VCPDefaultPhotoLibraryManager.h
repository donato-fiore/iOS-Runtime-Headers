// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPDEFAULTPHOTOLIBRARYMANAGER_H
#define VCPDEFAULTPHOTOLIBRARYMANAGER_H

@class NSURL, PHPhotoLibrary, NSString;
@protocol PHPhotoLibraryAvailabilityObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPDefaultPhotoLibraryManager : NSObject <PHPhotoLibraryAvailabilityObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_defaultPhotoLibraryURL;
    PHPhotoLibrary *_defaultPhotoLibrary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(id)defaultPhotoLibrary;
-(id)init;
-(void)closedefaultPhotoLibrary;
-(void)photoLibraryDidBecomeUnavailable:(id)arg0 ;


@end


#endif