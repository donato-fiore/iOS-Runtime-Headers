// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERITEMOUTPUT_H
#define AVPLAYERITEMOUTPUT_H


#import <Foundation/Foundation.h>

#import "AVPlayerItemOutputInternal.h"

@interface AVPlayerItemOutput : NSObject {
    AVPlayerItemOutputInternal *_outputInternal;
}


@property (nonatomic) BOOL suppressesPlayerRendering;


-(BOOL)_attachToPlayerItem:(id)arg0 ;
-(id)_weakReference;
-(id)init;
-(struct ? )_itemTimeForHostTimeAsCMTime:(struct ? )arg0 ;
-(struct ? )itemTimeForHostTime:(CGFloat)arg0 ;
-(struct ? )itemTimeForMachAbsoluteTime:(NSInteger)arg0 ;
-(struct OpaqueCMTimebase *)_copyTimebase;
-(void)_detachFromPlayerItem;
-(void)_setTimebase:(struct OpaqueCMTimebase *)arg0 ;
-(void)dealloc;


@end


#endif