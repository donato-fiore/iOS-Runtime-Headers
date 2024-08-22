// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVLIVEPLAYERCARENDERLINK_H
#define PVLIVEPLAYERCARENDERLINK_H

@class CADisplayLink;


#import "PVLivePlayerRenderLink.h"

@interface PVLivePlayerCARenderLink : PVLivePlayerRenderLink {
    NSInteger _prefferedCADisplayFPS;
    CADisplayLink *_displayLink;
}


@property (nonatomic) NSInteger prefferedCADisplayFPS;


-(id)initWithCADisplayLinkFPS:(NSInteger)arg0 ;
-(void)displayLinkFired:(id)arg0 ;
-(void)rebuild;
-(void)teardown;


@end


#endif