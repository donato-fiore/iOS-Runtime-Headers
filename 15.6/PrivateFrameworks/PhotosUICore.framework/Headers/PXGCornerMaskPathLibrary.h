// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGCORNERMASKPATHLIBRARY_H
#define PXGCORNERMASKPATHLIBRARY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PXGCornerMaskPathLibrary : NSObject {
    NSMutableDictionary *_cache;
}




+(id)sharedLibrary;
-(id)init;
-(id)pathForCornerRadius:(CGFloat)arg0 continuousCorners:(BOOL)arg1 screenScale:(CGFloat)arg2 maskColor:(id)arg3 ;


@end


#endif