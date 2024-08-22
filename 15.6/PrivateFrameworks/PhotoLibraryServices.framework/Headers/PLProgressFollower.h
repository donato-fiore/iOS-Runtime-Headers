// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPROGRESSFOLLOWER_H
#define PLPROGRESSFOLLOWER_H

@class NSProgress;

#import <Foundation/Foundation.h>


@interface PLProgressFollower : NSObject {
    id *_progressHandler;
}


@property (retain) NSProgress *outputProgress; // ivar: _outputProgress
@property (readonly) NSProgress *sourceProgress; // ivar: _sourceProgress


-(id)initWithSourceProgress:(id)arg0 progressHandler:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif