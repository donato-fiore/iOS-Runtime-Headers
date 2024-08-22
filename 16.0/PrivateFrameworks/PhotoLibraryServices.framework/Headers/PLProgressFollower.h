// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPROGRESSFOLLOWER_H
#define PLPROGRESSFOLLOWER_H

@class NSProgress;

#import <Foundation/Foundation.h>


@interface PLProgressFollower : NSObject {
    id *_progressHandler;
    BOOL _invalidated;
    os_unfair_lock_s _lock;
}


@property (retain) NSProgress *outputProgress; // ivar: _outputProgress
@property (readonly) NSProgress *sourceProgress; // ivar: _sourceProgress


-(id)initWithSourceProgress:(id)arg0 progressHandler:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif