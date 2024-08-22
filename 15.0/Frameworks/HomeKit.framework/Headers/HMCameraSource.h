// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMCAMERASOURCE_H
#define HMCAMERASOURCE_H

@class HMFUnfairLock;

#import <Foundation/Foundation.h>

#import "_HMCameraSource.h"

@interface HMCameraSource : NSObject {
    HMFUnfairLock *_lock;
}


@property (readonly) CGFloat aspectRatio;
@property (readonly) CGFloat currentAspectRatio;
@property (retain, nonatomic) _HMCameraSource *source; // ivar: _source


-(id)initWithSource:(id)arg0 ;


@end


#endif