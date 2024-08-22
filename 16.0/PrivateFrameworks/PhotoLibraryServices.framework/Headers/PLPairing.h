// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPAIRING_H
#define PLPAIRING_H

@class NSPredicate;

#import <Foundation/Foundation.h>


@interface PLPairing : NSObject {
    NSPredicate *_locatedInUsersPhotoLibrary;
    os_unfair_lock_s _lock;
}




-(BOOL)processPairingForEntireLibraryInContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)processPairingForGroupIDs:(id)arg0 inContext:(id)arg1 deferredProcessingNeeded:(*BOOL)arg2 error:(*id)arg3 ;
-(id)init;


@end


#endif