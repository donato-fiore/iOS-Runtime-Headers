// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDMIRROREDPROGRESS_H
#define _HDMIRROREDPROGRESS_H

@class NSProgress;



@interface _HDMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
    os_unfair_lock_s _lock;
}




-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif