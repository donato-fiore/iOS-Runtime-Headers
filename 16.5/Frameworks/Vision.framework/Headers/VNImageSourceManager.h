// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNIMAGESOURCEMANAGER_H
#define VNIMAGESOURCEMANAGER_H

@class NSURL, NSData;

#import <Foundation/Foundation.h>


@interface VNImageSourceManager : NSObject {
    os_unfair_lock_s _getOrientationLock;
    os_unfair_lock_s _loadSubSample1Lock;
    os_unfair_lock_s _loadSubSample2Lock;
    os_unfair_lock_s _loadSubSample4Lock;
    os_unfair_lock_s _loadSubSample8Lock;
    *CGImageSource _imageSourceSubsample1;
    *CGImageSource _imageSourceSubsample2;
    *CGImageSource _imageSourceSubsample4;
    *CGImageSource _imageSourceSubsample8;
    NSURL *_imageURL;
    NSData *_imageData;
    unsigned int _orientation;
}




-(?)_obtainCreatedCGImageSourceRefAtAddress:(?)arg0 forSubSampleFactor:(?)arg1 protectedWithUnfairLockoperatingInLowPriority;
-(struct CGImageSource *)obtainImageSourceRefWithSubSampleFactor:(unsigned int)arg0 andLowPriorityHint:(BOOL)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif