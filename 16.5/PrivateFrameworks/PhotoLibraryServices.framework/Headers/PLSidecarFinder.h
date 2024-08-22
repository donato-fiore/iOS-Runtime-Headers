// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSIDECARFINDER_H
#define PLSIDECARFINDER_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface PLSidecarFinder : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSCache *cachedSidecarURLsByDirectory; // ivar: _cachedSidecarURLsByDirectory


+(BOOL)_isValidExtensionForSidecar:(id)arg0 context:(id)arg1 ;
+(id)_findPotentialSidecarURLsInDirectory:(id)arg0 context:(id)arg1 ;
-(id)collectSidecarURLsForAssetFilename:(id)arg0 inDirectory:(id)arg1 context:(id)arg2 removeWhenDone:(BOOL)arg3 ;
-(id)init;
-(void)reset;


@end


#endif