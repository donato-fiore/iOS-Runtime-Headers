// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMEDIAREMOTEDEVICEQUERY_H
#define _TVRCMEDIAREMOTEDEVICEQUERY_H

@protocol _TVRCMediaRemoteDeviceQueryDelegate;

#import <Foundation/Foundation.h>


@interface _TVRCMediaRemoteDeviceQuery : NSObject {
    *void _televisionController;
}


@property (weak, nonatomic) NSObject<_TVRCMediaRemoteDeviceQueryDelegate> *delegate; // ivar: _delegate


-(BOOL)_shouldUseMediaRemoteForConnection:(*void)arg0 ;
-(void)_discoveredTelevision:(*void)arg0 ;
-(void)_removedTelevision:(*void)arg0 ;
-(void)start;
-(void)stop;


@end


#endif