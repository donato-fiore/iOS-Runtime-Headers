// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VEKPROGRESSWATCHER_H
#define VEKPROGRESSWATCHER_H


#import <Foundation/Foundation.h>

#import "VEKProgress.h"

@interface VEKProgressWatcher : NSObject

@property (weak, nonatomic) id *observedObject; // ivar: _observedObject
@property (retain, nonatomic) VEKProgress *progress; // ivar: _progress
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) BOOL progressIncludesDownload; // ivar: _progressIncludesDownload


-(id)initWithObservedObject:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif